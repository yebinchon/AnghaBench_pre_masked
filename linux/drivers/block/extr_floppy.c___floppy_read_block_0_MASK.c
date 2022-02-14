
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb0_cbdata {int drive; int complete; } ;
struct page {int dummy; } ;
struct block_device {size_t bd_block_size; } ;
struct bio_vec {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {int bi_flags; int bi_end_io; struct rb0_cbdata* bi_private; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,struct page*,size_t,int ) ;
 int FUNC_3 (struct bio*,struct bio_vec*,int) ;
 int FUNC_4 (struct bio*,struct block_device*) ;
 int FUNC_5 (struct bio*,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct block_device *VAR_5, int VAR_6)
{
 struct bio VAR_7;
 struct bio_vec VAR_8;
 struct page *VAR_9;
 struct rb0_cbdata VAR_10;
 size_t VAR_11;

 VAR_9 = FUNC_1(VAR_2);
 if (!VAR_9) {
  FUNC_7();
  return -VAR_1;
 }

 VAR_11 = VAR_5->bd_block_size;
 if (!VAR_11)
  VAR_11 = 1024;

 VAR_10.drive = VAR_6;

 FUNC_3(&VAR_7, &VAR_8, 1);
 FUNC_4(&VAR_7, VAR_5);
 FUNC_2(&VAR_7, VAR_9, VAR_11, 0);

 VAR_7.bi_iter.bi_sector = 0;
 VAR_7.bi_flags |= (1 << VAR_0);
 VAR_7.bi_private = &VAR_10;
 VAR_7.bi_end_io = VAR_4;
 FUNC_5(&VAR_7, VAR_3, 0);

 FUNC_6(&VAR_10.complete);

 FUNC_8(&VAR_7);
 FUNC_7();

 FUNC_9(&VAR_10.complete);

 FUNC_0(VAR_9);

 return 0;
}
