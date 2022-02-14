
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_dynmem_device {int host_event; int state; } ;
struct dm_capabilities_resp_msg {int is_accepted; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct hv_dynmem_device *VAR_1,
   struct dm_capabilities_resp_msg *VAR_2)
{
 if (!VAR_2->is_accepted) {
  FUNC_1("Capabilities not accepted by host\n");
  VAR_1->state = VAR_0;
 }
 FUNC_0(&VAR_1->host_event);
}
