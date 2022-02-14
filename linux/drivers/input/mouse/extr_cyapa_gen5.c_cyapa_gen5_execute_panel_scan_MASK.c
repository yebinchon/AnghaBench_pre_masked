
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pip_app_cmd_head {int cmd_code; int report_id; int length; int addr; } ;
struct cyapa {int dummy; } ;
typedef int ssize_t ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cyapa*,int *,int,int *,int*,int,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct cyapa *VAR_5)
{
 struct pip_app_cmd_head *VAR_6;
 u8 VAR_7[7];
 u8 VAR_8[6];
 int VAR_9;
 int VAR_10;

 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 VAR_6 = (struct pip_app_cmd_head *)VAR_7;
 FUNC_4(VAR_3, &VAR_6->addr);
 FUNC_4(sizeof(VAR_7) - 2, &VAR_6->length);
 VAR_6->report_id = VAR_2;
 VAR_6->cmd_code = VAR_1;
 VAR_9 = sizeof(VAR_8);
 VAR_10 = FUNC_2(VAR_5,
   VAR_7, sizeof(VAR_7),
   VAR_8, &VAR_9,
   500, VAR_4, 1);
 if (VAR_10 || VAR_9 != sizeof(VAR_8) ||
   !FUNC_1(VAR_8,
    VAR_1) ||
   !FUNC_0(VAR_8))
  return VAR_10 ? VAR_10 : -VAR_0;

 return 0;
}
