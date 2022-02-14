
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psp_device {scalar_t__ sev_state; int dev; int init_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (int ,char*) ;
 struct psp_device* VAR_3 ;

__attribute__((used)) static int FUNC_2(int *VAR_4)
{
 struct psp_device *VAR_5 = VAR_3;
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->sev_state == VAR_2)
  return 0;

 VAR_6 = FUNC_0(VAR_1, &VAR_5->init_cmd_buf, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5->sev_state = VAR_2;
 FUNC_1(VAR_5->dev, "SEV firmware initialized\n");

 return VAR_6;
}
