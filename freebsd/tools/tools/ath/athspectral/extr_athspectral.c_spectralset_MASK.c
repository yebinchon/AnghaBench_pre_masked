
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
struct TYPE_4__ {int ad_id; int ad_in_size; int ad_name; scalar_t__ ad_in_data; scalar_t__ ad_out_size; int * ad_out_data; } ;
struct spectralhandler {TYPE_2__ atd; int s; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {void* ss_spectral_pri; void* ss_short_report; void* ss_count; void* ss_period; void* ss_fft_period; void* ss_active; void* ss_enabled; } ;
typedef TYPE_1__ HAL_SPECTRAL_PARAM ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;

void
FUNC_2(struct spectralhandler *VAR_4, int VAR_5, u_int32_t VAR_6)
{
 HAL_SPECTRAL_PARAM VAR_7;

 VAR_7.ss_fft_period = VAR_1;
 VAR_7.ss_period = VAR_1;
 VAR_7.ss_count = VAR_1;
 VAR_7.ss_short_report = VAR_1;
 VAR_7.ss_spectral_pri = VAR_1;
 VAR_7.ss_fft_period = VAR_1;
 VAR_7.ss_enabled = VAR_1;
 VAR_7.ss_active = VAR_1;

 switch (VAR_5) {
 case 132:
  VAR_7.ss_fft_period = VAR_6;
  break;
 case 130:
  VAR_7.ss_period = VAR_6;
  break;
 case 131:
  VAR_7.ss_count = VAR_6;
  break;
 case 129:
  VAR_7.ss_short_report = VAR_6;
  break;
 case 128:
  VAR_7.ss_spectral_pri = VAR_6;
  break;
 }

 VAR_4->atd.ad_id = VAR_3 | VAR_0;
 VAR_4->atd.ad_out_data = ((void*)0);
 VAR_4->atd.ad_out_size = 0;
 VAR_4->atd.ad_in_data = (caddr_t) &VAR_7;
 VAR_4->atd.ad_in_size = sizeof(HAL_SPECTRAL_PARAM);
 if (FUNC_1(VAR_4->s, VAR_2, &VAR_4->atd) < 0)
  FUNC_0(1, "%s", VAR_4->atd.ad_name);
}
