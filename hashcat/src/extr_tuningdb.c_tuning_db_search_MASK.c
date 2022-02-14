
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int entry_cnt; int entry_buf; int alias_cnt; int alias_buf; } ;
typedef TYPE_1__ tuning_db_t ;
struct TYPE_9__ {char* device_name; char* alias_name; int attack_mode; int hash_mode; } ;
typedef TYPE_2__ tuning_db_entry_t ;
typedef TYPE_2__ tuning_db_alias_t ;
struct TYPE_10__ {TYPE_1__* tuning_db; } ;
typedef TYPE_4__ hashcat_ctx_t ;
typedef int cl_device_type ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (char*) ;

tuning_db_entry_t *FUNC_4 (hashcat_ctx_t *VAR_5, const char *VAR_6, const cl_device_type VAR_7, int VAR_8, const int VAR_9)
{
  tuning_db_t *VAR_10 = VAR_5->tuning_db;

  static tuning_db_entry_t VAR_11;



  char *VAR_12 = FUNC_2 (VAR_6);

  const size_t VAR_13 = FUNC_3 (VAR_12);

  size_t VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {
    if (VAR_12[VAR_14] == ' ') VAR_12[VAR_14] = '_';
  }



  tuning_db_alias_t VAR_15;

  VAR_15.device_name = VAR_12;

  char *VAR_16 = ((void*)0);

  for (VAR_14 = VAR_13; VAR_14 >= 1; VAR_14--)
  {
    VAR_12[VAR_14] = 0;

    tuning_db_alias_t *VAR_17 = (tuning_db_alias_t *) FUNC_0 (&VAR_15, VAR_10->alias_buf, VAR_10->alias_cnt, sizeof (tuning_db_alias_t), VAR_3);

    if (VAR_17 == ((void*)0)) continue;

    VAR_16 = VAR_17->alias_name;

    break;
  }



  if (VAR_8 == 6) VAR_8 = 1;
  if (VAR_8 == 7) VAR_8 = 1;



  VAR_11.device_name = VAR_12;
  VAR_11.attack_mode = VAR_8;
  VAR_11.hash_mode = VAR_9;

  tuning_db_entry_t *VAR_18 = ((void*)0);



  for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  {
    VAR_11.device_name = (VAR_14 & 1) ? "*" : VAR_12;
    VAR_11.attack_mode = (VAR_14 & 2) ? -1 : VAR_8;
    VAR_11.hash_mode = (VAR_14 & 4) ? -1 : VAR_9;

    VAR_18 = (tuning_db_entry_t *) FUNC_0 (&VAR_11, VAR_10->entry_buf, VAR_10->entry_cnt, sizeof (tuning_db_entry_t), VAR_4);

    if (VAR_18 != ((void*)0)) break;



    if ((VAR_14 & 1) == 0)
    {


      if (VAR_16 != ((void*)0))
      {
        VAR_11.device_name = VAR_16;

        VAR_18 = (tuning_db_entry_t *) FUNC_0 (&VAR_11, VAR_10->entry_buf, VAR_10->entry_cnt, sizeof (tuning_db_entry_t), VAR_4);

        if (VAR_18 != ((void*)0)) break;
      }



      if (VAR_7 & VAR_1)
      {
        VAR_11.device_name = "DEVICE_TYPE_CPU";
      }
      else if (VAR_7 & VAR_2)
      {
        VAR_11.device_name = "DEVICE_TYPE_GPU";
      }
      else if (VAR_7 & VAR_0)
      {
        VAR_11.device_name = "DEVICE_TYPE_ACCELERATOR";
      }

      VAR_18 = (tuning_db_entry_t *) FUNC_0 (&VAR_11, VAR_10->entry_buf, VAR_10->entry_cnt, sizeof (tuning_db_entry_t), VAR_4);

      if (VAR_18 != ((void*)0)) break;
    }
  }



  FUNC_1 (VAR_12);

  return VAR_18;
}
