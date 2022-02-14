
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int p1g; } ;
struct dib0090_state {int bb7; int wbdmux; int step; int min_adc_diff; int adc_diff; int calibrate; TYPE_2__* dc; TYPE_1__ identity; int bb6; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_5__ {int i; int bb1; int addr; int pga; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct dib0090_state*,int*) ;
 int FUNC_2 (struct dib0090_state*,int) ;
 int FUNC_3 (struct dib0090_state*) ;
 int FUNC_4 (struct dib0090_state*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dib0090_state *VAR_3, enum frontend_tune_state *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6;

 switch (*VAR_4) {
 case 135:
  FUNC_5("Start DC offset calibration");


  VAR_3->bb6 = 0;
  VAR_3->bb7 = 0x040d;


  VAR_6 = FUNC_2(VAR_3, 0x24) & 0x0ffb;
  FUNC_4(VAR_3, 0x24, VAR_6);

  VAR_3->wbdmux = FUNC_2(VAR_3, 0x10);
  FUNC_4(VAR_3, 0x10, (VAR_3->wbdmux & ~(0xff << 3)) | (0x7 << 3) | 0x3);
  FUNC_4(VAR_3, 0x23, FUNC_2(VAR_3, 0x23) & ~(1 << 14));

  VAR_3->dc = VAR_2;

  if (VAR_3->identity.p1g)
   VAR_3->dc = VAR_1;


 case 134:
  FUNC_5("Start/continue DC calibration for %s path\n",
   (VAR_3->dc->i == 1) ? "I" : "Q");
  FUNC_4(VAR_3, 0x01, VAR_3->dc->bb1);
  FUNC_4(VAR_3, 0x07, VAR_3->bb7 | (VAR_3->dc->i << 7));

  VAR_3->step = 0;
  VAR_3->min_adc_diff = 1023;
  *VAR_4 = 133;
  VAR_5 = 50;
  break;

 case 133:
  FUNC_3(VAR_3);
  *VAR_4 = 132;
  break;

 case 132:
 case 131:
 case 130:
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  break;

 case 129:
  FUNC_5("adc_diff = %d, current step= %d\n", (u32) VAR_3->adc_diff, VAR_3->step);
  if (VAR_3->step == 0 && VAR_3->adc_diff < 0) {
   VAR_3->min_adc_diff = -1023;
   FUNC_5("Change of sign of the minimum adc diff\n");
  }

  FUNC_5("adc_diff = %d, min_adc_diff = %d current_step = %d\n", VAR_3->adc_diff, VAR_3->min_adc_diff, VAR_3->step);


  if (VAR_3->step == 0) {
   if (VAR_3->dc->pga && VAR_3->adc_diff < 0)
    VAR_3->step = 0x10;
   if (VAR_3->dc->pga == 0 && VAR_3->adc_diff > 0)
    VAR_3->step = 0x10;
  }


  if ((VAR_3->adc_diff & 0x8000) == (VAR_3->min_adc_diff & 0x8000) && FUNC_6(VAR_3->step) < 15) {

   VAR_3->step++;
   VAR_3->min_adc_diff = VAR_3->adc_diff;
   *VAR_4 = 133;
  } else {

   if (FUNC_0(VAR_3->adc_diff) > FUNC_0(VAR_3->min_adc_diff)) {
    FUNC_5("Since adc_diff N = %d  > adc_diff step N-1 = %d, Come back one step\n", VAR_3->adc_diff, VAR_3->min_adc_diff);
    VAR_3->step--;
   }

   FUNC_3(VAR_3);
   FUNC_5("BB Offset Cal, BBreg=%hd,Offset=%hd,Value Set=%hd\n", VAR_3->dc->addr, VAR_3->adc_diff, VAR_3->step);

   VAR_3->dc++;
   if (VAR_3->dc->addr == 0)
    *VAR_4 = 128;
   else
    *VAR_4 = 134;

  }
  break;

 case 128:
  FUNC_4(VAR_3, 0x07, VAR_3->bb7 & ~0x0008);
  FUNC_4(VAR_3, 0x1f, 0x7);
  *VAR_4 = 135;
  VAR_3->calibrate &= ~VAR_0;
 default:
  break;
 }
 return VAR_5;
}
