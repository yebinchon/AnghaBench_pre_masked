
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct block_device {int dummy; } ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int gfp_t ;


 int FUNC_0 (struct block_device*,int ,int ,int ,struct page*,struct bio**) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct bio*) ;

int FUNC_5(struct block_device *VAR_0, sector_t VAR_1,
    sector_t VAR_2, gfp_t VAR_3,
    struct page *VAR_4)
{
 struct bio *VAR_5 = ((void*)0);
 struct blk_plug VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   &VAR_5);
 if (VAR_7 == 0 && VAR_5) {
  VAR_7 = FUNC_4(VAR_5);
  FUNC_1(VAR_5);
 }
 FUNC_2(&VAR_6);
 return VAR_7;
}
