
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int in_maintenance_mode; int req_events; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool VAR_1)
{
 struct smi_info *VAR_2 = VAR_0;

 if (!VAR_1)
  FUNC_0(&VAR_2->req_events, 0);
 VAR_2->in_maintenance_mode = VAR_1;
}
