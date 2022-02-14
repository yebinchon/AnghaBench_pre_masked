
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* sdp_lan_profile_p ;
typedef int int32_t ;
struct TYPE_2__ {int server_channel; int ip_subnet_radius; } ;



__attribute__((used)) static int32_t
FUNC_0(uint8_t const *VAR_0, uint32_t VAR_1)
{
 sdp_lan_profile_p VAR_2 = (sdp_lan_profile_p) VAR_0;

 if (VAR_2->server_channel < 1 ||
     VAR_2->server_channel > 30 ||
     VAR_2->ip_subnet_radius > 32)
  return (0);

 return (1);
}
