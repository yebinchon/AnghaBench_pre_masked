
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int example_hashes; int left; int backend_info; int show; int usage; int version; scalar_t__ attack_mode; int benchmark; scalar_t__ custom_charset_4; scalar_t__ custom_charset_3; scalar_t__ custom_charset_2; scalar_t__ custom_charset_1; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_12__ {int hc_workc; char** hc_workv; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef int mf_t ;
struct TYPE_13__ {int enabled; int mask_from_file; scalar_t__ masks_cnt; int * masks; int mask; int * mp_usr; int * mp_sys; int * mfs; scalar_t__ masks_pos; int * markov_css_buf; int * root_css_buf; int * markov_table_buf; int * root_table_buf; scalar_t__ css_cnt; int * css_buf; } ;
typedef TYPE_3__ mask_ctx_t ;
typedef int hcstat_table_t ;
struct TYPE_14__ {char* benchmark_mask; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_15__ {TYPE_3__* mask_ctx; TYPE_1__* user_options; TYPE_2__* user_options_extra; TYPE_4__* hashconfig; } ;
typedef TYPE_5__ hashcat_ctx_t ;
typedef int cs_t ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 size_t FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_5__*,char const*,char*) ;
 char* FUNC_11 (char*,size_t const) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_5__*,int *,int *,scalar_t__,int) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int ) ;

int FUNC_16 (hashcat_ctx_t *VAR_13)
{
  const hashconfig_t *VAR_14 = VAR_13->hashconfig;
  const user_options_extra_t *VAR_15 = VAR_13->user_options_extra;
  const user_options_t *VAR_16 = VAR_13->user_options;
  mask_ctx_t *VAR_17 = VAR_13->mask_ctx;

  VAR_17->enabled = 0;

  if (VAR_16->example_hashes == 1) return 0;
  if (VAR_16->left == 1) return 0;
  if (VAR_16->backend_info == 1) return 0;
  if (VAR_16->show == 1) return 0;
  if (VAR_16->usage == 1) return 0;
  if (VAR_16->version == 1) return 0;

  if (VAR_16->attack_mode == VAR_4) return 0;
  if (VAR_16->attack_mode == VAR_1) return 0;

  VAR_17->enabled = 1;

  VAR_17->mp_sys = (cs_t *) FUNC_7 (8, sizeof (cs_t));
  VAR_17->mp_usr = (cs_t *) FUNC_7 (4, sizeof (cs_t));

  VAR_17->css_buf = (cs_t *) FUNC_7 (256, sizeof (cs_t));
  VAR_17->css_cnt = 0;

  VAR_17->root_table_buf = (hcstat_table_t *) FUNC_7 (VAR_11, sizeof (hcstat_table_t));
  VAR_17->markov_table_buf = (hcstat_table_t *) FUNC_7 (VAR_9, sizeof (hcstat_table_t));

  if (FUNC_14 (VAR_13) == -1) return -1;

  VAR_17->root_css_buf = (cs_t *) FUNC_7 (VAR_10, sizeof (cs_t));
  VAR_17->markov_css_buf = (cs_t *) FUNC_7 (VAR_10 * VAR_5, sizeof (cs_t));

  VAR_17->mask_from_file = 0;

  VAR_17->masks = ((void*)0);
  VAR_17->masks_pos = 0;
  VAR_17->masks_cnt = 0;

  VAR_17->mfs = (mf_t *) FUNC_7 (VAR_8, sizeof (mf_t));

  FUNC_12 (VAR_17->mp_sys);

  if (VAR_16->custom_charset_1) { if (FUNC_13 (VAR_13, VAR_17->mp_sys, VAR_17->mp_usr, VAR_16->custom_charset_1, 0) == -1) return -1; }
  if (VAR_16->custom_charset_2) { if (FUNC_13 (VAR_13, VAR_17->mp_sys, VAR_17->mp_usr, VAR_16->custom_charset_2, 1) == -1) return -1; }
  if (VAR_16->custom_charset_3) { if (FUNC_13 (VAR_13, VAR_17->mp_sys, VAR_17->mp_usr, VAR_16->custom_charset_3, 2) == -1) return -1; }
  if (VAR_16->custom_charset_4) { if (FUNC_13 (VAR_13, VAR_17->mp_sys, VAR_17->mp_usr, VAR_16->custom_charset_4, 3) == -1) return -1; }

  if (VAR_16->attack_mode == VAR_0)
  {
    if (VAR_16->benchmark == 0)
    {
      if (VAR_15->hc_workc)
      {
        char *VAR_18 = VAR_15->hc_workv[0];

        if (FUNC_5 (VAR_18) == 0)
        {
          if (FUNC_10 (VAR_13, VAR_18, ((void*)0)) == -1) return -1;
        }
        else
        {
          VAR_17->mask_from_file = 1;

          for (int VAR_19 = 0; VAR_19 < VAR_15->hc_workc; VAR_19++)
          {
            VAR_18 = VAR_15->hc_workv[VAR_19];

            if (FUNC_6 (VAR_18) == 1)
            {
              HCFILE VAR_20;

              if (FUNC_4 (&VAR_20, VAR_18, "r") == 0)
              {
                FUNC_0 (VAR_13, "%s: %s", VAR_18, FUNC_15 (VAR_12));

                return -1;
              }

              char *VAR_21 = (char *) FUNC_9 (VAR_7);

              while (!FUNC_3 (&VAR_20))
              {
                const size_t VAR_22 = FUNC_1 (&VAR_20, VAR_21, VAR_7);

                if (VAR_22 == 0) continue;

                if (VAR_21[0] == '#') continue;

                char *VAR_23 = FUNC_11 (VAR_21, VAR_22);

                char *VAR_24 = ((void*)0);

                if (VAR_21 != VAR_23)
                {


                  VAR_24 = VAR_21;

                  VAR_23[-1] = 0;
                }

                if (FUNC_10 (VAR_13, VAR_23, VAR_24) == -1)
                {
                  FUNC_2 (&VAR_20);

                  return -1;
                }
              }

              FUNC_8 (VAR_21);

              FUNC_2 (&VAR_20);
            }
            else
            {
              FUNC_0 (VAR_13, "%s: unsupported file type.", VAR_18);

              return -1;
            }
          }
        }
      }
      else
      {
        const char *VAR_25 = VAR_6;

        if (FUNC_10 (VAR_13, VAR_25, ((void*)0)) == -1) return -1;
      }
    }
    else
    {
      const char *VAR_26 = VAR_14->benchmark_mask;

      if (FUNC_10 (VAR_13, VAR_26, ((void*)0)) == -1) return -1;
    }
  }
  else if (VAR_16->attack_mode == VAR_2)
  {


    char *VAR_27 = VAR_15->hc_workv[VAR_15->hc_workc - 1];



    if (FUNC_5 (VAR_27) == 0)
    {
      if (FUNC_10 (VAR_13, VAR_27, ((void*)0)) == -1) return -1;
    }
    else
    {
      if (FUNC_6 (VAR_27) == 1)
      {
        VAR_17->mask_from_file = 1;

        HCFILE VAR_28;

        if (FUNC_4 (&VAR_28, VAR_27, "r") == 0)
        {
          FUNC_0 (VAR_13, "%s: %s", VAR_27, FUNC_15 (VAR_12));

          return -1;
        }

        char *VAR_29 = (char *) FUNC_9 (VAR_7);

        while (!FUNC_3 (&VAR_28))
        {
          const size_t VAR_30 = FUNC_1 (&VAR_28, VAR_29, VAR_7);

          if (VAR_30 == 0) continue;

          if (VAR_29[0] == '#') continue;

          char *VAR_31 = FUNC_11 (VAR_29, VAR_30);

          char *VAR_32 = ((void*)0);

          if (VAR_29 != VAR_31)
          {


            VAR_32 = VAR_29;

            VAR_31[-1] = 0;
          }

          if (FUNC_10 (VAR_13, VAR_31, VAR_32) == -1)
          {
            FUNC_2 (&VAR_28);

            return -1;
          }
        }

        FUNC_8 (VAR_29);

        FUNC_2 (&VAR_28);
      }
      else
      {
        FUNC_0 (VAR_13, "%s: unsupported file type.", VAR_27);

        return -1;
      }
    }
  }
  else if (VAR_16->attack_mode == VAR_3)
  {


    char *VAR_33 = VAR_15->hc_workv[0];



    if (FUNC_5 (VAR_33) == 0)
    {
      if (FUNC_10 (VAR_13, VAR_33, ((void*)0)) == -1) return -1;
    }
    else
    {
      if (FUNC_6 (VAR_33) == 1)
      {
        VAR_17->mask_from_file = 1;

        HCFILE VAR_34;

        if (FUNC_4 (&VAR_34, VAR_33, "r") == 0)
        {
          FUNC_0 (VAR_13, "%s: %s", VAR_33, FUNC_15 (VAR_12));

          return -1;
        }

        char *VAR_35 = (char *) FUNC_9 (VAR_7);

        while (!FUNC_3 (&VAR_34))
        {
          const size_t VAR_36 = FUNC_1 (&VAR_34, VAR_35, VAR_7);

          if (VAR_36 == 0) continue;

          if (VAR_35[0] == '#') continue;

          char *VAR_37 = FUNC_11 (VAR_35, VAR_36);

          char *VAR_38 = ((void*)0);

          if (VAR_35 != VAR_37)
          {


            VAR_38 = VAR_35;

            VAR_37[-1] = 0;
          }

          if (FUNC_10 (VAR_13, VAR_37, VAR_38) == -1)
          {
            FUNC_2 (&VAR_34);

            return -1;
          }
        }

        FUNC_8 (VAR_35);

        FUNC_2 (&VAR_34);
      }
      else
      {
        FUNC_0 (VAR_13, "%s: unsupported file type.", VAR_33);

        return -1;
      }
    }
  }

  if (VAR_17->masks_cnt == 0)
  {
    FUNC_0 (VAR_13, "Invalid mask.");

    return -1;
  }

  VAR_17->mask = VAR_17->masks[0];

  return 0;
}
