
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int,int,int ,struct bio**,unsigned int) ;
 int FUNC_1 (struct block_device*,int,int,int ,struct bio**) ;
 int FUNC_2 (struct block_device*) ;

int FUNC_3(struct block_device *VAR_3, sector_t VAR_4,
  sector_t VAR_5, gfp_t VAR_6, struct bio **VAR_7,
  unsigned VAR_8)
{
 int VAR_9;
 sector_t VAR_10;

 VAR_10 = (FUNC_2(VAR_3) >> 9) - 1;
 if ((VAR_4 | VAR_5) & VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8);
 if (VAR_9 != -VAR_2 || (VAR_8 & VAR_0))
  return VAR_9;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7);
}
