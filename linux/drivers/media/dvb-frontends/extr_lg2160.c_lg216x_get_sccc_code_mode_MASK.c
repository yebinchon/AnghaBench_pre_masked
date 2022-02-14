
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
typedef enum atscmh_sccc_code_mode { ____Placeholder_atscmh_sccc_code_mode } atscmh_sccc_code_mode ;
struct TYPE_2__ {int lg_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lg216x_state *VAR_4,
         enum atscmh_sccc_code_mode *VAR_5,
         enum atscmh_sccc_code_mode *VAR_6,
         enum atscmh_sccc_code_mode *VAR_7,
         enum atscmh_sccc_code_mode *VAR_8)
{
 u8 VAR_9;
 int VAR_10;

 switch (VAR_4->cfg->lg_chip) {
 case 129:
  VAR_10 = FUNC_0(VAR_4, 0x0316, &VAR_9);
  break;
 case 128:
  VAR_10 = FUNC_0(VAR_4, 0x0512, &VAR_9);
  break;
 default:
  VAR_10 = -VAR_3;
 }
 if (FUNC_1(VAR_10))
  goto fail;

 switch ((VAR_9 >> 6) & 0x03) {
 case 0x00:
  *VAR_5 = VAR_0;
  break;
 case 0x01:
  *VAR_5 = VAR_1;
  break;
 default:
  *VAR_5 = VAR_2;
  break;
 }

 switch ((VAR_9 >> 4) & 0x03) {
 case 0x00:
  *VAR_6 = VAR_0;
  break;
 case 0x01:
  *VAR_6 = VAR_1;
  break;
 default:
  *VAR_6 = VAR_2;
  break;
 }

 switch ((VAR_9 >> 2) & 0x03) {
 case 0x00:
  *VAR_7 = VAR_0;
  break;
 case 0x01:
  *VAR_7 = VAR_1;
  break;
 default:
  *VAR_7 = VAR_2;
  break;
 }

 switch (VAR_9 & 0x03) {
 case 0x00:
  *VAR_8 = VAR_0;
  break;
 case 0x01:
  *VAR_8 = VAR_1;
  break;
 default:
  *VAR_8 = VAR_2;
  break;
 }
fail:
 return VAR_10;
}
