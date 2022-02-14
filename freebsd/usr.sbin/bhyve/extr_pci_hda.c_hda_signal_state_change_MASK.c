
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hda_softc {int cad; struct hda_softc* hda; } ;
struct hda_codec_inst {int cad; struct hda_codec_inst* hda; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_softc*) ;
 int FUNC_2 (struct hda_softc*,int ,int,int) ;
 int FUNC_3 (struct hda_softc*) ;

__attribute__((used)) static int
FUNC_4(struct hda_codec_inst *VAR_1)
{
 struct hda_softc *VAR_2 = ((void*)0);
 uint32_t VAR_3 = 0;

 FUNC_1(VAR_1);
 FUNC_1(VAR_1->hda);

 FUNC_0("cad: 0x%x\n", VAR_1->cad);

 VAR_2 = VAR_1->hda;
 VAR_3 = 1 << VAR_1->cad;

 FUNC_2(VAR_2, VAR_0, VAR_3, VAR_3);
 FUNC_3(VAR_2);

 return (0);
}
