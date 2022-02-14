
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_softc {int codecs_no; int wall_clock_start; struct hda_codec_inst** codecs; } ;
struct hda_codec_inst {int (* reset ) (struct hda_codec_inst*) ;struct hda_codec_inst* codec; } ;
struct hda_codec_class {int (* reset ) (struct hda_codec_inst*) ;struct hda_codec_class* codec; } ;


 int FUNC_0 (struct hda_codec_inst*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hda_softc*) ;
 int FUNC_3 (struct hda_codec_inst*) ;

__attribute__((used)) static void
FUNC_4(struct hda_softc *VAR_0)
{
 int VAR_1;
 struct hda_codec_inst *VAR_2 = ((void*)0);
 struct hda_codec_class *VAR_3 = ((void*)0);

 FUNC_2(VAR_0);


 for (VAR_1 = 0; VAR_1 < VAR_0->codecs_no; VAR_1++) {
  VAR_2 = VAR_0->codecs[VAR_1];
  FUNC_0(VAR_2);

  VAR_3 = VAR_2->codec;
  FUNC_0(VAR_3);

  if (VAR_3->reset)
   VAR_3->reset(VAR_2);
 }

 VAR_0->wall_clock_start = FUNC_1();
}
