
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct atkbdc_softc {int curcmd; int ctrlbyte; int status; int* ram; int outport; int mtx; int ps2kbd_sc; int ps2mouse_sc; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atkbdc_softc*) ;
 int FUNC_1 (struct atkbdc_softc*,int*) ;
 int FUNC_2 (struct atkbdc_softc*,int) ;
 int FUNC_3 (struct atkbdc_softc*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct vmctx *VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
    uint32_t *VAR_10, void *VAR_11)
{
 struct atkbdc_softc *VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 if (VAR_9 != 1)
  return (-1);
 VAR_12 = VAR_11;
 VAR_14 = 0;

 FUNC_6(&VAR_12->mtx);
 if (VAR_7) {
  VAR_12->curcmd = 0;
  if (VAR_12->ctrlbyte != 0) {
   *VAR_10 = VAR_12->ctrlbyte & 0xff;
   VAR_12->ctrlbyte = 0;
  } else {

   FUNC_1(VAR_12, &VAR_13);
   *VAR_10 = VAR_13;
  }

  VAR_12->status &= ~VAR_1;
  FUNC_7(&VAR_12->mtx);
  return (VAR_14);
 }

 if (VAR_12->status & VAR_1) {



  switch (VAR_12->curcmd) {
  case 132:
   VAR_12->ram[0] = *VAR_10;
   if (VAR_12->ram[0] & VAR_4)
    VAR_12->status |= VAR_3;
   else
    VAR_12->status &= ~VAR_3;
   break;
  case 129:
   VAR_12->outport = *VAR_10;
   break;
  case 128:
   FUNC_5(VAR_12->ps2mouse_sc, *VAR_10, 0);
   FUNC_3(VAR_12);
   break;
  case 130:
   FUNC_2(VAR_12, *VAR_10);
   break;
  case 131:
   FUNC_5(VAR_12->ps2mouse_sc, *VAR_10, 1);
   VAR_12->status |= (VAR_0 | VAR_2);
   FUNC_0(VAR_12);
   break;
  default:

   if (VAR_12->curcmd >= 0x61 && VAR_12->curcmd <= 0x7f) {
    int VAR_15;

    VAR_15 = (VAR_12->curcmd - 0x60) & 0x1f;
    VAR_12->ram[VAR_15] = *VAR_10 & 0xff;
   }
   break;
  }

  VAR_12->curcmd = 0;
  VAR_12->status &= ~VAR_1;

  FUNC_7(&VAR_12->mtx);
  return (VAR_14);
 }




 FUNC_4(VAR_12->ps2kbd_sc, *VAR_10);
 FUNC_3(VAR_12);

 FUNC_7(&VAR_12->mtx);

 return (VAR_14);
}
