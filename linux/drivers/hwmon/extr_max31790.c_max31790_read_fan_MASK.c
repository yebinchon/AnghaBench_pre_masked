
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max31790_data {int fault_status; int * target_count; int * fan_dynamics; int * tach; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct max31790_data*) ;
 int FUNC_1 (struct max31790_data*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;



 struct max31790_data* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, u32 VAR_2, int VAR_3,
        long *VAR_4)
{
 struct max31790_data *VAR_5 = FUNC_4(VAR_1);
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_3(VAR_5->fan_dynamics[VAR_3]);
  VAR_7 = FUNC_2(VAR_5->tach[VAR_3], VAR_6);
  *VAR_4 = VAR_7;
  return 0;
 case 128:
  VAR_6 = FUNC_3(VAR_5->fan_dynamics[VAR_3]);
  VAR_7 = FUNC_2(VAR_5->target_count[VAR_3], VAR_6);
  *VAR_4 = VAR_7;
  return 0;
 case 130:
  *VAR_4 = !!(VAR_5->fault_status & (1 << VAR_3));
  return 0;
 default:
  return -VAR_0;
 }
}
