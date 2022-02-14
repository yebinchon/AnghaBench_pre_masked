
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int ,int ,int ,unsigned long,struct bio**) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct bio*) ;

int FUNC_5(struct block_device *VAR_1, sector_t VAR_2,
  sector_t VAR_3, gfp_t VAR_4, unsigned long VAR_5)
{
 struct bio *VAR_6 = ((void*)0);
 struct blk_plug VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
   &VAR_6);
 if (!VAR_8 && VAR_6) {
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8 == -VAR_0)
   VAR_8 = 0;
  FUNC_1(VAR_6);
 }
 FUNC_2(&VAR_7);

 return VAR_8;
}
