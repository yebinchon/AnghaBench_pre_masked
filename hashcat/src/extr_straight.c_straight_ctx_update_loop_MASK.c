
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ attack_mode; size_t rp_files_cnt; int * rp_files; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_13__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef size_t u32 ;
struct TYPE_14__ {size_t dicts_pos; int dict; int * dicts; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_15__ {scalar_t__ words_cnt; } ;
typedef TYPE_4__ status_ctx_t ;
struct TYPE_16__ {int mask; } ;
typedef TYPE_5__ mask_ctx_t ;
typedef int logfile_ctx_t ;
struct TYPE_17__ {size_t induction_dictionaries_pos; int * induction_dictionaries; scalar_t__ induction_dictionaries_cnt; } ;
typedef TYPE_6__ induct_ctx_t ;
struct TYPE_18__ {TYPE_1__* user_options; TYPE_2__* user_options_extra; TYPE_3__* straight_ctx; TYPE_4__* status_ctx; TYPE_5__* mask_ctx; int * logfile_ctx; TYPE_6__* induct_ctx; TYPE_8__* combinator_ctx; } ;
typedef TYPE_7__ hashcat_ctx_t ;
struct TYPE_19__ {scalar_t__ combs_mode; int dict2; int dict1; } ;
typedef TYPE_8__ combinator_ctx_t ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_7__*,int *,int ,scalar_t__*) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_7__*,char*,int ,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8 (hashcat_ctx_t *VAR_9)
{
  combinator_ctx_t *VAR_10 = VAR_9->combinator_ctx;
  induct_ctx_t *VAR_11 = VAR_9->induct_ctx;
  logfile_ctx_t *VAR_12 = VAR_9->logfile_ctx;
  mask_ctx_t *VAR_13 = VAR_9->mask_ctx;
  status_ctx_t *VAR_14 = VAR_9->status_ctx;
  straight_ctx_t *VAR_15 = VAR_9->straight_ctx;
  user_options_extra_t *VAR_16 = VAR_9->user_options_extra;
  user_options_t *VAR_17 = VAR_9->user_options;

  if (VAR_17->attack_mode == VAR_4)
  {
    if (VAR_16->wordlist_mode == VAR_7)
    {
      if (VAR_11->induction_dictionaries_cnt)
      {
        VAR_15->dict = VAR_11->induction_dictionaries[VAR_11->induction_dictionaries_pos];
      }
      else
      {
        VAR_15->dict = VAR_15->dicts[VAR_15->dicts_pos];
      }

      FUNC_5 (VAR_15->dict);

      for (u32 VAR_18 = 0; VAR_18 < VAR_17->rp_files_cnt; VAR_18++)
      {
        FUNC_6 ("rulefile", VAR_17->rp_files[VAR_18]);
      }

      HCFILE VAR_19;

      if (FUNC_3 (&VAR_19, VAR_15->dict, "rb") == 0)
      {
        FUNC_1 (VAR_9, "%s: %s", VAR_15->dict, FUNC_7 (VAR_8));

        return -1;
      }

      const int VAR_20 = FUNC_0 (VAR_9, &VAR_19, VAR_15->dict, &VAR_14->words_cnt);

      FUNC_2 (&VAR_19);

      if (VAR_20 == -1)
      {
        FUNC_1 (VAR_9, "Integer overflow detected in keyspace of wordlist: %s", VAR_15->dict);

        return -1;
      }

      if (VAR_14->words_cnt == 0)
      {
        FUNC_4 ("STOP");

        return 0;
      }
    }
  }
  else if (VAR_17->attack_mode == VAR_1)
  {
    FUNC_5 (VAR_10->dict1);
    FUNC_5 (VAR_10->dict2);

    if (VAR_10->combs_mode == VAR_5)
    {
      HCFILE VAR_21;

      if (FUNC_3 (&VAR_21, VAR_10->dict1, "rb") == 0)
      {
        FUNC_1 (VAR_9, "%s: %s", VAR_10->dict1, FUNC_7 (VAR_8));

        return -1;
      }

      const int VAR_22 = FUNC_0 (VAR_9, &VAR_21, VAR_10->dict1, &VAR_14->words_cnt);

      FUNC_2 (&VAR_21);

      if (VAR_22 == -1)
      {
        FUNC_1 (VAR_9, "Integer overflow detected in keyspace of wordlist: %s", VAR_10->dict1);

        return -1;
      }
    }
    else if (VAR_10->combs_mode == VAR_6)
    {
      HCFILE VAR_23;

      if (FUNC_3 (&VAR_23, VAR_10->dict2, "rb") == 0)
      {
        FUNC_1 (VAR_9, "%s: %s", VAR_10->dict2, FUNC_7 (VAR_8));

        return -1;
      }

      const int VAR_24 = FUNC_0 (VAR_9, &VAR_23, VAR_10->dict2, &VAR_14->words_cnt);

      FUNC_2 (&VAR_23);

      if (VAR_24 == -1)
      {
        FUNC_1 (VAR_9, "Integer overflow detected in keyspace of wordlist: %s", VAR_10->dict2);

        return -1;
      }
    }

    if (VAR_14->words_cnt == 0)
    {
      FUNC_4 ("STOP");

      return 0;
    }
  }
  else if (VAR_17->attack_mode == VAR_0)
  {
    FUNC_5 (VAR_13->mask);
  }
  else if ((VAR_17->attack_mode == VAR_2) || (VAR_17->attack_mode == VAR_3))
  {
    if (VAR_11->induction_dictionaries_cnt)
    {
      VAR_15->dict = VAR_11->induction_dictionaries[VAR_11->induction_dictionaries_pos];
    }
    else
    {
      VAR_15->dict = VAR_15->dicts[VAR_15->dicts_pos];
    }

    FUNC_5 (VAR_15->dict);
    FUNC_5 (VAR_13->mask);

    HCFILE VAR_25;

    if (FUNC_3 (&VAR_25, VAR_15->dict, "rb") == 0)
    {
      FUNC_1 (VAR_9, "%s: %s", VAR_15->dict, FUNC_7 (VAR_8));

      return -1;
    }

    const int VAR_26 = FUNC_0 (VAR_9, &VAR_25, VAR_15->dict, &VAR_14->words_cnt);

    FUNC_2 (&VAR_25);

    if (VAR_26 == -1)
    {
      FUNC_1 (VAR_9, "Integer overflow detected in keyspace of wordlist: %s", VAR_15->dict);

      return -1;
    }

    if (VAR_14->words_cnt == 0)
    {
      FUNC_4 ("STOP");

      return 0;
    }
  }

  return 0;
}
