
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int,int,int ,struct bio**,unsigned int) ;
 int FUNC_1 (struct block_device*,int,int,int ,struct bio**) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct blk_plug*) ;
 int FUNC_7 (struct bio*) ;

int FUNC_8(struct block_device *VAR_3, sector_t VAR_4,
  sector_t VAR_5, gfp_t VAR_6, unsigned VAR_7)
{
 int VAR_8 = 0;
 sector_t VAR_9;
 struct bio *VAR_10;
 struct blk_plug VAR_11;
 bool VAR_12 = !!FUNC_3(VAR_3);

 VAR_9 = (FUNC_2(VAR_3) >> 9) - 1;
 if ((VAR_4 | VAR_5) & VAR_9)
  return -VAR_1;

retry:
 VAR_10 = ((void*)0);
 FUNC_6(&VAR_11);
 if (VAR_12) {
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5,
        VAR_6, &VAR_10, VAR_7);
 } else if (!(VAR_7 & VAR_0)) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_6, &VAR_10);
 } else {

  VAR_8 = -VAR_2;
 }
 if (VAR_8 == 0 && VAR_10) {
  VAR_8 = FUNC_7(VAR_10);
  FUNC_4(VAR_10);
 }
 FUNC_5(&VAR_11);
 if (VAR_8 && VAR_12) {
  if (!(VAR_7 & VAR_0)) {
   VAR_12 = 0;
   goto retry;
  }
  if (!FUNC_3(VAR_3)) {






   VAR_8 = -VAR_2;
  }
 }

 return VAR_8;
}
