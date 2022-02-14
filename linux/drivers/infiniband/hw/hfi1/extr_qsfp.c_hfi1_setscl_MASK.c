
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_i2c_bus {int num; struct hfi1_devdata* controlling_dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2)
{
 struct hfi1_i2c_bus *VAR_3 = (struct hfi1_i2c_bus *)VAR_1;
 struct hfi1_devdata *VAR_4 = VAR_3->controlling_dd;
 u64 VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3->num);
 VAR_5 = FUNC_1(VAR_4, VAR_6);






 if (VAR_2)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;
 FUNC_2(VAR_4, VAR_6, VAR_5);

 (void)FUNC_1(VAR_4, VAR_6);
}
