
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int uch_config; int** pwm_auto_pwm; int vrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vt1211_data*,int ) ;
 int FUNC_2 (struct vt1211_data*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vt1211_data *VAR_5)
{

 VAR_5->vrm = FUNC_0();


 VAR_5->uch_config = FUNC_1(VAR_5, VAR_2);
 if (VAR_4 > -1) {
  VAR_5->uch_config = (VAR_5->uch_config & 0x83) |
       (VAR_4 << 2);
  FUNC_2(VAR_5, VAR_2, VAR_5->uch_config);
 }
 if (VAR_3 == 0) {
  FUNC_2(VAR_5, VAR_0, 0);
  FUNC_2(VAR_5, VAR_1, 0);
 }


 VAR_5->pwm_auto_pwm[0][3] = 255;
 VAR_5->pwm_auto_pwm[1][3] = 255;
}
