
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_ops {int (* signal ) (struct hda_ops*) ;int cad; struct hda_codec_stream* streams; scalar_t__ priv; struct hda_ops* hops; } ;
struct hda_codec_stream {void* right_mute; void* left_mute; void* right_gain; void* left_gain; } ;
struct hda_codec_softc {int (* signal ) (struct hda_ops*) ;int cad; struct hda_codec_stream* streams; scalar_t__ priv; struct hda_codec_softc* hops; } ;
struct hda_codec_inst {int (* signal ) (struct hda_ops*) ;int cad; struct hda_codec_stream* streams; scalar_t__ priv; struct hda_codec_inst* hops; } ;


 int FUNC_0 (char*,...) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hda_ops*) ;
 int FUNC_2 (struct hda_ops*) ;

__attribute__((used)) static int
FUNC_3(struct hda_codec_inst *VAR_3)
{
 struct hda_ops *VAR_4 = ((void*)0);
 struct hda_codec_softc *VAR_5 = ((void*)0);
 struct hda_codec_stream *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_1(VAR_3);

 VAR_4 = VAR_3->hops;
 FUNC_1(VAR_4);

 VAR_5 = (struct hda_codec_softc *)VAR_3->priv;
 FUNC_1(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = &VAR_5->streams[VAR_7];
  VAR_6->left_gain = VAR_0;
  VAR_6->right_gain = VAR_0;
  VAR_6->left_mute = VAR_1;
  VAR_6->right_mute = VAR_1;
 }

 FUNC_0("cad: 0x%x\n", VAR_3->cad);

 if (!VAR_4->signal) {
  FUNC_0("The controller ops does not implement 			 the signal function\n");

  return (-1);
 }

 return (VAR_4->signal(VAR_3));
}
