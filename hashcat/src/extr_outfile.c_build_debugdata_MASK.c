
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ attack_mode; int slow_candidates; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_16__ {int * kernel_rules_buf; } ;
typedef TYPE_2__ straight_ctx_t ;
struct TYPE_17__ {scalar_t__ i; scalar_t__ pw_len; } ;
typedef TYPE_3__ pw_t ;
struct TYPE_18__ {size_t rule_idx; char* base_buf; size_t base_len; } ;
typedef TYPE_4__ pw_pre_t ;
struct TYPE_19__ {int gidvid; int il_pos; } ;
typedef TYPE_5__ plain_t ;
struct TYPE_20__ {int const innerloop_pos; TYPE_4__* pws_base_buf; } ;
typedef TYPE_6__ hc_device_param_t ;
struct TYPE_21__ {TYPE_1__* user_options; TYPE_2__* straight_ctx; TYPE_8__* debugfile_ctx; } ;
typedef TYPE_7__ hashcat_ctx_t ;
struct TYPE_22__ {int mode; } ;
typedef TYPE_8__ debugfile_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_7__*,TYPE_6__*,int const,TYPE_3__*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (scalar_t__*,char*,size_t) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, hc_device_param_t *VAR_2, plain_t *VAR_3, u8 *VAR_4, int *VAR_5, u8 *VAR_6, int *VAR_7)
{
  const debugfile_ctx_t *VAR_8 = VAR_1->debugfile_ctx;
  const straight_ctx_t *VAR_9 = VAR_1->straight_ctx;
  const user_options_t *VAR_10 = VAR_1->user_options;

  const u64 VAR_11 = VAR_3->gidvid;
  const u32 VAR_12 = VAR_3->il_pos;

  if (VAR_10->attack_mode != VAR_0) return 0;

  const u32 VAR_13 = VAR_8->mode;

  if (VAR_13 == 0) return 0;

  if (VAR_10->slow_candidates == 1)
  {
    pw_pre_t *VAR_14 = VAR_2->pws_base_buf + VAR_11;


    if ((VAR_13 == 1) || (VAR_13 == 3) || (VAR_13 == 4))
    {
      const int VAR_15 = FUNC_1 ((char *) VAR_4, &VAR_9->kernel_rules_buf[VAR_14->rule_idx]);

      VAR_4[VAR_15] = 0;

      *VAR_5 = VAR_15;
    }


    if ((VAR_13 == 2) || (VAR_13 == 3) || (VAR_13 == 4))
    {
      FUNC_2 (VAR_6, VAR_14->base_buf, VAR_14->base_len);

      VAR_6[VAR_14->base_len] = 0;

      *VAR_7 = VAR_14->base_len;
    }
  }
  else
  {
    pw_t VAR_16;

    const int VAR_17 = FUNC_0 (VAR_1, VAR_2, VAR_11, &VAR_16);

    if (VAR_17 == -1) return -1;

    int VAR_18 = (int) VAR_16.pw_len;

    const u64 VAR_19 = VAR_2->innerloop_pos + VAR_12;


    if ((VAR_13 == 1) || (VAR_13 == 3) || (VAR_13 == 4))
    {
      const int VAR_20 = FUNC_1 ((char *) VAR_4, &VAR_9->kernel_rules_buf[VAR_19]);

      VAR_4[VAR_20] = 0;

      *VAR_5 = VAR_20;
    }


    if ((VAR_13 == 2) || (VAR_13 == 3) || (VAR_13 == 4))
    {
      FUNC_2 (VAR_6, (char *) VAR_16.i, (size_t) VAR_18);

      VAR_6[VAR_18] = 0;

      *VAR_7 = VAR_18;
    }
  }

  return 0;
}
