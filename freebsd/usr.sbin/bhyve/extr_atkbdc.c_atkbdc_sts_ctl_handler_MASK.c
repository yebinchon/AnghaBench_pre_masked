
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ bcnt; } ;
struct atkbdc_softc {int status; int curcmd; int ctrlbyte; int* ram; int outport; TYPE_1__ kbd; int ps2mouse_sc; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct atkbdc_softc*) ;
 int FUNC_2 (struct atkbdc_softc*) ;
 int FUNC_3 (struct atkbdc_softc*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vmctx*,int ) ;

__attribute__((used)) static int
FUNC_9(struct vmctx *VAR_9, int VAR_10, int VAR_11, int VAR_12,
    int VAR_13, uint32_t *VAR_14, void *VAR_15)
{
 struct atkbdc_softc *VAR_16;
 int VAR_17, VAR_18;

 if (VAR_13 != 1)
  return (-1);

 VAR_16 = VAR_15;
 VAR_18 = 0;

 FUNC_6(&VAR_16->mtx);

 if (VAR_11) {

  *VAR_14 = VAR_16->status;
  FUNC_7(&VAR_16->mtx);
  return (VAR_18);
 }


 VAR_16->curcmd = 0;
 VAR_16->status |= VAR_3;
 VAR_16->ctrlbyte = 0;

 switch (*VAR_14) {
 case 139:
  VAR_16->ctrlbyte = VAR_0 | VAR_16->ram[0];
  break;
 case 133:
  VAR_16->ctrlbyte = VAR_0 | 0x55;
  break;
 case 134:
 case 132:
  VAR_16->ctrlbyte = VAR_0 | 0;
  break;
 case 138:
  VAR_16->ctrlbyte = VAR_0 | 0;
  break;
 case 137:
  VAR_16->ctrlbyte = VAR_0 | VAR_16->outport;
  break;
 case 135:
 case 129:
 case 130:
 case 131:
  VAR_16->curcmd = *VAR_14;
  break;
 case 142:
  VAR_16->ram[0] |= VAR_6;
  break;
 case 140:
  VAR_16->ram[0] &= ~VAR_6;
  if (VAR_16->kbd.bcnt > 0)
   VAR_16->status |= VAR_4;
  FUNC_3(VAR_16);
  break;
 case 128:
  VAR_16->curcmd = *VAR_14;
  break;
 case 143:
  VAR_16->ram[0] |= VAR_5;
  FUNC_5(VAR_16->ps2mouse_sc, 0);
  VAR_16->status &= ~(VAR_2 | VAR_4);
  VAR_16->outport &= ~VAR_2;
  break;
 case 141:
  VAR_16->ram[0] &= ~VAR_5;
  FUNC_5(VAR_16->ps2mouse_sc, 1);
  if (FUNC_4(VAR_16->ps2mouse_sc) > 0)
   VAR_16->status |= VAR_2 | VAR_4;
  break;
 case 136:
  VAR_17 = FUNC_8(VAR_9, VAR_7);
  FUNC_0(VAR_17 == 0 || VAR_8 == VAR_1);
  break;
 default:
  if (*VAR_14 >= 0x21 && *VAR_14 <= 0x3f) {

   int VAR_19;

   VAR_19 = (*VAR_14 - 0x20) & 0x1f;
   VAR_16->ctrlbyte = VAR_0 | VAR_16->ram[VAR_19];
  }
  break;
 }

 FUNC_7(&VAR_16->mtx);

 if (VAR_16->ctrlbyte != 0) {
  VAR_16->status |= VAR_4;
  VAR_16->status &= ~VAR_2;
  FUNC_2(VAR_16);
 } else if (FUNC_4(VAR_16->ps2mouse_sc) > 0 &&
            (VAR_16->ram[0] & VAR_5) == 0) {
  VAR_16->status |= VAR_2 | VAR_4;
  FUNC_1(VAR_16);
 } else if (VAR_16->kbd.bcnt > 0 && (VAR_16->ram[0] & VAR_6) == 0) {
  VAR_16->status |= VAR_4;
  FUNC_2(VAR_16);
 }

 return (VAR_18);
}
