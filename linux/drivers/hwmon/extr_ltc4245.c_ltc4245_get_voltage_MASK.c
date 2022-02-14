
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ltc4245_data {int* vregs; } ;
struct device {int dummy; } ;
 int FUNC_0 (int) ;
 struct ltc4245_data* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, u8 VAR_1)
{
 struct ltc4245_data *VAR_2 = FUNC_1(VAR_0);
 const u8 VAR_3 = VAR_2->vregs[VAR_1 - 0x10];
 u32 VAR_4 = 0;

 switch (VAR_1) {
 case 136:
 case 135:
  VAR_4 = VAR_3 * 55;
  break;
 case 132:
 case 131:
  VAR_4 = VAR_3 * 22;
  break;
 case 134:
 case 133:
  VAR_4 = VAR_3 * 15;
  break;
 case 129:
 case 128:
  VAR_4 = VAR_3 * -55;
  break;
 case 130:
  VAR_4 = VAR_3 * 10;
  break;
 default:

  FUNC_0(1);
  break;
 }

 return VAR_4;
}
