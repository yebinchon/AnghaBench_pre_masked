
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ps2kbd_softc {int mtx; } ;
struct extended_translation {scalar_t__ keysym; int scancode; int flags; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ) ;
 struct extended_translation* VAR_2 ;
 int FUNC_1 (struct ps2kbd_softc*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct ps2kbd_softc *VAR_4,
    int VAR_5, uint32_t VAR_6)
{
 FUNC_0(FUNC_3(&VAR_4->mtx));
 int VAR_7, VAR_8;
 uint8_t VAR_9;
 const struct extended_translation *VAR_10;

 VAR_8 = 0;
 if (VAR_6 < 0x80) {
  VAR_9 = VAR_1[VAR_6];
  VAR_7 = 0;
  VAR_8 = 1;
 } else {
  for (VAR_10 = &(VAR_2[0]); VAR_10->keysym != 0;
      VAR_10++) {
   if (VAR_6 == VAR_10->keysym) {
    VAR_9 = VAR_10->scancode;
    VAR_7 = VAR_10->flags & VAR_0;
    VAR_8 = 1;
    break;
   }
  }
 }

 if (!VAR_8) {
  FUNC_2(VAR_3, "Unhandled ps2 keyboard keysym 0x%x\n", VAR_6);
  return;
 }

 if (VAR_7)
  FUNC_1(VAR_4, 0xe0);
 if (!VAR_5)
  FUNC_1(VAR_4, 0xf0);
 FUNC_1(VAR_4, VAR_9);
}
