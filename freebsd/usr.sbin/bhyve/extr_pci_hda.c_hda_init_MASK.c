
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_softc {int dummy; } ;
struct hda_codec_class {int dummy; } ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (int) ;
 struct hda_softc* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct hda_softc*,struct hda_codec_class*,char*,char*,int *) ;
 struct hda_codec_class* FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,char*) ;
 int FUNC_7 (struct hda_softc*) ;

__attribute__((used)) static struct hda_softc *
FUNC_8(const char *VAR_1)
{
 struct hda_softc *VAR_2 = ((void*)0);
 struct hda_codec_class *VAR_3 = ((void*)0);
 char VAR_4[64];
 char VAR_5[64];
 int VAR_6, VAR_7, VAR_8;





 FUNC_0("opts: %s\n", VAR_1);

 VAR_2 = FUNC_2(1, sizeof(*VAR_2));
 if (!VAR_2)
  return (((void*)0));

 FUNC_7(VAR_2);





 VAR_3 = FUNC_5("hda_codec");
 if (VAR_3) {
  VAR_7 = FUNC_6(VAR_1, "play=", VAR_4);
  VAR_8 = FUNC_6(VAR_1, "rec=", VAR_5);
  FUNC_0("play: %s rec: %s\n", VAR_4, VAR_5);
  if (VAR_7 | VAR_8) {
   VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_7 ? VAR_4 : ((void*)0), VAR_8 ? VAR_5 : ((void*)0), ((void*)0));

   FUNC_1(!VAR_6);
  }
 }

 return (VAR_2);
}
