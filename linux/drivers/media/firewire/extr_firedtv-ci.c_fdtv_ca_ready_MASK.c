
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int ca_initialization_status; scalar_t__ ca_error_flag; int ca_dvb_flag; int ca_module_present_status; } ;



__attribute__((used)) static int FUNC_0(struct firedtv_tuner_status *VAR_0)
{
 return VAR_0->ca_initialization_status == 1 &&
        VAR_0->ca_error_flag == 0 &&
        VAR_0->ca_dvb_flag == 1 &&
        VAR_0->ca_module_present_status == 1;
}
