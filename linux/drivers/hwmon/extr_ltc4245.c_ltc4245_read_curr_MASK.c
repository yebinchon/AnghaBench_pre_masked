
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ltc4245_data {int* cregs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;


 int * VAR_2 ;
 long FUNC_1 (struct device*,int ) ;
 struct ltc4245_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, u32 VAR_4, int VAR_5,
        long *VAR_6)
{
 struct ltc4245_data *VAR_7 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 129:
  *VAR_6 = FUNC_1(VAR_3, VAR_2[VAR_5]);
  return 0;
 case 128:
  *VAR_6 = !!(VAR_7->cregs[VAR_1] & FUNC_0(VAR_5 + 4));
  return 0;
 default:
  return -VAR_0;
 }
}
