
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
typedef enum atscmh_rs_code_mode { ____Placeholder_atscmh_rs_code_mode } atscmh_rs_code_mode ;
struct TYPE_2__ {int lg_chip; } ;


 int VAR_0 ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lg216x_state *VAR_1,
       enum atscmh_rs_code_mode *VAR_2,
       enum atscmh_rs_code_mode *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 switch (VAR_1->cfg->lg_chip) {
 case 129:
  VAR_5 = FUNC_0(VAR_1, 0x0410, &VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_1, 0x0513, &VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 if (FUNC_1(VAR_5))
  goto fail;

 *VAR_2 = (enum atscmh_rs_code_mode) ((VAR_4 >> 2) & 0x03);
 *VAR_3 = (enum atscmh_rs_code_mode) (VAR_4 & 0x03);
fail:
 return VAR_5;
}
