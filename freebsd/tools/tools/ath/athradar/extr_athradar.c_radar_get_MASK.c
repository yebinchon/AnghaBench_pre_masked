
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ad_id; int ad_out_size; int ad_name; scalar_t__ ad_out_data; scalar_t__ ad_in_size; int * ad_in_data; } ;
struct radarhandler {TYPE_3__ atd; int s; } ;
typedef int pe ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int pe_enabled; int pe_firpwr; int pe_rrssi; int pe_height; int pe_prssi; int pe_inband; int pe_relpwr; int pe_relstep; int pe_maxlen; int pe_usefir128; int pe_blockradar; int pe_enmaxrssi; int pe_extchannel; int pe_enrelpwr; int pe_en_relstep_check; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct radarhandler *VAR_3)
{
 HAL_PHYERR_PARAM VAR_4;

 VAR_3->atd.ad_id = VAR_1 | VAR_0;
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 VAR_3->atd.ad_in_data = ((void*)0);
 VAR_3->atd.ad_in_size = 0;
 VAR_3->atd.ad_out_data = (caddr_t) &VAR_4;
 VAR_3->atd.ad_out_size = sizeof(VAR_4);

 if (FUNC_1(VAR_3->s, VAR_2, &VAR_3->atd) < 0)
  FUNC_0(1, VAR_3->atd.ad_name);

 FUNC_3("Radar parameters (raw):\n");
 FUNC_3("    pe_enabled: %d\n", VAR_4.pe_enabled);
 FUNC_3("    pe_firpwr: %d\n", VAR_4.pe_firpwr);
 FUNC_3("    pe_rrssi: %d\n", VAR_4.pe_rrssi);
 FUNC_3("    pe_height: %d\n", VAR_4.pe_height);
 FUNC_3("    pe_prssi: %d\n", VAR_4.pe_prssi);
 FUNC_3("    pe_inband: %d\n", VAR_4.pe_inband);
 FUNC_3("    pe_relpwr: %d\n", VAR_4.pe_relpwr);
 FUNC_3("    pe_relstep: %d\n", VAR_4.pe_relstep);
 FUNC_3("    pe_maxlen: %d\n", VAR_4.pe_maxlen);
 FUNC_3("    pe_usefir128: %d\n", VAR_4.pe_usefir128);
 FUNC_3("    pe_blockradar: %d\n", VAR_4.pe_blockradar);
 FUNC_3("    pe_enmaxrssi: %d\n", VAR_4.pe_enmaxrssi);
 FUNC_3("    pe_extchannel: %d\n", VAR_4.pe_extchannel);
 FUNC_3("    pe_enrelpwr: %d\n", VAR_4.pe_enrelpwr);
 FUNC_3("    pe_en_relstep_check: %d\n", VAR_4.pe_en_relstep_check);
}
