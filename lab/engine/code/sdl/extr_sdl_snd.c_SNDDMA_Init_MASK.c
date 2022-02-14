
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ qboolean ;
typedef int obtained ;
typedef int desired ;
struct TYPE_26__ {scalar_t__ value; } ;
struct TYPE_25__ {int integer; } ;
struct TYPE_24__ {scalar_t__ value; } ;
struct TYPE_23__ {int value; } ;
struct TYPE_22__ {int value; } ;
struct TYPE_21__ {scalar_t__ value; } ;
struct TYPE_20__ {int freq; int samples; int channels; void* format; int callback; } ;
struct TYPE_19__ {int major; scalar_t__ minor; int patch; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int samplebits; int channels; int samples; int submission_chunk; int speed; int buffer; int isfloat; } ;
typedef TYPE_1__ SDL_version ;
typedef TYPE_2__ SDL_AudioSpec ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_2__) ;
 int VAR_8 ;
 int FUNC_13 (char*,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_14 (int,int) ;
 TYPE_11__* VAR_10 ;
 TYPE_10__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_2__*,char,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_8__* VAR_16 ;
 TYPE_7__* VAR_17 ;
 TYPE_6__* VAR_18 ;
 TYPE_5__* VAR_19 ;
 TYPE_4__* VAR_20 ;
 TYPE_3__* VAR_21 ;
 scalar_t__ VAR_22 ;
 float VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;

qboolean FUNC_16(void)
{
 SDL_AudioSpec VAR_26;
 SDL_AudioSpec VAR_27;
 int VAR_28;




 if (VAR_25)
  return VAR_15;

 if (!VAR_16) {
  VAR_16 = FUNC_1("s_sdlBits", "16", VAR_2);
  VAR_21 = FUNC_1("s_sdlSpeed", "0", VAR_2);
  VAR_18 = FUNC_1("s_sdlChannels", "2", VAR_2);
  VAR_19 = FUNC_1("s_sdlDevSamps", "0", VAR_2);
  VAR_20 = FUNC_1("s_sdlMixSamps", "0", VAR_2);
 }

 FUNC_0( "SDL_Init( SDL_INIT_AUDIO )... " );

 if (FUNC_8(VAR_6) != 0)
 {
  FUNC_0( "FAILED (%s)\n", FUNC_6( ) );
  return VAR_14;
 }

 FUNC_0( "OK\n" );

 FUNC_0( "SDL audio driver is \"%s\".\n", FUNC_5( ) );

 FUNC_15(&VAR_26, '\0', sizeof (VAR_26));
 FUNC_15(&VAR_27, '\0', sizeof (VAR_27));

 VAR_28 = ((int) VAR_16->value);
 if ((VAR_28 != 16) && (VAR_28 != 8))
  VAR_28 = 16;

 VAR_26.freq = (int) VAR_21->value;
 if(!VAR_26.freq) VAR_26.freq = 22050;
 VAR_26.format = ((VAR_28 == 16) ? VAR_0 : VAR_1);



 if (VAR_19->value)
  VAR_26.samples = VAR_19->value;
 else
 {

  if (VAR_26.freq <= 11025)
   VAR_26.samples = 256;
  else if (VAR_26.freq <= 22050)
   VAR_26.samples = 512;
  else if (VAR_26.freq <= 44100)
   VAR_26.samples = 1024;
  else
   VAR_26.samples = 2048;
 }

 VAR_26.channels = (int) VAR_18->value;
 VAR_26.callback = VAR_8;

 VAR_24 = FUNC_9(((void*)0), VAR_5, &VAR_26, &VAR_27, VAR_4);
 if (VAR_24 == 0)
 {
  FUNC_0("SDL_OpenAudioDevice() failed: %s\n", FUNC_6());
  FUNC_11(VAR_6);
  return VAR_14;
 }

 FUNC_13("SDL_AudioSpec", &VAR_27);
 VAR_28 = VAR_20->value;
 if (!VAR_28)
  VAR_28 = (VAR_27.samples * VAR_27.channels) * 10;

 if (VAR_28 & (VAR_28 - 1))
 {
  int VAR_29 = 1;
  while (VAR_29 < VAR_28)
   VAR_29 <<= 1;

  VAR_28 = VAR_29;
 }

 VAR_12 = 0;
 VAR_11.samplebits = FUNC_3(VAR_27.format);
 VAR_11.isfloat = FUNC_4(VAR_27.format);
 VAR_11.channels = VAR_27.channels;
 VAR_11.samples = VAR_28;
 VAR_11.submission_chunk = 1;
 VAR_11.speed = VAR_27.freq;
 VAR_13 = (VAR_11.samples * (VAR_11.samplebits/8));
 VAR_11.buffer = FUNC_14(1, VAR_13);
 FUNC_0("Starting SDL audio callback...\n");
 FUNC_10(VAR_24, 0);


 FUNC_0("SDL audio initialized.\n");
 VAR_25 = VAR_15;
 return VAR_15;
}
