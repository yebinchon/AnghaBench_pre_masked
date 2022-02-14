
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pip_app_cmd_head {int* parameter_data; int cmd_code; int report_id; int length; int addr; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct cyapa *VAR_6)
{
 struct pip_app_cmd_head *VAR_7;
 u8 VAR_8[10];
 u8 VAR_9[7];
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 VAR_7 = (struct pip_app_cmd_head *)VAR_8;

 FUNC_3(VAR_4, &VAR_7->addr);
 FUNC_3(sizeof(VAR_8) - 2, &VAR_7->length);
 VAR_7->report_id = VAR_3;
 VAR_7->cmd_code = VAR_1;
 VAR_7->parameter_data[0] = VAR_2;
 VAR_7->parameter_data[1] = 0x01;
 VAR_7->parameter_data[2] = 0x01;
 VAR_10 = sizeof(VAR_9);
 VAR_11 = FUNC_1(VAR_6, VAR_8, sizeof(VAR_8),
   VAR_9, &VAR_10,
   500, VAR_5, 0);
 if (VAR_11 || VAR_9[5] != VAR_2 ||
  !FUNC_0(VAR_9, VAR_1) ||
  VAR_9[6] != 0x01)
  return VAR_11 < 0 ? VAR_11 : -VAR_0;

 return 0;
}
