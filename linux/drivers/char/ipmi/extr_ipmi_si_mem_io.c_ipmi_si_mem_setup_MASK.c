
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned long addr_data; int regsize; int io_size; int regspacing; int io_cleanup; int * addr; int dev; int outputb; int inputb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (unsigned long,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct si_sm_io*,int) ;
 int * FUNC_3 (unsigned long,int,int ) ;

int FUNC_4(struct si_sm_io *VAR_13)
{
 unsigned long VAR_14 = VAR_13->addr_data;
 int VAR_15, VAR_16;

 if (!VAR_14)
  return -VAR_2;





 switch (VAR_13->regsize) {
 case 1:
  VAR_13->inputb = VAR_4;
  VAR_13->outputb = VAR_7;
  break;
 case 2:
  VAR_13->inputb = VAR_6;
  VAR_13->outputb = VAR_9;
  break;
 case 4:
  VAR_13->inputb = VAR_5;
  VAR_13->outputb = VAR_8;
  break;






 default:
  FUNC_0(VAR_13->dev, "Invalid register size: %d\n",
    VAR_13->regsize);
  return -VAR_0;
 }







 for (VAR_16 = 0; VAR_16 < VAR_13->io_size; VAR_16++) {
  if (FUNC_3(VAR_14 + VAR_16 * VAR_13->regspacing,
           VAR_13->regsize, VAR_3) == ((void*)0)) {

   FUNC_2(VAR_13, VAR_16);
   return -VAR_1;
  }
 }
 VAR_15 = ((VAR_13->io_size * VAR_13->regspacing)
     - (VAR_13->regspacing - VAR_13->regsize));
 VAR_13->addr = FUNC_1(VAR_14, VAR_15);
 if (VAR_13->addr == ((void*)0)) {
  FUNC_2(VAR_13, VAR_13->io_size);
  return -VAR_1;
 }

 VAR_13->io_cleanup = VAR_10;

 return 0;
}
