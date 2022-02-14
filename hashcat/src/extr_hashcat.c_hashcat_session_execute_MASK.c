
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int benchmark; int quiet; int hash_mode_chgd; int hash_mode; int speed_only; } ;
typedef TYPE_1__ user_options_t ;
typedef int time_t ;
struct TYPE_14__ {int run_main_level1; scalar_t__ devices_status; } ;
typedef TYPE_2__ status_ctx_t ;
typedef int logfile_ctx_t ;
struct TYPE_15__ {TYPE_1__* user_options; TYPE_2__* status_ctx; int * logfile_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

int FUNC_12 (hashcat_ctx_t *VAR_9)
{
  logfile_ctx_t *VAR_10 = VAR_9->logfile_ctx;
  status_ctx_t *VAR_11 = VAR_9->status_ctx;
  user_options_t *VAR_12 = VAR_9->user_options;



  const time_t VAR_13 = FUNC_9 (((void*)0));

  FUNC_4 (VAR_9);

  FUNC_5 ("START");



  FUNC_11 (VAR_9);



  FUNC_2 (VAR_9);





  FUNC_0 (VAR_1);

  int VAR_14 = -1;

  if (VAR_12->benchmark == 1)
  {
    VAR_12->quiet = 1;

    if (VAR_12->hash_mode_chgd == 1)
    {
      VAR_14 = FUNC_8 (VAR_9);

      if (VAR_14 == -1) FUNC_7 (VAR_9);
    }
    else
    {
      int VAR_15 = 0;

      while ((VAR_15 = FUNC_1 (VAR_9)) != -1)
      {
        VAR_12->hash_mode = VAR_15;

        VAR_14 = FUNC_8 (VAR_9);

        if (VAR_14 == -1) FUNC_7 (VAR_9);

        if (VAR_11->run_main_level1 == 0) break;
      }
    }

    VAR_12->quiet = 0;
  }
  else
  {
    if (VAR_12->speed_only == 1) VAR_12->quiet = 1;

    VAR_14 = FUNC_8 (VAR_9);

    if (VAR_14 == -1) FUNC_7 (VAR_9);

    if (VAR_12->speed_only == 1) VAR_12->quiet = 0;
  }

  FUNC_0 (VAR_0);



  FUNC_10 (VAR_9);



  FUNC_3 (VAR_9);



  const time_t VAR_16 = FUNC_9 (((void*)0));

  FUNC_6 (VAR_13);
  FUNC_6 (VAR_16);

  FUNC_5 ("STOP");



  if (VAR_14 == 0)
  {
    if (VAR_11->devices_status == VAR_4) VAR_14 = 4;
    if (VAR_11->devices_status == VAR_3) VAR_14 = 3;
    if (VAR_11->devices_status == VAR_2) VAR_14 = 2;
    if (VAR_11->devices_status == VAR_8) VAR_14 = 2;
    if (VAR_11->devices_status == VAR_7) VAR_14 = 1;
    if (VAR_11->devices_status == VAR_5) VAR_14 = 0;
    if (VAR_11->devices_status == VAR_6) VAR_14 = -1;
  }



  return VAR_14;
}
