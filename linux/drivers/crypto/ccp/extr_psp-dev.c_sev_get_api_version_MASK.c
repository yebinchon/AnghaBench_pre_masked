
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sev_user_data_status {int state; int build; int api_minor; int api_major; } ;
struct TYPE_2__ {int sev_state; int build; int api_minor; int api_major; int dev; struct sev_user_data_status status_cmd_buf; } ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct sev_user_data_status*,int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct sev_user_data_status *VAR_1;
 int VAR_2 = 0, VAR_3;

 VAR_1 = &VAR_0->status_cmd_buf;
 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev,
   "SEV: failed to get status. Error: %#x\n", VAR_2);
  return 1;
 }

 VAR_0->api_major = VAR_1->api_major;
 VAR_0->api_minor = VAR_1->api_minor;
 VAR_0->build = VAR_1->build;
 VAR_0->sev_state = VAR_1->state;

 return 0;
}
