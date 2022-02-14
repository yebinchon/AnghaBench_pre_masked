
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct in_addr {int dummy; } ;
typedef TYPE_1__* sdp_lan_profile_p ;
typedef TYPE_2__* provider_p ;
typedef int net ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int ip_subnet_radius; int ip_subnet; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*) ;
 char* FUNC_1 (struct in_addr) ;
 int FUNC_2 (int const*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int,char*,char*,int) ;

__attribute__((used)) static int32_t
FUNC_4(
  uint8_t *VAR_1, uint8_t const * const VAR_2,
  uint8_t const *VAR_3, uint32_t VAR_4)
{
 provider_p VAR_5 = (provider_p) VAR_3;
 sdp_lan_profile_p VAR_6 = (sdp_lan_profile_p) VAR_5->data;
 char VAR_7[32];
 int32_t VAR_8;

 VAR_8 = FUNC_3(VAR_7, sizeof(VAR_7), "%s/%d",
   FUNC_1(* (struct in_addr *) &VAR_6->ip_subnet),
   VAR_6->ip_subnet_radius);

 if (VAR_8 < 0 || VAR_1 + 2 + VAR_8 > VAR_2)
  return (-1);

 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_8, VAR_1);
 FUNC_2(VAR_1, VAR_7, VAR_8);

 return (2 + VAR_8);
}
