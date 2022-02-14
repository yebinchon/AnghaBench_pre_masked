
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* sdp_audio_sink_profile_p ;
typedef TYPE_2__* provider_p ;
typedef int int32_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static int32_t
FUNC_2(
    uint8_t *VAR_1, uint8_t const *const VAR_2,
    uint8_t const *VAR_3, uint32_t VAR_4)
{
 provider_p VAR_5 = (provider_p) VAR_3;
 sdp_audio_sink_profile_p VAR_6 = (sdp_audio_sink_profile_p) VAR_5->data;

 if (VAR_1 + 3 > VAR_2)
  return (-1);

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_6->features, VAR_1);

 return (3);
}
