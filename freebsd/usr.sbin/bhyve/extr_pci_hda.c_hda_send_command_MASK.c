
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct hda_softc {struct hda_codec_inst** codecs; } ;
struct hda_codec_inst {struct hda_codec_class* codec; } ;
struct hda_codec_class {int (* command ) (struct hda_codec_inst*,int) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_codec_class*) ;
 int FUNC_2 (struct hda_codec_inst*,int) ;

__attribute__((used)) static int
FUNC_3(struct hda_softc *VAR_1, uint32_t VAR_2)
{
 struct hda_codec_inst *VAR_3 = ((void*)0);
 struct hda_codec_class *VAR_4 = ((void*)0);
 uint8_t VAR_5 = (VAR_2 >> VAR_0) & 0x0f;

 VAR_3 = VAR_1->codecs[VAR_5];
 if (!VAR_3)
  return (-1);

 FUNC_0("cad: 0x%x verb: 0x%x\n", VAR_5, VAR_2);

 VAR_4 = VAR_3->codec;
 FUNC_1(VAR_4);

 if (!VAR_4->command) {
  FUNC_0("This codec does not implement the command function\n");
  return (-1);
 }

 return (VAR_4->command(VAR_3, VAR_2));
}
