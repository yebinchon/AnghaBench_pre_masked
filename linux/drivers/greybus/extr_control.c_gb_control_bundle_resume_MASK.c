
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_control_bundle_pm_response {int status; } ;
struct gb_control_bundle_pm_request {int bundle_id; } ;
struct gb_control {int dev; int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct gb_control_bundle_pm_request*,int,struct gb_control_bundle_pm_response*,int) ;

int FUNC_3(struct gb_control *VAR_2, u8 VAR_3)
{
 struct gb_control_bundle_pm_request VAR_4;
 struct gb_control_bundle_pm_response VAR_5;
 int VAR_6;

 VAR_4.bundle_id = VAR_3;
 VAR_6 = FUNC_2(VAR_2->connection,
    VAR_1, &VAR_4,
    sizeof(VAR_4), &VAR_5, sizeof(VAR_5));
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "failed to send bundle %u resume: %d\n",
   VAR_3, VAR_6);
  return VAR_6;
 }

 if (VAR_5.status != VAR_0) {
  FUNC_0(&VAR_2->dev, "failed to resume bundle %u: %d\n",
   VAR_3, VAR_5.status);
  return FUNC_1(VAR_5.status);
 }

 return 0;
}
