
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int rule_buf_l; int encoding_from; int encoding_to; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_18__ {scalar_t__ attack_kern; scalar_t__ rule_len_l; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_19__ {int kernel_rules_cnt; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_20__ {int run_thread_level1; int* words_progress_rejected; int mux_counter; int mux_dispatcher; scalar_t__ stdin_read_timeout_cnt; } ;
typedef TYPE_4__ status_ctx_t ;
typedef int rule_buf_out ;
typedef scalar_t__ iconv_t ;
struct TYPE_21__ {char* pws_comp; int size_pws_comp; char* pws_idx; int size_pws_idx; scalar_t__ pws_cnt; scalar_t__ kernel_power; int speed_only_finish; scalar_t__ kernel_loops; scalar_t__ kernel_accel; scalar_t__ kernel_loops_prev; scalar_t__ kernel_accel_prev; } ;
typedef TYPE_5__ hc_device_param_t ;
struct TYPE_22__ {scalar_t__ salts_cnt; } ;
typedef TYPE_6__ hashes_t ;
struct TYPE_23__ {size_t pw_min; size_t pw_max; } ;
typedef TYPE_7__ hashconfig_t ;
struct TYPE_24__ {TYPE_4__* status_ctx; TYPE_3__* straight_ctx; TYPE_6__* hashes; TYPE_7__* hashconfig; TYPE_2__* user_options_extra; TYPE_1__* user_options; } ;
typedef TYPE_8__ hashcat_ctx_t ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,int,char*) ;
 size_t FUNC_1 (TYPE_8__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;
 size_t FUNC_8 (scalar_t__,char**,size_t*,char**,size_t*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (TYPE_5__*,int const*,int const) ;
 int FUNC_14 (TYPE_8__*,TYPE_5__*,scalar_t__) ;
 int FUNC_15 (TYPE_8__*,TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_16 (int,int ) ;
 int FUNC_17 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_18 (int ,int ) ;

__attribute__((used)) static int FUNC_19 (hashcat_ctx_t *VAR_6, hc_device_param_t *VAR_7)
{
  user_options_t *VAR_8 = VAR_6->user_options;
  user_options_extra_t *VAR_9 = VAR_6->user_options_extra;
  hashconfig_t *VAR_10 = VAR_6->hashconfig;
  hashes_t *VAR_11 = VAR_6->hashes;
  straight_ctx_t *VAR_12 = VAR_6->straight_ctx;
  status_ctx_t *VAR_13 = VAR_6->status_ctx;

  char *VAR_14 = (char *) FUNC_7 (VAR_1);

  bool VAR_15 = 0;

  iconv_t VAR_16 = ((void*)0);

  char *VAR_17 = ((void*)0);

  if (FUNC_18 (VAR_8->encoding_from, VAR_8->encoding_to) != 0)
  {
    VAR_15 = 1;

    VAR_16 = FUNC_10 (VAR_8->encoding_to, VAR_8->encoding_from);

    if (VAR_16 == (iconv_t) -1)
    {
      FUNC_6 (VAR_14);

      return -1;
    }

    VAR_17 = (char *) FUNC_7 (VAR_2);
  }

  while (VAR_13->run_thread_level1 == 1)
  {
    FUNC_4 (VAR_13->mux_dispatcher);

    if (FUNC_2 (VAR_5) != 0)
    {
      FUNC_5 (VAR_13->mux_dispatcher);

      break;
    }

    u64 VAR_18 = 0;

    FUNC_12 (VAR_7->pws_comp, 0, VAR_7->size_pws_comp);
    FUNC_12 (VAR_7->pws_idx, 0, VAR_7->size_pws_idx);

    while (VAR_7->pws_cnt < VAR_7->kernel_power)
    {
      const int VAR_19 = FUNC_17 (1);

      if (VAR_19 == -1) break;

      if (VAR_19 == 0)
      {
        if (VAR_13->run_thread_level1 == 0) break;

        VAR_13->stdin_read_timeout_cnt++;

        continue;
      }

      VAR_13->stdin_read_timeout_cnt = 0;

      char *VAR_20 = FUNC_3 (VAR_14, VAR_1 - 1, VAR_5);

      if (VAR_20 == ((void*)0)) break;

      size_t VAR_21 = FUNC_11 (VAR_20);

      VAR_21 = FUNC_1 (VAR_6, VAR_20, (u32) VAR_21);



      if (VAR_15 == 1)
      {
        char *VAR_22 = VAR_17;
        size_t VAR_23 = VAR_2;

        if (FUNC_8 (VAR_16, &VAR_20, &VAR_21, &VAR_22, &VAR_23) == (size_t) -1) continue;

        VAR_20 = VAR_17;
        VAR_21 = VAR_2 - VAR_23;
      }



      char VAR_24[VAR_4];

      if (FUNC_16 ((int) VAR_9->rule_len_l, VAR_8->rule_buf_l))
      {
        if (VAR_21 >= VAR_4) continue;

        FUNC_12 (VAR_24, 0, sizeof (VAR_24));

        const int VAR_25 = FUNC_0 (VAR_8->rule_buf_l, (int) VAR_9->rule_len_l, VAR_20, (int) VAR_21, VAR_24);

        if (VAR_25 < 0) continue;

        VAR_20 = VAR_24;
        VAR_21 = (size_t) VAR_25;
      }

      if (VAR_21 > VAR_3) continue;



      const u32 VAR_26 = VAR_9->attack_kern;

      if (VAR_26 == VAR_0)
      {
        if ((VAR_21 < VAR_10->pw_min) || (VAR_21 > VAR_10->pw_max))
        {
          VAR_18++;

          continue;
        }
      }

      FUNC_13 (VAR_7, (const u8 *) VAR_20, (const int) VAR_21);

      if (VAR_13->run_thread_level1 == 0) break;
    }

    FUNC_5 (VAR_13->mux_dispatcher);

    if (VAR_18 > 0)
    {
      FUNC_4 (VAR_13->mux_counter);

      for (u32 VAR_27 = 0; VAR_27 < VAR_11->salts_cnt; VAR_27++)
      {
        VAR_13->words_progress_rejected[VAR_27] += VAR_18 * VAR_12->kernel_rules_cnt;
      }

      FUNC_5 (VAR_13->mux_counter);
    }

    if (VAR_13->run_thread_level1 == 0) break;

    if (VAR_7->pws_cnt == 0) break;



    if (FUNC_14 (VAR_6, VAR_7, VAR_7->pws_cnt) == -1)
    {
      FUNC_6 (VAR_14);

      return -1;
    }

    if (FUNC_15 (VAR_6, VAR_7, VAR_7->pws_cnt) == -1)
    {
      FUNC_6 (VAR_14);

      return -1;
    }

    VAR_7->pws_cnt = 0;

    if (VAR_13->run_thread_level1 == 0) break;

    if (VAR_7->speed_only_finish == 1) break;
  }

  VAR_7->kernel_accel_prev = VAR_7->kernel_accel;
  VAR_7->kernel_loops_prev = VAR_7->kernel_loops;

  VAR_7->kernel_accel = 0;
  VAR_7->kernel_loops = 0;

  if (VAR_15 == 1)
  {
    FUNC_9 (VAR_16);

    FUNC_6 (VAR_17);
  }

  FUNC_6 (VAR_14);

  return 0;
}
