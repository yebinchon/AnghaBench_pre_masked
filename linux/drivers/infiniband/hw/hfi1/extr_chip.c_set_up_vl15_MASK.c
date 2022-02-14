
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int) ;

void FUNC_2(struct hfi1_devdata *VAR_6, u16 VAR_7)
{
 u64 VAR_8 = FUNC_0(VAR_6, VAR_2);


 VAR_8 &= ~(VAR_5 |
   VAR_3);





 VAR_8 |= (u64)VAR_7 << VAR_4;
 FUNC_1(VAR_6, VAR_2, VAR_8);

 FUNC_1(VAR_6, VAR_0, (u64)VAR_7
    << VAR_1);
}
