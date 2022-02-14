
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int example_hashes; int keyspace; int left; int backend_info; int show; int usage; int version; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_13__ {scalar_t__ attack_kern; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_14__ {int enabled; size_t alias_cnt; size_t entry_cnt; TYPE_4__* entry_buf; TYPE_4__* alias_buf; } ;
typedef TYPE_3__ tuning_db_t ;
struct TYPE_15__ {int attack_mode; int hash_mode; int vector_width; int kernel_accel; int kernel_loops; void* device_name; void* alias_name; } ;
typedef TYPE_4__ tuning_db_entry_t ;
typedef TYPE_4__ tuning_db_alias_t ;
struct TYPE_16__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* tuning_db; TYPE_7__* folder_config; } ;
typedef TYPE_6__ hashcat_ctx_t ;
struct TYPE_17__ {int shared_dir; } ;
typedef TYPE_7__ folder_config_t ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_6__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_6__*,char*,int,...) ;
 int FUNC_3 (char**,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*,scalar_t__,int *) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (size_t const,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 void* FUNC_12 (char*) ;
 size_t FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,size_t,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int ) ;
 char* FUNC_16 (char*,char*,char**) ;
 scalar_t__ FUNC_17 (char*,int *,int) ;

int FUNC_18 (hashcat_ctx_t *VAR_11)
{
  folder_config_t *VAR_12 = VAR_11->folder_config;
  tuning_db_t *VAR_13 = VAR_11->tuning_db;
  user_options_t *VAR_14 = VAR_11->user_options;
  user_options_extra_t *VAR_15 = VAR_11->user_options_extra;

  VAR_13->enabled = 0;

  if (VAR_14->example_hashes == 1) return 0;
  if (VAR_14->keyspace == 1) return 0;
  if (VAR_14->left == 1) return 0;
  if (VAR_14->backend_info == 1) return 0;
  if (VAR_14->show == 1) return 0;
  if (VAR_14->usage == 1) return 0;
  if (VAR_14->version == 1) return 0;

  VAR_13->enabled = 1;

  char *VAR_16;

  FUNC_3 (&VAR_16, "%s/%s", VAR_12->shared_dir, VAR_7);

  HCFILE VAR_17;

  if (FUNC_7 (&VAR_17, VAR_16, "rb") == 0)
  {
    FUNC_1 (VAR_11, "%s: %s", VAR_16, FUNC_15 (VAR_8));

    return -1;
  }

  FUNC_10 (VAR_16);

  const size_t VAR_18 = FUNC_0 (&VAR_17);



  VAR_13->alias_buf = (tuning_db_alias_t *) FUNC_9 (VAR_18 + 1, sizeof (tuning_db_alias_t));
  VAR_13->alias_cnt = 0;

  VAR_13->entry_buf = (tuning_db_entry_t *) FUNC_9 (VAR_18 + 1, sizeof (tuning_db_entry_t));
  VAR_13->entry_cnt = 0;

  FUNC_8 (&VAR_17);

  int VAR_19 = 0;

  char *VAR_20 = (char *) FUNC_11 (VAR_3);

  while (!FUNC_5 (&VAR_17))
  {
    char *VAR_21 = FUNC_6 (VAR_20, VAR_3 - 1, &VAR_17);

    if (VAR_21 == ((void*)0)) break;

    VAR_19++;

    const size_t VAR_22 = FUNC_13 (VAR_21);

    if (VAR_22 == 0) continue;

    if (VAR_21[0] == '#') continue;



    char *VAR_23[7] = { ((void*)0) };

    int VAR_24 = 0;

    char *VAR_25 = ((void*)0);

    char *VAR_26 = FUNC_16 (VAR_21, "\t ", &VAR_25);

    VAR_23[VAR_24] = VAR_26;

    VAR_24++;

    while ((VAR_26 = FUNC_16 ((char *) ((void*)0), "\t ", &VAR_25)) != ((void*)0))
    {
      VAR_23[VAR_24] = VAR_26;

      VAR_24++;
    }

    if (VAR_24 == 2)
    {
      char *VAR_27 = VAR_23[0];
      char *VAR_28 = VAR_23[1];

      tuning_db_alias_t *VAR_29 = &VAR_13->alias_buf[VAR_13->alias_cnt];

      VAR_29->device_name = FUNC_12 (VAR_27);
      VAR_29->alias_name = FUNC_12 (VAR_28);

      VAR_13->alias_cnt++;
    }
    else if (VAR_24 == 6)
    {
      if ((VAR_23[1][0] != '0') &&
          (VAR_23[1][0] != '1') &&
          (VAR_23[1][0] != '3') &&
          (VAR_23[1][0] != '*'))
      {
        FUNC_2 (VAR_11, "Tuning-db: Invalid attack_mode '%c' in Line '%d'", VAR_23[1][0], VAR_19);

        continue;
      }

      if ((VAR_23[3][0] != '1') &&
          (VAR_23[3][0] != '2') &&
          (VAR_23[3][0] != '4') &&
          (VAR_23[3][0] != '8') &&
          (VAR_23[3][0] != 'N'))
      {
        FUNC_2 (VAR_11, "Tuning-db: Invalid vector_width '%c' in Line '%d'", VAR_23[3][0], VAR_19);

        continue;
      }

      char *VAR_30 = VAR_23[0];

      int VAR_31 = -1;
      int VAR_32 = -1;
      int VAR_33 = -1;
      int VAR_34 = -1;
      int VAR_35 = -1;

      if (VAR_23[1][0] != '*') VAR_31 = (int) FUNC_17 (VAR_23[1], ((void*)0), 10);
      if (VAR_23[2][0] != '*') VAR_32 = (int) FUNC_17 (VAR_23[2], ((void*)0), 10);
      if (VAR_23[3][0] != 'N') VAR_33 = (int) FUNC_17 (VAR_23[3], ((void*)0), 10);

      if (VAR_23[4][0] == 'A')
      {
        VAR_34 = 0;
      }
      else if (VAR_23[4][0] == 'M')
      {
        VAR_34 = 1024;
      }
      else
      {
        VAR_34 = (int) FUNC_17 (VAR_23[4], ((void*)0), 10);

        if ((VAR_34 < 1) || (VAR_34 > 1024))
        {
          FUNC_2 (VAR_11, "Tuning-db: Invalid kernel_accel '%d' in Line '%d'", VAR_34, VAR_19);

          continue;
        }
      }

      if (VAR_23[5][0] == 'A')
      {
        VAR_35 = 0;
      }
      else if (VAR_23[5][0] == 'M')
      {
        if (VAR_15->attack_kern == VAR_2)
        {
          VAR_35 = VAR_6;
        }
        else if (VAR_15->attack_kern == VAR_1)
        {
          VAR_35 = VAR_5;
        }
        else if (VAR_15->attack_kern == VAR_0)
        {
          VAR_35 = VAR_4;
        }
      }
      else
      {
        VAR_35 = (int) FUNC_17 (VAR_23[5], ((void*)0), 10);

        if (VAR_35 < 1)
        {
          FUNC_2 (VAR_11, "Tuning-db: Invalid kernel_loops '%d' in Line '%d'", VAR_35, VAR_19);

          continue;
        }

        if ((VAR_15->attack_kern == VAR_2) && (VAR_35 > VAR_6))
        {
          FUNC_2 (VAR_11, "Tuning-db: Invalid kernel_loops '%d' in Line '%d'", VAR_35, VAR_19);

          continue;
        }

        if ((VAR_15->attack_kern == VAR_1) && (VAR_35 > VAR_5))
        {
          FUNC_2 (VAR_11, "Tuning-db: Invalid kernel_loops '%d' in Line '%d'", VAR_35, VAR_19);

          continue;
        }

        if ((VAR_15->attack_kern == VAR_0) && (VAR_35 > VAR_4))
        {
          FUNC_2 (VAR_11, "Tuning-db: Invalid kernel_loops '%d' in Line '%d'", VAR_35, VAR_19);

          continue;
        }
      }

      tuning_db_entry_t *VAR_36 = &VAR_13->entry_buf[VAR_13->entry_cnt];

      VAR_36->device_name = FUNC_12 (VAR_30);
      VAR_36->attack_mode = VAR_31;
      VAR_36->hash_mode = VAR_32;
      VAR_36->vector_width = VAR_33;
      VAR_36->kernel_accel = VAR_34;
      VAR_36->kernel_loops = VAR_35;

      VAR_13->entry_cnt++;
    }
    else
    {
      FUNC_2 (VAR_11, "Tuning-db: Invalid number of token in Line '%d'", VAR_19);

      continue;
    }
  }

  FUNC_10 (VAR_20);

  FUNC_4 (&VAR_17);





  FUNC_14 (VAR_13->alias_buf, VAR_13->alias_cnt, sizeof (tuning_db_alias_t), VAR_9);
  FUNC_14 (VAR_13->entry_buf, VAR_13->entry_cnt, sizeof (tuning_db_entry_t), VAR_10);

  return 0;
}
