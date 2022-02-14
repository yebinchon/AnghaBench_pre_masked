
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int quiet; int keyspace; int stdout_flag; int show; int left; int benchmark; int machine_readable; int workload_profile_chgd; int restore; int speed_only; int progress_only; int force; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_8__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (TYPE_2__*,char*) ;

void FUNC_3 (hashcat_ctx_t *VAR_1, const char *VAR_2)
{
  const user_options_t *VAR_3 = VAR_1->user_options;

  if (VAR_3->quiet == 1) return;
  if (VAR_3->keyspace == 1) return;
  if (VAR_3->stdout_flag == 1) return;
  if (VAR_3->show == 1) return;
  if (VAR_3->left == 1) return;

  if (VAR_3->benchmark == 1)
  {
    if (VAR_3->machine_readable == 0)
    {
      FUNC_1 (VAR_1, "%s (%s) starting in benchmark mode...", VAR_0, VAR_2);

      FUNC_1 (VAR_1, ((void*)0));

      if (VAR_3->workload_profile_chgd == 0)
      {
        FUNC_0 (VAR_1, "Benchmarking uses hand-optimized kernel code by default.");
        FUNC_0 (VAR_1, "You can use it in your cracking session by setting the -O option.");
        FUNC_0 (VAR_1, "Note: Using optimized kernel code limits the maximum supported password length.");
        FUNC_0 (VAR_1, "To disable the optimized kernel code in benchmark mode, use the -w option.");
        FUNC_0 (VAR_1, ((void*)0));
      }
    }
    else
    {
      FUNC_1 (VAR_1, "# version: %s", VAR_2);
    }
  }
  else if (VAR_3->restore == 1)
  {
    FUNC_1 (VAR_1, "%s (%s) starting in restore mode...", VAR_0, VAR_2);
    FUNC_1 (VAR_1, ((void*)0));
  }
  else if (VAR_3->speed_only == 1)
  {
    FUNC_1 (VAR_1, "%s (%s) starting in speed-only mode...", VAR_0, VAR_2);
    FUNC_1 (VAR_1, ((void*)0));
  }
  else if (VAR_3->progress_only == 1)
  {
    FUNC_1 (VAR_1, "%s (%s) starting in progress-only mode...", VAR_0, VAR_2);
    FUNC_1 (VAR_1, ((void*)0));
  }
  else
  {
    FUNC_1 (VAR_1, "%s (%s) starting...", VAR_0, VAR_2);
    FUNC_1 (VAR_1, ((void*)0));
  }

  if (VAR_3->force == 1)
  {
    FUNC_2 (VAR_1, "You have enabled --force to bypass dangerous warnings and errors!");
    FUNC_2 (VAR_1, "This can hide serious problems and should only be done when debugging.");
    FUNC_2 (VAR_1, "Do not report hashcat issues encountered when using --force.");
  }
}
