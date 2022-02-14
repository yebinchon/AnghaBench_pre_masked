
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ) ;

void FUNC_4(struct hfi1_devdata *VAR_5)
{
 u64 VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 while (FUNC_0(VAR_6, VAR_2) !=
        FUNC_0(VAR_6, VAR_3)) {
  if (VAR_7++ >= VAR_4)
   break;
  FUNC_2(1);
  VAR_6 = FUNC_1(VAR_5, VAR_1);
 }
 FUNC_3(VAR_5, VAR_0, 0);
}
