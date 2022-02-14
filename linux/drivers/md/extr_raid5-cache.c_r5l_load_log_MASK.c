
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r5l_meta_block {scalar_t__ version; int seq; int position; scalar_t__ checksum; scalar_t__ magic; } ;
struct r5l_log {int device_size; int max_free_space; scalar_t__ next_checkpoint; scalar_t__ last_cp_seq; scalar_t__ seq; int log_start; scalar_t__ last_checkpoint; int uuid_checksum; struct md_rdev* rdev; } ;
struct page {int dummy; } ;
struct md_rdev {scalar_t__ journal_tail; scalar_t__ sectors; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct r5l_meta_block*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 struct r5l_meta_block* FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct r5l_log*) ;
 int FUNC_8 (struct r5l_log*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct r5l_log*) ;
 int FUNC_10 (struct r5l_log*,scalar_t__,int ) ;
 int FUNC_11 (struct r5l_log*,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (struct md_rdev*,scalar_t__,int ,struct page*,int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct r5l_log *VAR_10)
{
 struct md_rdev *VAR_11 = VAR_10->rdev;
 struct page *VAR_12;
 struct r5l_meta_block *VAR_13;
 sector_t VAR_14 = VAR_10->rdev->journal_tail;
 u32 VAR_15, VAR_16;
 bool VAR_17 = 0;
 int VAR_18 = 0;


 if (VAR_14 >= VAR_11->sectors || FUNC_12(VAR_14, VAR_0) != VAR_14)
  VAR_14 = 0;
 VAR_12 = FUNC_1(VAR_3);
 if (!VAR_12)
  return -VAR_2;

 if (!FUNC_13(VAR_11, VAR_14, VAR_4, VAR_12, VAR_9, 0, 0)) {
  VAR_18 = -VAR_1;
  goto ioerr;
 }
 VAR_13 = FUNC_5(VAR_12);

 if (FUNC_3(VAR_13->magic) != VAR_5 ||
     VAR_13->version != VAR_6) {
  VAR_17 = 1;
  goto create;
 }
 VAR_15 = FUNC_3(VAR_13->checksum);
 VAR_13->checksum = 0;
 VAR_16 = FUNC_2(VAR_10->uuid_checksum, VAR_13, VAR_4);
 if (VAR_15 != VAR_16) {
  VAR_17 = 1;
  goto create;
 }
 if (FUNC_4(VAR_13->position) != VAR_14) {
  VAR_17 = 1;
  goto create;
 }
create:
 if (VAR_17) {
  VAR_10->last_cp_seq = FUNC_6();
  VAR_14 = 0;
  FUNC_8(VAR_10, VAR_14, VAR_10->last_cp_seq);





  FUNC_11(VAR_10, VAR_14);
 } else
  VAR_10->last_cp_seq = FUNC_4(VAR_13->seq);

 VAR_10->device_size = FUNC_12(VAR_11->sectors, VAR_0);
 VAR_10->max_free_space = VAR_10->device_size >> VAR_8;
 if (VAR_10->max_free_space > VAR_7)
  VAR_10->max_free_space = VAR_7;
 VAR_10->last_checkpoint = VAR_14;

 FUNC_0(VAR_12);

 if (VAR_17) {
  VAR_10->log_start = FUNC_10(VAR_10, VAR_14, VAR_0);
  VAR_10->seq = VAR_10->last_cp_seq + 1;
  VAR_10->next_checkpoint = VAR_14;
 } else
  VAR_18 = FUNC_9(VAR_10);

 FUNC_7(VAR_10);
 return VAR_18;
ioerr:
 FUNC_0(VAR_12);
 return VAR_18;
}
