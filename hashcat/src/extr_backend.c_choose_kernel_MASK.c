
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_10__ ;


struct TYPE_38__ {int stdout_flag; scalar_t__ attack_mode; int slow_candidates; int speed_only; scalar_t__ hook_threads; } ;
typedef TYPE_2__ user_options_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_39__ {int run_thread_level2; } ;
typedef TYPE_3__ status_ctx_t ;
typedef int pw_t ;
struct TYPE_40__ {int (* module_deep_comp_kernel ) (TYPE_8__*,int const,int) ;} ;
typedef TYPE_4__ module_ctx_t ;
struct TYPE_41__ {int tid; int tsz; int salt_pos; int pws_cnt; int hook_salts_buf; TYPE_7__* device_param; TYPE_3__* status_ctx; TYPE_4__* module_ctx; } ;
typedef TYPE_5__ hook_thread_param_t ;
typedef TYPE_5__ hc_thread_t ;
struct TYPE_42__ {int size_tm; int is_cuda; int is_opencl; int const size_hooks; int kernel_loops; int* kernel_params_buf32; int speed_pos; int* speed_cnt; double* speed_msec; double outerloop_multi; int speed_only_finish; int opencl_d_hooks; int cuda_d_hooks; int hooks_buf; int opencl_command_queue; int timer_speed; int opencl_d_pws_buf; int opencl_d_pws_amp_buf; int cuda_d_pws_amp_buf; int cuda_d_pws_buf; int opencl_d_bfs_c; int opencl_d_tm_c; int cuda_d_tm_c; int cuda_d_bfs_c; } ;
typedef TYPE_7__ hc_device_param_t ;
struct TYPE_43__ {TYPE_1__* salts_buf; int hook_salts_buf; } ;
typedef TYPE_8__ hashes_t ;
struct TYPE_44__ {scalar_t__ attack_exec; int opts_type; int opti_type; } ;
typedef TYPE_9__ hashconfig_t ;
struct TYPE_36__ {TYPE_2__* user_options; TYPE_3__* status_ctx; TYPE_4__* module_ctx; TYPE_8__* hashes; TYPE_9__* hashconfig; } ;
typedef TYPE_10__ hashcat_ctx_t ;
struct TYPE_37__ {int salt_iter; int salt_iter2; int digests_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int FUNC_0 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (TYPE_10__*,int ,int ,int ,int ,int ,int const,int ,int *,int *) ;
 int FUNC_3 (TYPE_10__*,int ,int ,int ,int ,int const,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_10__*,int ,int ,int ,int ,int const,int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_10__*,int ,int ,int const) ;
 int FUNC_6 (TYPE_10__*,int ,int ,int const) ;
 int FUNC_7 (TYPE_10__*,int ,int ,int const) ;
 int FUNC_8 (TYPE_5__,int ,TYPE_5__*) ;
 int FUNC_9 (int const,TYPE_5__*) ;
 double FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int const,int) ;
 int FUNC_12 (TYPE_5__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (TYPE_10__*,TYPE_7__*,int const) ;
 int FUNC_14 (TYPE_10__*,TYPE_7__*,int ,int const) ;
 int FUNC_15 (TYPE_10__*,TYPE_7__*,int const,int const,int,int const) ;
 int FUNC_16 (TYPE_10__*,TYPE_7__*,int const) ;
 int FUNC_17 (TYPE_10__*,TYPE_7__*) ;
 int FUNC_18 (TYPE_10__*,TYPE_7__*,int ,int const) ;
 int FUNC_19 (TYPE_8__*,int const,int) ;

int FUNC_20 (hashcat_ctx_t *VAR_20, hc_device_param_t *VAR_21, const u32 VAR_22, const u64 VAR_23, const u32 VAR_24, const u32 VAR_25)
{
  hashconfig_t *VAR_26 = VAR_20->hashconfig;
  hashes_t *VAR_27 = VAR_20->hashes;
  module_ctx_t *VAR_28 = VAR_20->module_ctx;
  status_ctx_t *VAR_29 = VAR_20->status_ctx;
  user_options_t *VAR_30 = VAR_20->user_options;

  if (VAR_30->stdout_flag == 1)
  {
    return FUNC_13 (VAR_20, VAR_21, VAR_23);
  }

  if (VAR_26->attack_exec == VAR_0)
  {
    if (VAR_30->attack_mode == VAR_1)
    {
      if (VAR_30->slow_candidates == 1)
      {
      }
      else
      {
        if (VAR_26->opts_type & VAR_17)
        {
          const u32 VAR_31 = VAR_21->size_tm;

          if (VAR_21->is_cuda == 1)
          {
            if (FUNC_14 (VAR_20, VAR_21, VAR_21->cuda_d_tm_c, VAR_31) == -1) return -1;
          }

          if (VAR_21->is_opencl == 1)
          {
            if (FUNC_18 (VAR_20, VAR_21, VAR_21->opencl_d_tm_c, VAR_31) == -1) return -1;
          }

          if (FUNC_17 (VAR_20, VAR_21) == -1) return -1;

          if (VAR_21->is_cuda == 1)
          {
            if (FUNC_5 (VAR_20, VAR_21->cuda_d_bfs_c, VAR_21->cuda_d_tm_c, VAR_31) == -1) return -1;
          }

          if (VAR_21->is_opencl == 1)
          {
            if (FUNC_2 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_tm_c, VAR_21->opencl_d_bfs_c, 0, 0, VAR_31, 0, ((void*)0), ((void*)0)) == -1) return -1;
          }
        }
      }
    }

    if (VAR_26->opti_type & VAR_11)
    {
      if (VAR_22 < 16)
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_3, VAR_23, 1, VAR_24) == -1) return -1;
      }
      else if (VAR_22 < 32)
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_5, VAR_23, 1, VAR_24) == -1) return -1;
      }
      else
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_7, VAR_23, 1, VAR_24) == -1) return -1;
      }
    }
    else
    {
      if (FUNC_15 (VAR_20, VAR_21, VAR_8, VAR_23, 1, VAR_24) == -1) return -1;
    }
  }
  else
  {
    bool VAR_32 = 1;
    bool VAR_33 = 1;
    bool VAR_34 = 1;

    if (VAR_32 == 1)
    {
      if (VAR_21->is_cuda == 1)
      {
        if (FUNC_5 (VAR_20, VAR_21->cuda_d_pws_buf, VAR_21->cuda_d_pws_amp_buf, VAR_23 * sizeof (pw_t)) == -1) return -1;
      }

      if (VAR_21->is_opencl == 1)
      {
        if (FUNC_2 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_pws_amp_buf, VAR_21->opencl_d_pws_buf, 0, 0, VAR_23 * sizeof (pw_t), 0, ((void*)0), ((void*)0)) == -1) return -1;
      }

      if (VAR_30->slow_candidates == 1)
      {
      }
      else
      {
        if (FUNC_16 (VAR_20, VAR_21, VAR_23) == -1) return -1;
      }

      if (FUNC_15 (VAR_20, VAR_21, VAR_3, VAR_23, 0, 0) == -1) return -1;

      if (VAR_26->opts_type & VAR_13)
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_4, VAR_23, 0, 0) == -1) return -1;

        if (VAR_21->is_cuda == 1)
        {
          if (FUNC_6 (VAR_20, VAR_21->hooks_buf, VAR_21->cuda_d_hooks, VAR_21->size_hooks) == -1) return -1;
        }

        if (VAR_21->is_opencl == 1)
        {
          if (FUNC_3 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_hooks, VAR_2, 0, VAR_21->size_hooks, VAR_21->hooks_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
        }

        const int VAR_35 = (int) VAR_30->hook_threads;

        hook_thread_param_t *VAR_36 = (hook_thread_param_t *) FUNC_11 (VAR_35, sizeof (hook_thread_param_t));

        for (int VAR_37 = 0; VAR_37 < VAR_35; VAR_37++)
        {
          hook_thread_param_t *VAR_38 = VAR_36 + VAR_37;

          VAR_38->tid = VAR_37;
          VAR_38->tsz = VAR_35;

          VAR_38->module_ctx = VAR_28;
          VAR_38->status_ctx = VAR_29;

          VAR_38->device_param = VAR_21;

          VAR_38->hook_salts_buf = VAR_27->hook_salts_buf;

          VAR_38->salt_pos = VAR_25;

          VAR_38->pws_cnt = VAR_23;
        }

        hc_thread_t *VAR_39 = (hc_thread_t *) FUNC_1 (VAR_35, sizeof (hc_thread_t));

        for (int VAR_40 = 0; VAR_40 < VAR_35; VAR_40++)
        {
          hook_thread_param_t *VAR_41 = VAR_36 + VAR_40;

          FUNC_8 (VAR_39[VAR_40], VAR_18, VAR_41);
        }

        FUNC_9 (VAR_35, VAR_39);

        FUNC_12 (VAR_39);

        FUNC_12 (VAR_36);

        if (VAR_21->is_cuda == 1)
        {
          if (FUNC_7 (VAR_20, VAR_21->cuda_d_hooks, VAR_21->hooks_buf, VAR_21->size_hooks) == -1) return -1;
        }

        if (VAR_21->is_opencl == 1)
        {
          if (FUNC_4 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_hooks, VAR_2, 0, VAR_21->size_hooks, VAR_21->hooks_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
        }
      }
    }

    if (VAR_33 == 1)
    {
      u32 VAR_42 = VAR_27->salts_buf[VAR_25].salt_iter;

      u32 VAR_43 = VAR_21->kernel_loops;

      for (u32 VAR_44 = 0, VAR_45 = 0; VAR_44 < VAR_42; VAR_44 += VAR_43, VAR_45++)
      {
        u32 VAR_46 = VAR_42 - VAR_44;

        VAR_46 = FUNC_0 (VAR_46, VAR_43);

        VAR_21->kernel_params_buf32[28] = VAR_44;
        VAR_21->kernel_params_buf32[29] = VAR_46;

        if (FUNC_15 (VAR_20, VAR_21, VAR_5, VAR_23, 1, VAR_45) == -1) return -1;



        if (VAR_29->run_thread_level2 == 0) break;





        const float VAR_47 = (float) (VAR_44 + VAR_46) / VAR_42;

        const u64 VAR_48 = (u64) (VAR_23 * VAR_47);

        double VAR_49 = FUNC_10 (VAR_21->timer_speed);

        const u32 VAR_50 = VAR_21->speed_pos;

        VAR_21->speed_cnt[VAR_50] = VAR_48;

        VAR_21->speed_msec[VAR_50] = VAR_49;

        if (VAR_30->speed_only == 1)
        {
          if (VAR_49 > 4000)
          {
            VAR_21->outerloop_multi *= (double) VAR_42 / (double) (VAR_44 + VAR_46);

            VAR_21->speed_pos = 1;

            VAR_21->speed_only_finish = 1;

            return 0;
          }
        }
      }

      if (VAR_26->opts_type & VAR_14)
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_6, VAR_23, 0, 0) == -1) return -1;

        if (VAR_21->is_cuda == 1)
        {
          if (FUNC_6 (VAR_20, VAR_21->hooks_buf, VAR_21->cuda_d_hooks, VAR_21->size_hooks) == -1) return -1;
        }

        if (VAR_21->is_opencl == 1)
        {
          if (FUNC_3 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_hooks, VAR_2, 0, VAR_21->size_hooks, VAR_21->hooks_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
        }

        const int VAR_51 = (int) VAR_30->hook_threads;

        hook_thread_param_t *VAR_52 = (hook_thread_param_t *) FUNC_11 (VAR_51, sizeof (hook_thread_param_t));

        for (int VAR_53 = 0; VAR_53 < VAR_51; VAR_53++)
        {
          hook_thread_param_t *VAR_54 = VAR_52 + VAR_53;

          VAR_54->tid = VAR_53;
          VAR_54->tsz = VAR_51;

          VAR_54->module_ctx = VAR_28;
          VAR_54->status_ctx = VAR_29;

          VAR_54->device_param = VAR_21;

          VAR_54->hook_salts_buf = VAR_27->hook_salts_buf;

          VAR_54->salt_pos = VAR_25;

          VAR_54->pws_cnt = VAR_23;
        }

        hc_thread_t *VAR_55 = (hc_thread_t *) FUNC_1 (VAR_51, sizeof (hc_thread_t));

        for (int VAR_56 = 0; VAR_56 < VAR_51; VAR_56++)
        {
          hook_thread_param_t *VAR_57 = VAR_52 + VAR_56;

          FUNC_8 (VAR_55[VAR_56], VAR_19, VAR_57);
        }

        FUNC_9 (VAR_51, VAR_55);

        FUNC_12 (VAR_55);

        FUNC_12 (VAR_52);

        if (VAR_21->is_cuda == 1)
        {
          if (FUNC_7 (VAR_20, VAR_21->cuda_d_hooks, VAR_21->hooks_buf, VAR_21->size_hooks) == -1) return -1;
        }

        if (VAR_21->is_opencl == 1)
        {
          if (FUNC_4 (VAR_20, VAR_21->opencl_command_queue, VAR_21->opencl_d_hooks, VAR_2, 0, VAR_21->size_hooks, VAR_21->hooks_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
        }
      }
    }



    if (VAR_33 == 1)
    {



      if (VAR_26->opts_type & VAR_15)
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_9, VAR_23, 0, 0) == -1) return -1;
      }

      if (VAR_26->opts_type & VAR_16)
      {
        u32 VAR_58 = VAR_27->salts_buf[VAR_25].salt_iter2;

        u32 VAR_59 = VAR_21->kernel_loops;

        for (u32 VAR_60 = 0, VAR_61 = 0; VAR_60 < VAR_58; VAR_60 += VAR_59, VAR_61++)
        {
          u32 VAR_62 = VAR_58 - VAR_60;

          VAR_62 = FUNC_0 (VAR_62, VAR_59);

          VAR_21->kernel_params_buf32[28] = VAR_60;
          VAR_21->kernel_params_buf32[29] = VAR_62;

          if (FUNC_15 (VAR_20, VAR_21, VAR_10, VAR_23, 1, VAR_61) == -1) return -1;



          if (VAR_29->run_thread_level2 == 0) break;
        }
      }
    }

    if (VAR_34 == 1)
    {
      if (VAR_26->opts_type & VAR_12)
      {
        const u32 VAR_63 = VAR_27->salts_buf[VAR_25].digests_cnt;

        for (u32 VAR_64 = 0; VAR_64 < VAR_63; VAR_64++)
        {
          VAR_21->kernel_params_buf32[28] = VAR_64;
          VAR_21->kernel_params_buf32[29] = VAR_63;

          const u32 VAR_65 = VAR_28->module_deep_comp_kernel (VAR_27, VAR_25, VAR_64);

          if (FUNC_15 (VAR_20, VAR_21, VAR_65, VAR_23, 0, 0) == -1) return -1;

          if (VAR_29->run_thread_level2 == 0) break;
        }
      }
      else
      {
        if (FUNC_15 (VAR_20, VAR_21, VAR_7, VAR_23, 0, 0) == -1) return -1;
      }
    }
    if ((VAR_26->opts_type & VAR_13) || (VAR_26->opts_type & VAR_14))
    {
      if (VAR_21->is_cuda == 1)
      {
        if (FUNC_14 (VAR_20, VAR_21, VAR_21->cuda_d_hooks, VAR_21->size_hooks) == -1) return -1;
      }

      if (VAR_21->is_opencl == 1)
      {
        if (FUNC_18 (VAR_20, VAR_21, VAR_21->opencl_d_hooks, VAR_21->size_hooks) == -1) return -1;
      }
    }
  }

  return 0;
}
