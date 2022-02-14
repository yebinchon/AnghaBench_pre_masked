
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int) ;

void FUNC_3(struct hfi1_devdata *VAR_2, u64 VAR_3)
{
 FUNC_2(VAR_2, VAR_0, VAR_3 | VAR_1);
 while (1) {
  FUNC_1(1);
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if ((VAR_3 & VAR_1) == 0)
   break;
 }
}
