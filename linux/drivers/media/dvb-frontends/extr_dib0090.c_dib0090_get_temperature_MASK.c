
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dib0090_state {int wbdmux; int bias; int adc_diff; TYPE_1__* config; int calibrate; int temperature; } ;
typedef int s16 ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_2__ {int analog_output; } ;






 int VAR_0 ;
 void* FUNC_0 (struct dib0090_state*) ;
 int FUNC_1 (struct dib0090_state*,int) ;
 int FUNC_2 (struct dib0090_state*,int,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct dib0090_state *VAR_1, enum frontend_tune_state *VAR_2)
{
 int VAR_3 = 15;
 s16 VAR_4;

 switch (*VAR_2) {
 case 131:
  VAR_1->wbdmux = FUNC_1(VAR_1, 0x10);
  FUNC_2(VAR_1, 0x10, (VAR_1->wbdmux & ~(0xff << 3)) | (0x8 << 3));

  VAR_1->bias = FUNC_1(VAR_1, 0x13);
  FUNC_2(VAR_1, 0x13, VAR_1->bias | (0x3 << 8));

  *VAR_2 = 130;

  break;

 case 130:
  VAR_1->adc_diff = FUNC_0(VAR_1);
  FUNC_2(VAR_1, 0x13, (VAR_1->bias & ~(0x3 << 8)) | (0x2 << 8));
  *VAR_2 = 129;
  break;

 case 129:
  VAR_4 = FUNC_0(VAR_1);
  VAR_1->temperature = ((s16) ((VAR_4 - VAR_1->adc_diff) * 180) >> 8) + 55;

  FUNC_3("temperature: %d C\n", VAR_1->temperature - 30);

  *VAR_2 = 128;
  break;

 case 128:
  FUNC_2(VAR_1, 0x13, VAR_1->bias);
  FUNC_2(VAR_1, 0x10, VAR_1->wbdmux);

  *VAR_2 = 131;
  VAR_1->calibrate &= ~VAR_0;
  if (VAR_1->config->analog_output == 0)
   FUNC_2(VAR_1, 0x23, FUNC_1(VAR_1, 0x23) | (1 << 14));

  break;

 default:
  VAR_3 = 0;
  break;
 }
 return VAR_3;
}
