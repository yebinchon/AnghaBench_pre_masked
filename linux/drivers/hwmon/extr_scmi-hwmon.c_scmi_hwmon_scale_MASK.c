
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scmi_sensor_info {scalar_t__ scale; int type; } ;
typedef scalar_t__ s8 ;



 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct scmi_sensor_info *VAR_1, u64 *VAR_2)
{
 s8 VAR_3 = VAR_1->scale;
 u64 VAR_4;

 switch (VAR_1->type) {
 case 129:
 case 128:
 case 132:
  VAR_3 += 3;
  break;
 case 130:
 case 131:
  VAR_3 += 6;
  break;
 default:
  break;
 }

 if (VAR_3 == 0)
  return 0;

 if (FUNC_1(VAR_3) > 19)
  return -VAR_0;

 VAR_4 = FUNC_0(FUNC_1(VAR_3));
 if (VAR_3 > 0)
  *VAR_2 *= VAR_4;
 else
  *VAR_2 = FUNC_2(*VAR_2, VAR_4);

 return 0;
}
