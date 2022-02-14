
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec_stream {int fmt; struct audio* aud; } ;
struct hda_codec_softc {struct hda_codec_stream* streams; } ;
struct audio_params {int format; int channels; int rate; } ;
struct audio {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct audio*,struct audio_params*) ;
 int FUNC_2 (int ,struct audio_params*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1)
{
 struct hda_codec_softc *VAR_2 = (struct hda_codec_softc *)VAR_1;
 struct hda_codec_stream *VAR_3 = ((void*)0);
 struct audio *VAR_4 = ((void*)0);
 struct audio_params VAR_5;
 int VAR_6;

 VAR_3 = &VAR_2->streams[VAR_0];
 VAR_4 = VAR_3->aud;

 VAR_6 = FUNC_2(VAR_3->fmt, &VAR_5);
 if (VAR_6)
  return (-1);

 FUNC_0("rate: %d, channels: %d, format: 0x%x\n",
     VAR_5.rate, VAR_5.channels, VAR_5.format);

 return (FUNC_1(VAR_4, &VAR_5));
}
