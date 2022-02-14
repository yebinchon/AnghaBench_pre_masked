
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int example_hashes; int left; int backend_info; int show; int usage; int version; scalar_t__ attack_mode; int slow_candidates; char* rule_buf_l; char* rule_buf_r; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_11__ {char** hc_workv; int rule_len_r; int rule_len_l; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_12__ {int bfs_cnt; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_13__ {int opti_type; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_14__ {TYPE_3__* mask_ctx; TYPE_1__* user_options; TYPE_2__* user_options_extra; TYPE_4__* hashconfig; TYPE_6__* combinator_ctx; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_15__ {int enabled; int combs_cnt; char* dict1; char* dict2; void* combs_mode; } ;
typedef TYPE_6__ combinator_ctx_t ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int *,char*,scalar_t__*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*,char*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

int FUNC_6 (hashcat_ctx_t *VAR_7)
{
  combinator_ctx_t *VAR_8 = VAR_7->combinator_ctx;
  hashconfig_t *VAR_9 = VAR_7->hashconfig;
  user_options_extra_t *VAR_10 = VAR_7->user_options_extra;
  user_options_t *VAR_11 = VAR_7->user_options;

  VAR_8->enabled = 0;

  if (VAR_11->example_hashes == 1) return 0;
  if (VAR_11->left == 1) return 0;
  if (VAR_11->backend_info == 1) return 0;
  if (VAR_11->show == 1) return 0;
  if (VAR_11->usage == 1) return 0;
  if (VAR_11->version == 1) return 0;

  if ((VAR_11->attack_mode != VAR_0)
   && (VAR_11->attack_mode != VAR_1)
   && (VAR_11->attack_mode != VAR_2)) return 0;

  VAR_8->enabled = 1;

  if (VAR_11->slow_candidates == 1)
  {


    if (VAR_11->attack_mode == VAR_0)
    {


      char *VAR_12 = VAR_10->hc_workv[0];
      char *VAR_13 = VAR_10->hc_workv[1];




      if (FUNC_4 (VAR_12) == 0)
      {
        FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_12);

        return -1;
      }

      if (FUNC_4 (VAR_13) == 0)
      {
        FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_13);

        return -1;
      }

      HCFILE VAR_14;
      HCFILE VAR_15;

      if (FUNC_3 (&VAR_14, VAR_12, "rb") == 0)
      {
        FUNC_1 (VAR_7, "%s: %s", VAR_12, FUNC_5 (VAR_6));

        return -1;
      }

      if (FUNC_3 (&VAR_15, VAR_13, "rb") == 0)
      {
        FUNC_1 (VAR_7, "%s: %s", VAR_13, FUNC_5 (VAR_6));

        FUNC_2 (&VAR_14);

        return -1;
      }

      VAR_8->combs_cnt = 1;

      u64 VAR_16 = 0;

      const int VAR_17 = FUNC_0 (VAR_7, &VAR_14, VAR_12, &VAR_16);

      if (VAR_17 == -1)
      {
        FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_12);

        FUNC_2 (&VAR_14);
        FUNC_2 (&VAR_15);

        return -1;
      }

      if (VAR_16 == 0)
      {
        FUNC_1 (VAR_7, "%s: empty file.", VAR_12);

        FUNC_2 (&VAR_14);
        FUNC_2 (&VAR_15);

        return -1;
      }

      VAR_8->combs_cnt = 1;

      u64 VAR_18 = 0;

      const int VAR_19 = FUNC_0 (VAR_7, &VAR_15, VAR_13, &VAR_18);

      FUNC_2 (&VAR_14);
      FUNC_2 (&VAR_15);

      if (VAR_19 == -1)
      {
        FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_13);

        return -1;
      }

      if (VAR_18 == 0)
      {
        FUNC_1 (VAR_7, "%s: empty file.", VAR_13);

        return -1;
      }

      VAR_8->dict1 = VAR_12;
      VAR_8->dict2 = VAR_13;

      VAR_8->combs_mode = VAR_3;
      VAR_8->combs_cnt = VAR_18;
    }
  }
  else
  {
    if (VAR_9->opti_type & VAR_5)
    {
      if (VAR_11->attack_mode == VAR_0)
      {


        char *VAR_20 = VAR_10->hc_workv[0];
        char *VAR_21 = VAR_10->hc_workv[1];




        if (FUNC_4 (VAR_20) == 0)
        {
          FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_20);

          return -1;
        }

        if (FUNC_4 (VAR_21) == 0)
        {
          FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_21);

          return -1;
        }

        HCFILE VAR_22;
        HCFILE VAR_23;

        if (FUNC_3 (&VAR_22, VAR_20, "rb") == 0)
        {
          FUNC_1 (VAR_7, "%s: %s", VAR_20, FUNC_5 (VAR_6));

          return -1;
        }

        if (FUNC_3 (&VAR_23, VAR_21, "rb") == 0)
        {
          FUNC_1 (VAR_7, "%s: %s", VAR_21, FUNC_5 (VAR_6));

          FUNC_2 (&VAR_22);

          return -1;
        }

        VAR_8->combs_cnt = 1;

        u64 VAR_24 = 0;

        const int VAR_25 = FUNC_0 (VAR_7, &VAR_22, VAR_20, &VAR_24);

        if (VAR_25 == -1)
        {
          FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_20);

          FUNC_2 (&VAR_22);
          FUNC_2 (&VAR_23);

          return -1;
        }

        if (VAR_24 == 0)
        {
          FUNC_1 (VAR_7, "%s: empty file.", VAR_20);

          FUNC_2 (&VAR_22);
          FUNC_2 (&VAR_23);

          return -1;
        }

        VAR_8->combs_cnt = 1;

        u64 VAR_26 = 0;

        const int VAR_27 = FUNC_0 (VAR_7, &VAR_23, VAR_21, &VAR_26);

        FUNC_2 (&VAR_22);
        FUNC_2 (&VAR_23);

        if (VAR_27 == -1)
        {
          FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_21);

          return -1;
        }

        if (VAR_26 == 0)
        {
          FUNC_1 (VAR_7, "%s: empty file.", VAR_21);

          return -1;
        }

        VAR_8->dict1 = VAR_20;
        VAR_8->dict2 = VAR_21;

        if (VAR_24 >= VAR_26)
        {
          VAR_8->combs_mode = VAR_3;
          VAR_8->combs_cnt = VAR_26;
        }
        else
        {
          VAR_8->combs_mode = VAR_4;
          VAR_8->combs_cnt = VAR_24;



          const char *VAR_28 = VAR_11->rule_buf_l;

          VAR_11->rule_buf_l = VAR_11->rule_buf_r;
          VAR_11->rule_buf_r = VAR_28;

          u32 VAR_29 = VAR_10->rule_len_l;

          VAR_10->rule_len_l = VAR_10->rule_len_r;
          VAR_10->rule_len_r = VAR_29;
        }
      }
      else if (VAR_11->attack_mode == VAR_1)
      {
        VAR_8->combs_mode = VAR_3;
      }
      else if (VAR_11->attack_mode == VAR_2)
      {
        VAR_8->combs_mode = VAR_4;
      }
    }
    else
    {


      if (VAR_11->attack_mode == VAR_0)
      {


        char *VAR_30 = VAR_10->hc_workv[0];
        char *VAR_31 = VAR_10->hc_workv[1];




        if (FUNC_4 (VAR_30) == 0)
        {
          FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_30);

          return -1;
        }

        if (FUNC_4 (VAR_31) == 0)
        {
          FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_31);

          return -1;
        }

        HCFILE VAR_32;
        HCFILE VAR_33;

        if (FUNC_3 (&VAR_32, VAR_30, "rb") == 0)
        {
          FUNC_1 (VAR_7, "%s: %s", VAR_30, FUNC_5 (VAR_6));

          return -1;
        }

        if (FUNC_3 (&VAR_33, VAR_31, "rb") == 0)
        {
          FUNC_1 (VAR_7, "%s: %s", VAR_31, FUNC_5 (VAR_6));

          FUNC_2 (&VAR_32);

          return -1;
        }

        VAR_8->combs_cnt = 1;

        u64 VAR_34 = 0;

        const int VAR_35 = FUNC_0 (VAR_7, &VAR_32, VAR_30, &VAR_34);

        if (VAR_35 == -1)
        {
          FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_30);

          FUNC_2 (&VAR_32);
          FUNC_2 (&VAR_33);

          return -1;
        }

        if (VAR_34 == 0)
        {
          FUNC_1 (VAR_7, "%s: empty file.", VAR_30);

          FUNC_2 (&VAR_32);
          FUNC_2 (&VAR_33);

          return -1;
        }

        VAR_8->combs_cnt = 1;

        u64 VAR_36 = 0;

        const int VAR_37 = FUNC_0 (VAR_7, &VAR_33, VAR_31, &VAR_36);

        FUNC_2 (&VAR_32);
        FUNC_2 (&VAR_33);

        if (VAR_37 == -1)
        {
          FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_31);

          return -1;
        }

        if (VAR_36 == 0)
        {
          FUNC_1 (VAR_7, "%s: empty file.", VAR_31);

          return -1;
        }

        VAR_8->dict1 = VAR_30;
        VAR_8->dict2 = VAR_31;

        VAR_8->combs_mode = VAR_3;
        VAR_8->combs_cnt = VAR_36;
      }
      else if (VAR_11->attack_mode == VAR_1)
      {
        VAR_8->combs_mode = VAR_3;
      }
      else if (VAR_11->attack_mode == VAR_2)
      {
        mask_ctx_t *VAR_38 = VAR_7->mask_ctx;

        char *VAR_39 = VAR_10->hc_workv[1];



        if (FUNC_4 (VAR_39) == 0)
        {
          FUNC_1 (VAR_7, "%s: Not a regular file.", VAR_39);

          return -1;
        }

        HCFILE VAR_40;

        if (FUNC_3 (&VAR_40, VAR_39, "rb") == 0)
        {
          FUNC_1 (VAR_7, "%s: %s", VAR_39, FUNC_5 (VAR_6));

          return -1;
        }

        VAR_38->bfs_cnt = 1;

        u64 VAR_41 = 0;

        const int VAR_42 = FUNC_0 (VAR_7, &VAR_40, VAR_39, &VAR_41);

        FUNC_2 (&VAR_40);

        if (VAR_42 == -1)
        {
          FUNC_1 (VAR_7, "Integer overflow detected in keyspace of wordlist: %s", VAR_39);

          return -1;
        }

        VAR_8->combs_cnt = VAR_41;
        VAR_8->combs_mode = VAR_3;
      }
    }
  }

  return 0;
}
