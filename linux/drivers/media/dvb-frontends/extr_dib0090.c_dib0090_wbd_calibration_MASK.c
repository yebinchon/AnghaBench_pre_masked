
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dib0090_wbd_slope {int max_freq; int wbd_gain; } ;
struct dib0090_state {int current_rf; int wbd_calibration_gain; int calibrate; int wbd_offset; int current_band; struct dib0090_wbd_slope* current_wbd_table; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dib0090_state*) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct dib0090_state *VAR_4, enum frontend_tune_state *VAR_5)
{
 u8 VAR_6;
 const struct dib0090_wbd_slope *VAR_7 = VAR_4->current_wbd_table;

 switch (*VAR_5) {
 case 129:
  while (VAR_4->current_rf / 1000 > VAR_7->max_freq)
   VAR_7++;
  if (VAR_7->wbd_gain != 0)
   VAR_6 = VAR_7->wbd_gain;
  else {
   VAR_6 = 4;




  }

  if (VAR_6 == VAR_4->wbd_calibration_gain) {
   *VAR_5 = 129;
   VAR_4->calibrate &= ~VAR_3;
   return 0;
  }

  FUNC_1(VAR_4, 0x10, 0x1b81 | (1 << 10) | (VAR_6 << 13) | (1 << 3));

  FUNC_1(VAR_4, 0x24, ((VAR_2 & 0x0fff) | (1 << 1)));
  *VAR_5 = 128;
  VAR_4->wbd_calibration_gain = VAR_6;
  return 90;

 case 128:
  VAR_4->wbd_offset = FUNC_0(VAR_4);
  FUNC_2("WBD calibration offset = %d\n", VAR_4->wbd_offset);
  *VAR_5 = 129;
  VAR_4->calibrate &= ~VAR_3;
  break;

 default:
  break;
 }
 return 0;
}
