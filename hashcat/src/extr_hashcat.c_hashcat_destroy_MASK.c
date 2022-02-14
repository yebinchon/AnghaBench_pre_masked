
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wl_data; int user_options; int user_options_extra; int tuning_db; int straight_ctx; int status_ctx; int restore_ctx; int potfile_ctx; int pidfile_ctx; int outfile_ctx; int outcheck_ctx; int backend_ctx; int module_ctx; int mask_ctx; int loopback_ctx; int logfile_ctx; int induct_ctx; int hwmon_ctx; int hashes; int hashconfig; int hashcat_user; int folder_config; int event_ctx; int dictstat_ctx; int debugfile_ctx; int cpt_ctx; int combinator_ctx; int bitmap_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  FUNC_0 (VAR_0->bitmap_ctx);
  FUNC_0 (VAR_0->combinator_ctx);
  FUNC_0 (VAR_0->cpt_ctx);
  FUNC_0 (VAR_0->debugfile_ctx);
  FUNC_0 (VAR_0->dictstat_ctx);
  FUNC_0 (VAR_0->event_ctx);
  FUNC_0 (VAR_0->folder_config);
  FUNC_0 (VAR_0->hashcat_user);
  FUNC_0 (VAR_0->hashconfig);
  FUNC_0 (VAR_0->hashes);
  FUNC_0 (VAR_0->hwmon_ctx);
  FUNC_0 (VAR_0->induct_ctx);
  FUNC_0 (VAR_0->logfile_ctx);
  FUNC_0 (VAR_0->loopback_ctx);
  FUNC_0 (VAR_0->mask_ctx);
  FUNC_0 (VAR_0->module_ctx);
  FUNC_0 (VAR_0->backend_ctx);
  FUNC_0 (VAR_0->outcheck_ctx);
  FUNC_0 (VAR_0->outfile_ctx);
  FUNC_0 (VAR_0->pidfile_ctx);
  FUNC_0 (VAR_0->potfile_ctx);
  FUNC_0 (VAR_0->restore_ctx);
  FUNC_0 (VAR_0->status_ctx);
  FUNC_0 (VAR_0->straight_ctx);
  FUNC_0 (VAR_0->tuning_db);
  FUNC_0 (VAR_0->user_options_extra);
  FUNC_0 (VAR_0->user_options);
  FUNC_0 (VAR_0->wl_data);

  FUNC_1 (VAR_0, 0, sizeof (hashcat_ctx_t));
}
