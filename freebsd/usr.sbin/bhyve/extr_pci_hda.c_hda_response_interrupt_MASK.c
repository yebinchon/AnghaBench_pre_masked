
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hda_softc {scalar_t__ rirb_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_softc*,int ) ;
 int FUNC_1 (struct hda_softc*,int ,int ,int ) ;
 int FUNC_2 (struct hda_softc*) ;

__attribute__((used)) static void
FUNC_3(struct hda_softc *VAR_4)
{
 uint8_t VAR_5 = FUNC_0(VAR_4, VAR_0);

 if ((VAR_5 & VAR_1) && VAR_4->rirb_cnt) {
  VAR_4->rirb_cnt = 0;
  FUNC_1(VAR_4, VAR_2, VAR_3,
    VAR_3);
  FUNC_2(VAR_4);
 }
}
