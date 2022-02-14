
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r5l_recovery_ctx {scalar_t__ pos; scalar_t__ seq; int meta_total_blocks; struct page* meta_page; } ;
struct r5l_meta_block {scalar_t__ version; scalar_t__ meta_size; int position; int seq; scalar_t__ magic; scalar_t__ checksum; } ;
struct r5l_log {int uuid_checksum; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct r5l_meta_block*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct r5l_meta_block* FUNC_3 (struct page*) ;
 int FUNC_4 (struct r5l_log*,struct r5l_recovery_ctx*,struct page*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct r5l_log *VAR_5,
     struct r5l_recovery_ctx *VAR_6)
{
 struct page *VAR_7 = VAR_6->meta_page;
 struct r5l_meta_block *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_6->pos);
 if (VAR_11 != 0)
  return VAR_11;

 VAR_8 = FUNC_3(VAR_7);
 VAR_10 = FUNC_1(VAR_8->checksum);
 VAR_8->checksum = 0;

 if (FUNC_1(VAR_8->magic) != VAR_3 ||
     FUNC_2(VAR_8->seq) != VAR_6->seq ||
     VAR_8->version != VAR_4 ||
     FUNC_2(VAR_8->position) != VAR_6->pos)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_5->uuid_checksum, VAR_8, VAR_2);
 if (VAR_10 != VAR_9)
  return -VAR_1;

 if (FUNC_1(VAR_8->meta_size) > VAR_2)
  return -VAR_1;

 VAR_6->meta_total_blocks = VAR_0;

 return 0;
}
