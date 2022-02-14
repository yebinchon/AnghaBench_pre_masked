
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int ca_module_present_status; int ca_initialization_status; scalar_t__ ca_error_flag; int ca_dvb_flag; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct firedtv_tuner_status *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->ca_module_present_status == 1)
  VAR_3 |= VAR_0;
 if (VAR_2->ca_initialization_status == 1 &&
     VAR_2->ca_error_flag == 0 &&
     VAR_2->ca_dvb_flag == 1)
  VAR_3 |= VAR_1;
 return VAR_3;
}
