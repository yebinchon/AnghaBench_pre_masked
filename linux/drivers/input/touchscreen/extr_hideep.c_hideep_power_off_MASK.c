
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hideep_ts {int vcc_vdd; int vcc_vid; scalar_t__ reset_gpio; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct hideep_ts *VAR_1 = VAR_0;

 if (VAR_1->reset_gpio)
  FUNC_0(VAR_1->reset_gpio, 1);

 FUNC_1(VAR_1->vcc_vid);
 FUNC_1(VAR_1->vcc_vdd);
}
