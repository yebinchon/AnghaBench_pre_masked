
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct hfi1_devdata *VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = VAR_1 + FUNC_1(VAR_4);
 while (1) {
  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 != -VAR_0)
   return VAR_6;

  if (FUNC_2(VAR_1, VAR_5))
   return -VAR_0;
  FUNC_3(80, 120);
 }
}
