
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {scalar_t__ ev_enable_state; int motion_trig; scalar_t__ motion_trig_on; int mag_dready_trig; scalar_t__ mag_dready_trig_on; int acc_dready_trig; scalar_t__ acc_dready_trig_on; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct kmx61_data *VAR_4 = VAR_3;

 if (VAR_4->acc_dready_trig_on)
  FUNC_0(VAR_4->acc_dready_trig);
 if (VAR_4->mag_dready_trig_on)
  FUNC_0(VAR_4->mag_dready_trig);

 if (VAR_4->motion_trig_on)
  FUNC_0(VAR_4->motion_trig);

 if (VAR_4->ev_enable_state)
  return VAR_1;
 return VAR_0;
}
