
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int req_events; int has_event_buffer; } ;


 unsigned long* FUNC_0 (struct ssif_info*,unsigned long*) ;
 int FUNC_1 (struct ssif_info*,unsigned long*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ssif_info *VAR_1 = (struct ssif_info *) VAR_0;
 unsigned long VAR_2, *VAR_3;

 if (!VAR_1->has_event_buffer)
  return;

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 VAR_1->req_events = 1;
 FUNC_1(VAR_1, VAR_3);
}
