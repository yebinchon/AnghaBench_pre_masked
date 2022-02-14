
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
typedef enum atscmh_sccc_block_mode { ____Placeholder_atscmh_sccc_block_mode } atscmh_sccc_block_mode ;
struct TYPE_2__ {int lg_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lg216x_state *VAR_4,
          enum atscmh_sccc_block_mode *VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 switch (VAR_4->cfg->lg_chip) {
 case 129:
  VAR_7 = FUNC_0(VAR_4, 0x0315, &VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_4, 0x0511, &VAR_6);
  break;
 default:
  VAR_7 = -VAR_3;
 }
 if (FUNC_1(VAR_7))
  goto fail;

 switch (VAR_6 & 0x03) {
 case 0x00:
  *VAR_5 = VAR_2;
  break;
 case 0x01:
  *VAR_5 = VAR_0;
  break;
 default:
  *VAR_5 = VAR_1;
  break;
 }
fail:
 return VAR_7;
}
