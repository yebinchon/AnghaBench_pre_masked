
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brain_link_client_fd; } ;
typedef TYPE_1__ hc_device_param_t ;


 int FUNC_0 (int) ;

void FUNC_1 (hc_device_param_t *VAR_0)
{
  if (VAR_0->brain_link_client_fd > 2)
  {
    FUNC_0 (VAR_0->brain_link_client_fd);
  }

  VAR_0->brain_link_client_fd = -1;
}
