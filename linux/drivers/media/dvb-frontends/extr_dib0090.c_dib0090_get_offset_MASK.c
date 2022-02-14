
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dib0090_state {int adc_diff; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib0090_state *VAR_2, enum frontend_tune_state *VAR_3)
{
 int VAR_4 = VAR_1 * 10;

 switch (*VAR_3) {
 case 130:

  FUNC_1(VAR_2, 0x1f, 0x7);
  *VAR_3 = 129;
  break;

 case 129:
  VAR_2->adc_diff = FUNC_0(VAR_2, 0x1d);


  FUNC_1(VAR_2, 0x1f, 0x4);
  *VAR_3 = 128;
  break;

 case 128:
  VAR_2->adc_diff -= FUNC_0(VAR_2, 0x1d);
  *VAR_3 = VAR_0;
  VAR_4 = 0;
  break;

 default:
  break;
 }

 return VAR_4;
}
