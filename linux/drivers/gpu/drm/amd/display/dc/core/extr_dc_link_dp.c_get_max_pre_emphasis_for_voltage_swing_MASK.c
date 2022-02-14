
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dc_voltage_swing { ____Placeholder_dc_voltage_swing } dc_voltage_swing ;
typedef enum dc_pre_emphasis { ____Placeholder_dc_pre_emphasis } dc_pre_emphasis ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static enum dc_pre_emphasis FUNC_0(
 enum dc_voltage_swing VAR_3)
{
 enum dc_pre_emphasis VAR_4;
 VAR_4 = VAR_0;

 if (VAR_3 <= VAR_1)
  VAR_4 = VAR_2[VAR_3];

 return VAR_4;

}
