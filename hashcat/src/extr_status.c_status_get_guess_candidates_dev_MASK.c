
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ attack_kern; } ;
typedef TYPE_1__ user_options_extra_t ;
typedef char u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_13__ {int accessible; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_14__ {scalar_t__ const member_0; scalar_t__ const member_1; int member_6; int member_5; int member_4; int member_3; int member_2; } ;
typedef TYPE_3__ plain_t ;
struct TYPE_15__ {int skipped; int skipped_warning; scalar_t__ outerloop_left; scalar_t__ innerloop_left; } ;
typedef TYPE_4__ hc_device_param_t ;
struct TYPE_16__ {int opts_type; } ;
typedef TYPE_5__ hashconfig_t ;
struct TYPE_17__ {TYPE_1__* user_options_extra; TYPE_2__* status_ctx; TYPE_7__* backend_ctx; TYPE_5__* hashconfig; } ;
typedef TYPE_6__ hashcat_ctx_t ;
struct TYPE_18__ {TYPE_4__* devices_param; } ;
typedef TYPE_7__ backend_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*,TYPE_3__*,scalar_t__*,int*) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,int const) ;
 int FUNC_4 (char*,int ,char*,...) ;

char *FUNC_5 (const hashcat_ctx_t *VAR_3, const int VAR_4)
{
  const hashconfig_t *VAR_5 = VAR_3->hashconfig;
  const backend_ctx_t *VAR_6 = VAR_3->backend_ctx;
  const status_ctx_t *VAR_7 = VAR_3->status_ctx;
  const user_options_extra_t *VAR_8 = VAR_3->user_options_extra;

  if (VAR_7->accessible == 0) return ((void*)0);

  hc_device_param_t *VAR_9 = &VAR_6->devices_param[VAR_4];

  char *VAR_10 = (char *) FUNC_2 (VAR_1);

  if ((VAR_9->skipped == 1) || (VAR_9->skipped_warning == 1))
  {
    FUNC_4 (VAR_10, VAR_1, "[Skipped]");

    return VAR_10;
  }

  if (VAR_8->attack_kern == VAR_0)
  {
    FUNC_4 (VAR_10, VAR_1, "[Generating]");
  }
  else
  {
    FUNC_4 (VAR_10, VAR_1, "[Copying]");
  }

  if ((VAR_9->outerloop_left == 0) || (VAR_9->innerloop_left == 0)) return VAR_10;

  const u64 VAR_11 = 0;
  const u64 VAR_12 = VAR_9->outerloop_left - 1;

  const u32 VAR_13 = 0;
  const u32 VAR_14 = VAR_9->innerloop_left - 1;

  plain_t VAR_15 = { VAR_11, VAR_13, 0, 0, 0, 0, 0 };
  plain_t VAR_16 = { VAR_12, VAR_14, 0, 0, 0, 0, 0 };

  u32 VAR_17[(64 * 2) + 2] = { 0 };
  u32 VAR_18[(64 * 2) + 2] = { 0 };

  u8 *VAR_19 = (u8 *) VAR_17;
  u8 *VAR_20 = (u8 *) VAR_18;

  int VAR_21 = 0;
  int VAR_22 = 0;

  FUNC_0 ((hashcat_ctx_t *) VAR_3, VAR_9, &VAR_15, VAR_17, &VAR_21);
  FUNC_0 ((hashcat_ctx_t *) VAR_3, VAR_9, &VAR_16, VAR_18, &VAR_22);

  const bool VAR_23 = (VAR_5->opts_type & VAR_2) ? 1 : 0;

  const bool VAR_24 = FUNC_3 (VAR_19, VAR_21, 0, VAR_23);
  const bool VAR_25 = FUNC_3 (VAR_20, VAR_22, 0, VAR_23);

  if ((VAR_24 == 1) || (VAR_25 == 1))
  {
    FUNC_1 (VAR_19, VAR_21, VAR_19);
    FUNC_1 (VAR_20, VAR_22, VAR_20);

    VAR_19[VAR_21 * 2] = 0;
    VAR_20[VAR_22 * 2] = 0;

    FUNC_4 (VAR_10, VAR_1, "$HEX[%s] -> $HEX[%s]", VAR_19, VAR_20);
  }
  else
  {
    VAR_19[VAR_21] = 0;
    VAR_20[VAR_22] = 0;

    FUNC_4 (VAR_10, VAR_1, "%s -> %s", VAR_19, VAR_20);
  }

  return VAR_10;
}
