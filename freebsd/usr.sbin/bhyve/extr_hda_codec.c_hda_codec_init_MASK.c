
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec_stream {void* aud; int actx; } ;
struct hda_codec_softc {struct hda_codec_inst* hci; struct hda_codec_stream* streams; int no_nodes; int verb_handlers; int pin_ctrl_default; int conf_default; int conn_list; int subsystem_id; int get_parameters; } ;
struct hda_codec_inst {struct hda_codec_softc* priv; int cad; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char const*,int) ;
 struct hda_codec_softc* FUNC_3 (int,int) ;
 int FUNC_4 (int *,char*,int ,int ,struct hda_codec_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_5(struct hda_codec_inst *VAR_15, const char *VAR_16,
    const char *VAR_17, const char *VAR_18)
{
 struct hda_codec_softc *VAR_19 = ((void*)0);
 struct hda_codec_stream *VAR_20 = ((void*)0);
 int VAR_21;

 if (!(VAR_16 || VAR_17))
  return (-1);

 FUNC_0("cad: 0x%x opts: %s\n", VAR_15->cad, VAR_18);

 VAR_19 = FUNC_3(1, sizeof(*VAR_19));
 if (!VAR_19)
  return (-1);

 if (VAR_16 && VAR_17)
  VAR_19->get_parameters = VAR_10;
 else {
  if (VAR_16)
   VAR_19->get_parameters = VAR_12;
  else
   VAR_19->get_parameters = VAR_11;
 }
 VAR_19->subsystem_id = VAR_3;
 VAR_19->no_nodes = VAR_0;
 VAR_19->conn_list = VAR_9;
 VAR_19->conf_default = VAR_8;
 VAR_19->pin_ctrl_default = VAR_13;
 VAR_19->verb_handlers = VAR_14;
 FUNC_0("HDA Codec nodes: %d\n", VAR_19->no_nodes);




 if (VAR_16) {
  VAR_20 = &VAR_19->streams[VAR_2];

  VAR_21 = FUNC_4(&VAR_20->actx, "hda-audio-output",
   VAR_7,
   VAR_6, VAR_19);
  FUNC_1(!VAR_21);

  VAR_20->aud = FUNC_2(VAR_16, 1);
  if (!VAR_20->aud) {
   FUNC_0("Fail to init the output audio player\n");
   return (-1);
  }
 }




 if (VAR_17) {
  VAR_20 = &VAR_19->streams[VAR_1];

  VAR_21 = FUNC_4(&VAR_20->actx, "hda-audio-input",
   VAR_5,
   VAR_4, VAR_19);
  FUNC_1(!VAR_21);

  VAR_20->aud = FUNC_2(VAR_17, 0);
  if (!VAR_20->aud) {
   FUNC_0("Fail to init the input audio player\n");
   return (-1);
  }
 }

 VAR_19->hci = VAR_15;
 VAR_15->priv = VAR_19;

 return (0);
}
