
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int quiet; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_14__ {scalar_t__ devices_status; int shutdown_outer; int checkpoint_shutdown; int mux_display; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_15__ {TYPE_1__* user_options; TYPE_2__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14 (hashcat_ctx_t *VAR_2)
{
  status_ctx_t *VAR_3 = VAR_2->status_ctx;
  user_options_t *VAR_4 = VAR_2->user_options;


  while (VAR_3->devices_status == VAR_0) FUNC_13 (100000);

  const bool VAR_5 = VAR_4->quiet;

  FUNC_10 ();

  while (VAR_3->shutdown_outer == 0)
  {
    int VAR_6 = FUNC_12 ();

    if (VAR_6 == -1) break;

    if (VAR_6 == 0) continue;






    FUNC_4 (VAR_3->mux_display);

    FUNC_3 (VAR_2, ((void*)0));

    switch (VAR_6)
    {
      case 's':
      case '\r':
      case '\n':

        FUNC_3 (VAR_2, ((void*)0));

        FUNC_8 (VAR_2);

        FUNC_3 (VAR_2, ((void*)0));

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;

      case 'b':

        FUNC_3 (VAR_2, ((void*)0));

        FUNC_2 (VAR_2);

        FUNC_3 (VAR_2, "Next dictionary / mask in queue selected. Bypassing current one.");

        FUNC_3 (VAR_2, ((void*)0));

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;

      case 'p':

        if (VAR_3->devices_status != VAR_1)
        {
          FUNC_3 (VAR_2, ((void*)0));

          FUNC_1 (VAR_2);

          if (VAR_3->devices_status == VAR_1)
          {
            FUNC_3 (VAR_2, "Paused");
          }

          FUNC_3 (VAR_2, ((void*)0));
        }

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;

      case 'r':

        if (VAR_3->devices_status == VAR_1)
        {
          FUNC_3 (VAR_2, ((void*)0));

          FUNC_0 (VAR_2);

          if (VAR_3->devices_status != VAR_1)
          {
            FUNC_3 (VAR_2, "Resumed");
          }

          FUNC_3 (VAR_2, ((void*)0));
        }

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;

      case 'c':

        FUNC_3 (VAR_2, ((void*)0));

        FUNC_9 (VAR_2);

        if (VAR_3->checkpoint_shutdown == 1)
        {
          FUNC_3 (VAR_2, "Checkpoint enabled. Will quit at next restore-point update.");
        }
        else
        {
          FUNC_3 (VAR_2, "Checkpoint disabled. Restore-point updates will no longer be monitored.");
        }

        FUNC_3 (VAR_2, ((void*)0));

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;

      case 'q':

        FUNC_3 (VAR_2, ((void*)0));

        FUNC_6 (VAR_2);

        break;

      default:

        if (VAR_5 == 0) FUNC_7 (VAR_2);

        break;
    }






    FUNC_5 (VAR_3->mux_display);
  }

  FUNC_11 ();
}
