
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
struct TYPE_4__ {int ad_id; int ad_in_size; int ad_name; scalar_t__ ad_in_data; scalar_t__ ad_out_size; int * ad_out_data; } ;
struct radarhandler {TYPE_2__ atd; int s; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {void* pe_en_relstep_check; void* pe_enrelpwr; void* pe_extchannel; void* pe_enmaxrssi; void* pe_blockradar; void* pe_usefir128; void* pe_maxlen; void* pe_relstep; void* pe_relpwr; void* pe_inband; void* pe_prssi; void* pe_height; void* pe_rrssi; void* pe_firpwr; void* pe_enabled; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;

void
FUNC_2(struct radarhandler *VAR_4, int VAR_5, u_int32_t VAR_6)
{
 HAL_PHYERR_PARAM VAR_7;

 VAR_7.pe_firpwr = VAR_2;
 VAR_7.pe_rrssi = VAR_2;
 VAR_7.pe_height = VAR_2;
 VAR_7.pe_prssi = VAR_2;
 VAR_7.pe_inband = VAR_2;
 VAR_7.pe_enabled = VAR_2;

 VAR_7.pe_relpwr = VAR_2;
 VAR_7.pe_relstep = VAR_2;
 VAR_7.pe_maxlen = VAR_2;
 VAR_7.pe_usefir128 = VAR_2;
 VAR_7.pe_blockradar = VAR_2;
 VAR_7.pe_enmaxrssi = VAR_2;

 VAR_7.pe_extchannel = VAR_2;
 VAR_7.pe_enrelpwr = VAR_2;
 VAR_7.pe_en_relstep_check = VAR_2;

 switch (VAR_5) {
 case 141:
  VAR_7.pe_enabled = VAR_6;
  break;
 case 139:
  VAR_7.pe_firpwr = VAR_6;
  break;
 case 129:
  VAR_7.pe_rrssi = VAR_6;
  break;
 case 138:
  VAR_7.pe_height = VAR_6;
  break;
 case 134:
  VAR_7.pe_prssi = VAR_6;
  break;
 case 137:
  VAR_7.pe_inband = VAR_6;
  break;
 case 133:
  VAR_7.pe_relpwr = VAR_6;
  break;
 case 131:
  VAR_7.pe_relstep = VAR_6;
  break;
 case 136:
  VAR_7.pe_maxlen = VAR_6;
  break;
 case 128:
  VAR_7.pe_usefir128 = VAR_6;
  break;
 case 142:
  VAR_7.pe_blockradar = VAR_6;
  break;
 case 135:
  VAR_7.pe_enmaxrssi = VAR_6;
  break;
 case 140:
  VAR_7.pe_extchannel = VAR_6;
  break;
 case 132:
  VAR_7.pe_enrelpwr = VAR_6;
  break;
 case 130:
  VAR_7.pe_en_relstep_check = VAR_6;
  break;
 }

 VAR_4->atd.ad_id = VAR_1 | VAR_0;
 VAR_4->atd.ad_out_data = ((void*)0);
 VAR_4->atd.ad_out_size = 0;
 VAR_4->atd.ad_in_data = (caddr_t) &VAR_7;
 VAR_4->atd.ad_in_size = sizeof(HAL_PHYERR_PARAM);
 if (FUNC_1(VAR_4->s, VAR_3, &VAR_4->atd) < 0)
  FUNC_0(1, VAR_4->atd.ad_name);
}
