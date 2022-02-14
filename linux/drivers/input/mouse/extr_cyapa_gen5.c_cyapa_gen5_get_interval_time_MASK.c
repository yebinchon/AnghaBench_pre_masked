
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct pip_app_cmd_head {int cmd_code; int report_id; int length; int addr; scalar_t__ parameter_data; } ;
struct gen5_app_get_parameter_data {scalar_t__ parameter_id; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (struct cyapa*,scalar_t__*,int,scalar_t__*,int*,int,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct cyapa *VAR_9,
  u8 VAR_10, u16 *VAR_11)
{
 struct pip_app_cmd_head *VAR_12;
 struct gen5_app_get_parameter_data *VAR_13;
 u8 VAR_14[VAR_0];
 int VAR_15;
 u8 VAR_16[11];
 int VAR_17;
 u8 VAR_18;
 u16 VAR_19, VAR_20;
 int VAR_21;

 FUNC_3(VAR_14, 0, VAR_0);
 VAR_12 = (struct pip_app_cmd_head *)VAR_14;
 VAR_13 = (struct gen5_app_get_parameter_data *)
    VAR_12->parameter_data;
 VAR_15 = sizeof(struct pip_app_cmd_head) +
    sizeof(struct gen5_app_get_parameter_data);

 *VAR_11 = 0;
 switch (VAR_10) {
 case 130:
  VAR_18 = VAR_3;
  break;
 case 129:
  VAR_18 = VAR_4;
  break;
 case 128:
  VAR_18 = VAR_5;
  break;
 default:
  return -VAR_1;
 }

 FUNC_4(VAR_7, &VAR_12->addr);

 FUNC_4(VAR_15 - 2, &VAR_12->length);
 VAR_12->report_id = VAR_6;
 VAR_12->cmd_code = VAR_2;
 VAR_13->parameter_id = VAR_10;

 VAR_17 = sizeof(VAR_16);
 VAR_21 = FUNC_1(VAR_9, VAR_14, VAR_15,
   VAR_16, &VAR_17,
   500, VAR_8, 0);
 if (VAR_21 || VAR_16[5] != VAR_10 || VAR_16[6] == 0 ||
  !FUNC_0(VAR_16, VAR_2))
  return VAR_21 < 0 ? VAR_21 : -VAR_1;

 VAR_19 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
  VAR_19 |= (0xff << (VAR_20 * 8));
 *VAR_11 = FUNC_2(&VAR_16[7]) & VAR_19;

 return 0;
}
