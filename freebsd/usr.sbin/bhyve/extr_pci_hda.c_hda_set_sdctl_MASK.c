
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct hda_softc {int dummy; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_softc*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct hda_softc*,int ) ;
 int FUNC_5 (struct hda_softc*,int ) ;
 int FUNC_6 (struct hda_softc*,int ) ;

__attribute__((used)) static void
FUNC_7(struct hda_softc *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint8_t VAR_6 = FUNC_3(VAR_4, VAR_0);
 uint32_t VAR_7 = FUNC_2(VAR_3, VAR_4);
 int VAR_8;

 FUNC_0("stream_ind: 0x%x old: 0x%x value: 0x%x\n",
     VAR_6, VAR_5, VAR_7);

 if (VAR_7 & VAR_2) {
  FUNC_4(VAR_3, VAR_6);
 }

 if ((VAR_7 & VAR_1) != (VAR_5 & VAR_1)) {
  if (VAR_7 & VAR_1) {
   VAR_8 = FUNC_5(VAR_3, VAR_6);
   FUNC_1(!VAR_8);
  } else {
   VAR_8 = FUNC_6(VAR_3, VAR_6);
   FUNC_1(!VAR_8);
  }
 }
}
