
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_i2c_bus {int controlling_dd; int num; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct hfi1_i2c_bus *VAR_2 = (struct hfi1_i2c_bus *)VAR_1;
 u64 VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_1, 1);
 FUNC_3(2);

 VAR_4 = FUNC_1(VAR_2->num);
 VAR_3 = FUNC_2(VAR_2->controlling_dd, VAR_4);
 return !!(VAR_3 & VAR_0);
}
