
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* markov_hcstat2; void* markov_classic; void* markov_disable; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef void* u32 ;
struct stat {scalar_t__ st_size; } ;
struct TYPE_10__ {TYPE_3__* markov_table_buf; TYPE_3__* root_table_buf; } ;
typedef TYPE_2__ mask_ctx_t ;
typedef int hcstat_tmp ;
struct TYPE_11__ {scalar_t__ val; void* key; } ;
typedef TYPE_3__ hcstat_table_t ;
struct TYPE_12__ {TYPE_1__* user_options; TYPE_2__* mask_ctx; TYPE_5__* folder_config; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_13__ {char* shared_dir; } ;
typedef TYPE_5__ folder_config_t ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int HCFILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,char*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,char const*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__*,int ,int) ;
 int FUNC_11 (TYPE_3__*,int,int,int ) ;
 int FUNC_12 (char*,int,char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_13 (char*,struct stat*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15 (hashcat_ctx_t *VAR_10)
{
  folder_config_t *VAR_11 = VAR_10->folder_config;
  mask_ctx_t *VAR_12 = VAR_10->mask_ctx;
  user_options_t *VAR_13 = VAR_10->user_options;

  char *VAR_14 = VAR_11->shared_dir;

  char *VAR_15 = VAR_13->markov_hcstat2;
  u32 VAR_16 = VAR_13->markov_disable;
  u32 VAR_17 = VAR_13->markov_classic;

  hcstat_table_t *VAR_18 = VAR_12->root_table_buf;
  hcstat_table_t *VAR_19 = VAR_12->markov_table_buf;





  u64 *VAR_20 = (u64 *) FUNC_6 (VAR_5, sizeof (u64));

  u64 *VAR_21 = VAR_20;

  u64 *VAR_22[VAR_4];

  for (int VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
  {
    VAR_22[VAR_23] = VAR_21;

    VAR_21 += VAR_0;
  }

  u64 *VAR_24 = (u64 *) FUNC_6 (VAR_3, sizeof (u64));

  u64 *VAR_25 = VAR_24;

  u64 *VAR_26[VAR_4][VAR_0];

  for (int VAR_27 = 0; VAR_27 < VAR_4; VAR_27++)
  {
    for (int VAR_28 = 0; VAR_28 < VAR_0; VAR_28++)
    {
      VAR_26[VAR_27][VAR_28] = VAR_25;

      VAR_25 += VAR_0;
    }
  }





  char VAR_29[256];

  if (VAR_15 == ((void*)0))
  {
    FUNC_12 (VAR_29, sizeof (VAR_29), "%s/%s", VAR_14, VAR_2);

    VAR_15 = VAR_29;
  }

  struct stat VAR_30;

  if (FUNC_13 (VAR_15, &VAR_30) == -1)
  {
    FUNC_1 (VAR_10, "%s: %s", VAR_15, FUNC_14 (VAR_8));

    return -1;
  }

  HCFILE VAR_31;

  if (FUNC_3 (&VAR_31, VAR_15, "rb") == 0)
  {
    FUNC_1 (VAR_10, "%s: %s", VAR_15, FUNC_14 (VAR_8));

    return -1;
  }

  u8 *VAR_32 = (u8 *) FUNC_8 (VAR_30.st_size);

  SizeT VAR_33 = (SizeT) FUNC_4 (VAR_32, 1, VAR_30.st_size, &VAR_31);

  if (VAR_33 != (SizeT) VAR_30.st_size)
  {
    FUNC_1 (VAR_10, "%s: Could not read data.", VAR_15);

    FUNC_2 (&VAR_31);

    FUNC_7 (VAR_32);

    return -1;
  }

  FUNC_2 (&VAR_31);

  u8 *VAR_34 = (u8 *) FUNC_8 (VAR_1);

  SizeT VAR_35 = VAR_1;

  const char VAR_36 = 0x1c;

  const SRes VAR_37 = FUNC_5 (VAR_32, &VAR_33, VAR_34, &VAR_35, &VAR_36);

  if (VAR_37 != VAR_7)
  {
    FUNC_1 (VAR_10, "%s: Could not uncompress data.", VAR_15);

    FUNC_7 (VAR_32);
    FUNC_7 (VAR_34);

    return -1;
  }

  if (VAR_35 != VAR_1)
  {
    FUNC_1 (VAR_10, "%s: Could not uncompress data.", VAR_15);

    FUNC_7 (VAR_32);
    FUNC_7 (VAR_34);

    return -1;
  }

  u64 *VAR_38 = (u64 *) VAR_34;

  u64 VAR_39 = *VAR_38++;
  u64 VAR_40 = *VAR_38++;

  FUNC_9 (VAR_20, VAR_38, sizeof (u64) * VAR_5); VAR_38 += VAR_5;
  FUNC_9 (VAR_24, VAR_38, sizeof (u64) * VAR_3);

  FUNC_7 (VAR_32);
  FUNC_7 (VAR_34);





  VAR_39 = FUNC_0 (VAR_39);
  VAR_40 = FUNC_0 (VAR_40);

  for (int VAR_41 = 0; VAR_41 < VAR_5; VAR_41++) VAR_20[VAR_41] = FUNC_0 (VAR_20[VAR_41]);
  for (int VAR_42 = 0; VAR_42 < VAR_3; VAR_42++) VAR_24[VAR_42] = FUNC_0 (VAR_24[VAR_42]);





  if (VAR_39 != VAR_6)
  {
    FUNC_1 (VAR_10, "%s: Invalid header", VAR_15);

    return -1;
  }

  if (VAR_40 != 0)
  {
    FUNC_1 (VAR_10, "%s: Invalid header", VAR_15);

    return -1;
  }





  if (VAR_16)
  {
    FUNC_10 (VAR_20, 0, VAR_5 * sizeof (u64));
    FUNC_10 (VAR_24, 0, VAR_3 * sizeof (u64));
  }

  if (VAR_17)
  {


    for (int VAR_43 = 1; VAR_43 < VAR_4; VAR_43++)
    {
      u64 *VAR_44 = VAR_22[0];
      u64 *VAR_45 = VAR_22[VAR_43];

      for (int VAR_46 = 0; VAR_46 < VAR_0; VAR_46++)
      {
        *VAR_44++ += *VAR_45++;
      }
    }

    for (int VAR_47 = 1; VAR_47 < VAR_4; VAR_47++)
    {
      u64 *VAR_48 = VAR_26[0][0];
      u64 *VAR_49 = VAR_26[VAR_47][0];

      for (int VAR_50 = 0; VAR_50 < VAR_0; VAR_50++)
      {
        for (int VAR_51 = 0; VAR_51 < VAR_0; VAR_51++)
        {
          *VAR_48++ += *VAR_49++;
        }
      }
    }



    for (int VAR_52 = 1; VAR_52 < VAR_4; VAR_52++)
    {
      FUNC_9 (VAR_22[VAR_52], VAR_22[0], VAR_0 * sizeof (u64));
    }

    for (int VAR_53 = 1; VAR_53 < VAR_4; VAR_53++)
    {
      FUNC_9 (VAR_26[VAR_53][0], VAR_26[0][0], VAR_0 * VAR_0 * sizeof (u64));
    }
  }





  hcstat_table_t *VAR_54 = VAR_18;

  hcstat_table_t *VAR_55[VAR_4];

  for (int VAR_56 = 0; VAR_56 < VAR_4; VAR_56++)
  {
    VAR_55[VAR_56] = VAR_54;

    VAR_54 += VAR_0;
  }

  hcstat_table_t *VAR_57 = VAR_19;

  hcstat_table_t *VAR_58[VAR_4][VAR_0];

  for (int VAR_59 = 0; VAR_59 < VAR_4; VAR_59++)
  {
    for (int VAR_60 = 0; VAR_60 < VAR_0; VAR_60++)
    {
      VAR_58[VAR_59][VAR_60] = VAR_57;

      VAR_57 += VAR_0;
    }
  }





  for (int VAR_61 = 0; VAR_61 < VAR_5; VAR_61++)
  {
    u32 VAR_62 = VAR_61 % VAR_0;

    VAR_18[VAR_61].key = VAR_62;
    VAR_18[VAR_61].val = VAR_20[VAR_61];
  }

  for (int VAR_63 = 0; VAR_63 < VAR_3; VAR_63++)
  {
    u32 VAR_64 = VAR_63 % VAR_0;

    VAR_19[VAR_63].key = VAR_64;
    VAR_19[VAR_63].val = VAR_24[VAR_63];
  }

  FUNC_7 (VAR_20);
  FUNC_7 (VAR_24);





  for (int VAR_65 = 0; VAR_65 < VAR_4; VAR_65++)
  {
    FUNC_11 (VAR_55[VAR_65], VAR_0, sizeof (hcstat_table_t), VAR_9);
  }

  for (int VAR_66 = 0; VAR_66 < VAR_4; VAR_66++)
  {
    for (int VAR_67 = 0; VAR_67 < VAR_0; VAR_67++)
    {
      FUNC_11 (VAR_58[VAR_66][VAR_67], VAR_0, sizeof (hcstat_table_t), VAR_9);
    }
  }

  return 0;
}
