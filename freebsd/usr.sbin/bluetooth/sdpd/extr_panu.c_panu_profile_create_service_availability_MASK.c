
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* sdp_panu_profile_p ;
typedef TYPE_2__* provider_p ;
typedef int int32_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int load_factor; } ;


 int FUNC_0 (int *,int const* const,int *,int) ;

__attribute__((used)) static int32_t
FUNC_1(
  uint8_t *VAR_0, uint8_t const * const VAR_1,
  uint8_t const *VAR_2, uint32_t VAR_3)
{
 provider_p VAR_4 = (provider_p) VAR_2;
 sdp_panu_profile_p VAR_5 = (sdp_panu_profile_p) VAR_4->data;

 return (FUNC_0( VAR_0, VAR_1,
   &VAR_5->load_factor, 1));
}
