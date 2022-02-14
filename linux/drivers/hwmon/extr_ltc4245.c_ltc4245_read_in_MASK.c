
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ltc4245_data {int* gpios; int* cregs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 long FUNC_1 (struct device*,int ) ;
 int * VAR_3 ;
 struct ltc4245_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, u32 VAR_5, int VAR_6, long *VAR_7)
{
 struct ltc4245_data *VAR_8 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case 129:
  if (VAR_6 < 8) {
   *VAR_7 = FUNC_1(VAR_4,
      VAR_3[VAR_6]);
  } else {
   int VAR_9 = VAR_8->gpios[VAR_6 - 8];

   if (VAR_9 < 0)
    return VAR_9;
   *VAR_7 = VAR_9 * 10;
  }
  return 0;
 case 128:
  if (VAR_6 < 4)
   *VAR_7 = !!(VAR_8->cregs[VAR_1] & FUNC_0(VAR_6));
  else
   *VAR_7 = !!(VAR_8->cregs[VAR_2] &
      FUNC_0(VAR_6 - 4));
  return 0;
 default:
  return -VAR_0;
 }
}
