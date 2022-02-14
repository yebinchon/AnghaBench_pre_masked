
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
typedef enum atscmh_rs_frame_ensemble { ____Placeholder_atscmh_rs_frame_ensemble } atscmh_rs_frame_ensemble ;
struct TYPE_2__ {int lg_chip; } ;


 int VAR_0 ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
int FUNC_2(struct lg216x_state *VAR_1,
     enum atscmh_rs_frame_ensemble *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 switch (VAR_1->cfg->lg_chip) {
 case 129:
  VAR_4 = FUNC_0(VAR_1, 0x0400, &VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_1, 0x0500, &VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 if (FUNC_1(VAR_4))
  goto fail;

 VAR_3 &= 0x01;
 *VAR_2 = (enum atscmh_rs_frame_ensemble) VAR_3;
fail:
 return VAR_4;
}
