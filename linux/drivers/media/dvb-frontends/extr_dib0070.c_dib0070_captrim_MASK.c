
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib0070_state {int step; int captrim; int fcaptrim; int adc_diff; int lo4; } ;
typedef int int8_t ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dib0070_state*,int) ;
 int FUNC_1 (struct dib0070_state*,int,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct dib0070_state *VAR_5, enum frontend_tune_state *VAR_6)
{
 int8_t VAR_7;
 u16 VAR_8;
 int VAR_9 = 0;

 if (*VAR_6 == VAR_0) {
  FUNC_1(VAR_5, 0x0f, 0xed10);
  FUNC_1(VAR_5, 0x17, 0x0034);

  FUNC_1(VAR_5, 0x18, 0x0032);
  VAR_5->step = VAR_5->captrim = VAR_5->fcaptrim = 64;
  VAR_5->adc_diff = 3000;
  VAR_9 = 20;

  *VAR_6 = VAR_1;
 } else if (*VAR_6 == VAR_1) {
  VAR_5->step /= 2;
  FUNC_1(VAR_5, 0x14, VAR_5->lo4 | VAR_5->captrim);
  VAR_9 = 15;

  *VAR_6 = VAR_2;
 } else if (*VAR_6 == VAR_2) {

  VAR_8 = FUNC_0(VAR_5, 0x19);

  FUNC_2("CAPTRIM=%hd; ADC = %hd (ADC) & %dmV\n", VAR_5->captrim, VAR_8, (u32) VAR_8*(u32)1800/(u32)1024);

  if (VAR_8 >= 400) {
   VAR_8 -= 400;
   VAR_7 = -1;
  } else {
   VAR_8 = 400 - VAR_8;
   VAR_7 = 1;
  }

  if (VAR_8 < VAR_5->adc_diff) {
   FUNC_2("CAPTRIM=%hd is closer to target (%hd/%hd)\n", VAR_5->captrim, VAR_8, VAR_5->adc_diff);
   VAR_5->adc_diff = VAR_8;
   VAR_5->fcaptrim = VAR_5->captrim;
  }
  VAR_5->captrim += (VAR_7 * VAR_5->step);

  if (VAR_5->step >= 1)
   *VAR_6 = VAR_1;
  else
   *VAR_6 = VAR_3;

 } else if (*VAR_6 == VAR_3) {
  FUNC_1(VAR_5, 0x14, VAR_5->lo4 | VAR_5->fcaptrim);
  FUNC_1(VAR_5, 0x18, 0x07ff);
  *VAR_6 = VAR_4;
 }

 return VAR_9;
}
