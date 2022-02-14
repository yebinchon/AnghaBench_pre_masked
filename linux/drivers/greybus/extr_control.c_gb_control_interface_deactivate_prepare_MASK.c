
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_control_intf_pm_response {int status; } ;
struct gb_control {int dev; int connection; } ;
typedef int response ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ,struct gb_control_intf_pm_response*,int) ;

int FUNC_3(struct gb_control *VAR_2)
{
 struct gb_control_intf_pm_response VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->connection,
    VAR_1, ((void*)0),
    0, &VAR_3, sizeof(VAR_3));
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "failed to send interface deactivate prepare: %d\n",
   VAR_4);
  return VAR_4;
 }

 if (VAR_3.status != VAR_0) {
  FUNC_0(&VAR_2->dev, "interface error while preparing deactivate: %d\n",
   VAR_3.status);
  return FUNC_1(VAR_3.status);
 }

 return 0;
}
