
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
struct TYPE_3__ {int protover; int psm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int,int const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int32_t
FUNC_2(
    uint8_t *VAR_5, uint8_t const *const VAR_6,
    uint8_t const *VAR_7, uint32_t VAR_8)
{
 provider_p VAR_9 = (provider_p) VAR_7;
 sdp_audio_sink_profile_p VAR_10 = (sdp_audio_sink_profile_p) VAR_9->data;

 if (VAR_5 + 18 > VAR_6)
  return (-1);

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(16, VAR_5);

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(6, VAR_5);

 FUNC_1(VAR_2, VAR_5);
 FUNC_0(VAR_4, VAR_5);

 FUNC_1(VAR_1, VAR_5);
 FUNC_0(VAR_10->psm, VAR_5);

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(6, VAR_5);

 FUNC_1(VAR_2, VAR_5);
 FUNC_0(VAR_3, VAR_5);

 FUNC_1(VAR_1, VAR_5);
 FUNC_0(VAR_10->protover, VAR_5);

 return (18);
}
