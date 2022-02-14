
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hda_codec_cmd_ctl {int dummy; } ;
struct hda_softc {struct hda_codec_cmd_ctl corb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_softc*) ;
 int FUNC_2 (struct hda_softc*) ;
 int FUNC_3 (struct hda_softc*,int) ;
 int FUNC_4 (struct hda_codec_cmd_ctl*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct hda_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = FUNC_3(VAR_1, VAR_2);
 int VAR_5;
 struct hda_codec_cmd_ctl *VAR_6 = ((void*)0);

 if (VAR_4 & VAR_0) {
  if (!(VAR_3 & VAR_0)) {
   VAR_5 = FUNC_2(VAR_1);
   FUNC_0(!VAR_5);
  }
 } else {
  VAR_6 = &VAR_1->corb;
  FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 }

 FUNC_1(VAR_1);
}
