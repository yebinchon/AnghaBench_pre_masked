
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int remove; int status; int restore_timer; int remove_timer; int status_timer; scalar_t__ stdin_timeout_abort; scalar_t__ hwmon_temp_abort; scalar_t__ runtime; } ;
typedef TYPE_1__ user_options_t ;
typedef int u32 ;
struct TYPE_21__ {int shutdown_inner; scalar_t__ devices_status; scalar_t__ runtime_start; scalar_t__ stdin_read_timeout_cnt; int mux_hwmon; int mux_display; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_22__ {int enabled; } ;
typedef TYPE_3__ restore_ctx_t ;
struct TYPE_23__ {int enabled; } ;
typedef TYPE_4__ hwmon_ctx_t ;
struct TYPE_24__ {int skipped; int opencl_device_type; int skipped_warning; } ;
typedef TYPE_5__ hc_device_param_t ;
struct TYPE_25__ {scalar_t__ hashlist_mode; scalar_t__ digests_saved; scalar_t__ digests_done; } ;
typedef TYPE_6__ hashes_t ;
struct TYPE_26__ {TYPE_1__* user_options; TYPE_2__* status_ctx; TYPE_3__* restore_ctx; TYPE_8__* backend_ctx; TYPE_4__* hwmon_ctx; TYPE_6__* hashes; } ;
typedef TYPE_7__ hashcat_ctx_t ;
struct TYPE_27__ {int backend_devices_cnt; TYPE_5__* devices_param; } ;
typedef TYPE_8__ backend_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int const) ;
 double FUNC_12 (TYPE_7__*,int) ;
 scalar_t__ FUNC_13 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_14 (hashcat_ctx_t *VAR_14)
{
  hashes_t *VAR_15 = VAR_14->hashes;
  hwmon_ctx_t *VAR_16 = VAR_14->hwmon_ctx;
  backend_ctx_t *VAR_17 = VAR_14->backend_ctx;
  restore_ctx_t *VAR_18 = VAR_14->restore_ctx;
  status_ctx_t *VAR_19 = VAR_14->status_ctx;
  user_options_t *VAR_20 = VAR_14->user_options;

  bool VAR_21 = 0;
  bool VAR_22 = 0;
  bool VAR_23 = 0;
  bool VAR_24 = 0;
  bool VAR_25 = 0;
  bool VAR_26 = 0;

  const int VAR_27 = 1;
  const double VAR_28 = 50.0;
  const double VAR_29 = 90.0;

  if (VAR_20->runtime)
  {
    VAR_21 = 1;
  }

  if (VAR_18->enabled == 1)
  {
    VAR_24 = 1;
  }

  if ((VAR_20->remove == 1) && ((VAR_15->hashlist_mode == VAR_11) || (VAR_15->hashlist_mode == VAR_10)))
  {
    VAR_22 = 1;
  }

  if (VAR_20->status == 1)
  {
    VAR_23 = 1;
  }

  if (VAR_16->enabled == 1)
  {
    VAR_25 = 1;
  }

  if (VAR_16->enabled == 1)
  {
    VAR_26 = 1;
  }

  if ((VAR_21 == 0) && (VAR_22 == 0) && (VAR_23 == 0) && (VAR_24 == 0) && (VAR_25 == 0) && (VAR_26 == 0))
  {
    return 0;
  }



  u32 VAR_30 = 0;
  u32 VAR_31 = 0;

  u32 VAR_32 = VAR_20->restore_timer;
  u32 VAR_33 = VAR_20->remove_timer;
  u32 VAR_34 = VAR_20->status_timer;

  while (VAR_19->shutdown_inner == 0)
  {
    FUNC_11 (VAR_27);

    if (VAR_19->devices_status == VAR_12) continue;

    if (VAR_16->enabled == 1)
    {
      FUNC_3 (VAR_19->mux_hwmon);

      for (int VAR_35 = 0; VAR_35 < VAR_17->backend_devices_cnt; VAR_35++)
      {
        hc_device_param_t *VAR_36 = &VAR_17->devices_param[VAR_35];

        if (VAR_36->skipped == 1) continue;

        if ((VAR_17->devices_param[VAR_35].opencl_device_type & VAR_0) == 0) continue;

        const int VAR_37 = FUNC_5 (VAR_14, VAR_35);

        if (VAR_37 > (int) VAR_20->hwmon_temp_abort)
        {
          FUNC_0 (VAR_6, &VAR_35, sizeof (int));

          FUNC_8 (VAR_14);
        }
      }

      for (int VAR_38 = 0; VAR_38 < VAR_17->backend_devices_cnt; VAR_38++)
      {
        hc_device_param_t *VAR_39 = &VAR_17->devices_param[VAR_38];

        if (VAR_39->skipped == 1) continue;

        if (VAR_39->skipped_warning == 1) continue;

        const int VAR_40 = FUNC_6 (VAR_14, VAR_38);

        if (VAR_40 == -1) continue;

        if (VAR_40 > 0)
        {
          VAR_30++;

          if (VAR_30 == 1) FUNC_0 (VAR_7, &VAR_38, sizeof (int));
          if (VAR_30 == 2) FUNC_0 (VAR_8, &VAR_38, sizeof (int));
          if (VAR_30 == 3) FUNC_0 (VAR_9, &VAR_38, sizeof (int));
        }
        else
        {
          if (VAR_30 > 0) VAR_30--;
        }
      }

      FUNC_4 (VAR_19->mux_hwmon);
    }

    if (VAR_24 == 1)
    {
      VAR_32--;

      if (VAR_32 == 0)
      {
        const int VAR_41 = FUNC_1 (VAR_14);

        if (VAR_41 == -1) return -1;

        VAR_32 = VAR_20->restore_timer;
      }
    }

    if ((VAR_21 == 1) && (VAR_19->runtime_start > 0))
    {
      const int VAR_42 = FUNC_2 (VAR_14);

      if (VAR_42 <= 0)
      {
        FUNC_0 (VAR_4, ((void*)0), 0);

        FUNC_9 (VAR_14);
      }
    }

    if (VAR_22 == 1)
    {
      VAR_33--;

      if (VAR_33 == 0)
      {
        if (VAR_15->digests_saved != VAR_15->digests_done)
        {
          VAR_15->digests_saved = VAR_15->digests_done;

          const int VAR_43 = FUNC_10 (VAR_14);

          if (VAR_43 == -1) return -1;
        }

        VAR_33 = VAR_20->remove_timer;
      }
    }

    if (VAR_23 == 1)
    {
      VAR_34--;

      if (VAR_34 == 0)
      {
        FUNC_3 (VAR_19->mux_display);

        FUNC_0 (VAR_5, ((void*)0), 0);

        FUNC_4 (VAR_19->mux_display);

        VAR_34 = VAR_20->status_timer;
      }
    }

    if (VAR_26 == 1)
    {
      int VAR_44 = 0;
      int VAR_45 = 0;

      double VAR_46 = 0;
      double VAR_47 = 0;

      FUNC_3 (VAR_19->mux_hwmon);

      for (int VAR_48 = 0; VAR_48 < VAR_17->backend_devices_cnt; VAR_48++)
      {
        hc_device_param_t *VAR_49 = &VAR_17->devices_param[VAR_48];

        if (VAR_49->skipped == 1) continue;

        if (VAR_49->skipped_warning == 1) continue;

        VAR_44++;

        const double VAR_50 = FUNC_12 (VAR_14, VAR_48);

        VAR_46 += VAR_50;

        const int VAR_51 = FUNC_7 (VAR_14, VAR_48);

        if (VAR_51 == -1) continue;

        VAR_47 += (double) VAR_51;

        VAR_45++;
      }

      FUNC_4 (VAR_19->mux_hwmon);

      double VAR_52 = 0;
      double VAR_53 = 0;

      if (VAR_44 > 0) VAR_52 = VAR_46 / VAR_44;
      if (VAR_45 > 0) VAR_53 = VAR_47 / VAR_45;

      if ((VAR_52 > 0) && (VAR_52 < VAR_28))
      {
        VAR_31++;

        if (VAR_31 == 10) FUNC_0 (VAR_3, ((void*)0), 0);
      }

      if ((VAR_53 > 0) && (VAR_53 < VAR_29))
      {
        VAR_31++;

        if (VAR_31 == 10) FUNC_0 (VAR_3, ((void*)0), 0);
      }
    }




    if (VAR_20->stdin_timeout_abort != 0)
    {
      if (FUNC_13 (VAR_14) == 0)
      {
        if (VAR_19->stdin_read_timeout_cnt > 0)
        {
          if (VAR_19->stdin_read_timeout_cnt >= VAR_20->stdin_timeout_abort)
          {
            FUNC_0 (VAR_1, ((void*)0), 0);

            FUNC_8 (VAR_14);

            VAR_19->shutdown_inner = 1;

            break;
          }

          if ((VAR_19->stdin_read_timeout_cnt % VAR_13) == 0)
          {
            FUNC_0 (VAR_2, ((void*)0), 0);
          }
        }
      }
    }
  }



  if (VAR_22 == 1)
  {
    if (VAR_15->digests_saved != VAR_15->digests_done)
    {
      const int VAR_54 = FUNC_10 (VAR_14);

      if (VAR_54 == -1) return -1;
    }
  }



  if (VAR_24 == 1)
  {
    const int VAR_55 = FUNC_1 (VAR_14);

    if (VAR_55 == -1) return -1;
  }

  return 0;
}
