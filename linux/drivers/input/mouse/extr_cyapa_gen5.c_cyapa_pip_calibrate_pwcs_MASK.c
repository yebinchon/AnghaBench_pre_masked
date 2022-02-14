
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pip_app_cmd_head {int * parameter_data; int cmd_code; int report_id; int length; int addr; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cyapa*,int *,int *,int *) ;
 int FUNC_3 (struct cyapa*,int *,int,int *,int*,int,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct cyapa *VAR_5,
  u8 VAR_6)
{
 struct pip_app_cmd_head *VAR_7;
 u8 VAR_8[8];
 u8 VAR_9[6];
 int VAR_10;
 int VAR_11;


 FUNC_2(VAR_5, ((void*)0), ((void*)0), ((void*)0));

 FUNC_4(VAR_8, 0, sizeof(VAR_8));
 VAR_7 = (struct pip_app_cmd_head *)VAR_8;
 FUNC_5(VAR_3, &VAR_7->addr);
 FUNC_5(sizeof(VAR_8) - 2, &VAR_7->length);
 VAR_7->report_id = VAR_1;
 VAR_7->cmd_code = VAR_2;
 VAR_7->parameter_data[0] = VAR_6;
 VAR_10 = sizeof(VAR_9);
 VAR_11 = FUNC_3(VAR_5,
   VAR_8, sizeof(VAR_8),
   VAR_9, &VAR_10,
   5000, VAR_4, 1);
 if (VAR_11 || !FUNC_1(VAR_9, VAR_2) ||
   !FUNC_0(VAR_9))
  return VAR_11 < 0 ? VAR_11 : -VAR_0;

 return 0;
}
