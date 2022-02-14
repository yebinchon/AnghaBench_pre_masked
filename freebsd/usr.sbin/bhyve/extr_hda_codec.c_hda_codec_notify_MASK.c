
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct hda_audio_ctxt {int dummy; } ;
struct hda_codec_stream {scalar_t__ stream; struct hda_audio_ctxt actx; } ;
struct hda_codec_softc {struct hda_codec_stream* streams; scalar_t__ priv; } ;
struct hda_codec_inst {struct hda_codec_stream* streams; scalar_t__ priv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec_softc*) ;
 int FUNC_2 (struct hda_audio_ctxt*) ;
 int FUNC_3 (struct hda_audio_ctxt*) ;

__attribute__((used)) static int
FUNC_4(struct hda_codec_inst *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, uint8_t VAR_5)
{
 struct hda_codec_softc *VAR_6 = ((void*)0);
 struct hda_codec_stream *VAR_7 = ((void*)0);
 struct hda_audio_ctxt *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10;

 FUNC_1(VAR_2);
 FUNC_1(VAR_4);

 VAR_6 = (struct hda_codec_softc *)VAR_2->priv;
 FUNC_1(VAR_6);

 VAR_9 = VAR_5 ? VAR_1 : VAR_0;
 VAR_7 = &VAR_6->streams[VAR_9];

 FUNC_0("run: %d, stream: 0x%x, st->stream: 0x%x dir: %d\n",
     VAR_3, VAR_4, VAR_7->stream, VAR_5);

 if (VAR_4 != VAR_7->stream) {
  FUNC_0("Stream not found\n");
  return (0);
 }

 VAR_8 = &VAR_7->actx;

 if (VAR_3)
  VAR_10 = FUNC_2(VAR_8);
 else
  VAR_10 = FUNC_3(VAR_8);

 return (VAR_10);
}
