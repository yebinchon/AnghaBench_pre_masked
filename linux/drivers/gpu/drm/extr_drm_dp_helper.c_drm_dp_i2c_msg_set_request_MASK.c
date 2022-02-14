
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct drm_dp_aux_msg {int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct drm_dp_aux_msg *VAR_5,
           const struct i2c_msg *VAR_6)
{
 VAR_5->request = (VAR_6->flags & VAR_3) ?
  VAR_1 : VAR_2;
 if (!(VAR_6->flags & VAR_4))
  VAR_5->request |= VAR_0;
}
