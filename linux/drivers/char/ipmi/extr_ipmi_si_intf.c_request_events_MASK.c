
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int req_events; int has_event_buffer; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct smi_info *VAR_1 = VAR_0;

 if (!VAR_1->has_event_buffer)
  return;

 FUNC_0(&VAR_1->req_events, 1);
}
