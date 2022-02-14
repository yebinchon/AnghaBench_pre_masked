
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct hfi1_devdata *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;


 if (VAR_3->icode == VAR_1)
  return 0;

 VAR_5 = FUNC_1(VAR_4) + VAR_2;
 while (1) {
  if (FUNC_0(VAR_3) == 0xa0)
   return 0;
  if (FUNC_2(VAR_2, VAR_5))
   return -VAR_0;
  FUNC_3(1950, 2050);
 }
}
