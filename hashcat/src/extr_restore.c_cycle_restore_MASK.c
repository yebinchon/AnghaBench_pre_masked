
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enabled; char* eff_restore_file; char* new_restore_file; } ;
typedef TYPE_1__ restore_ctx_t ;
struct TYPE_7__ {TYPE_1__* restore_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char const*,char const*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6 (hashcat_ctx_t *VAR_1)
{
  restore_ctx_t *VAR_2 = VAR_1->restore_ctx;

  if (VAR_2->enabled == 0) return 0;

  const char *VAR_3 = VAR_2->eff_restore_file;
  const char *VAR_4 = VAR_2->new_restore_file;

  if (FUNC_5 (VAR_1) == -1) return -1;

  if (FUNC_1 (VAR_3) == 1)
  {
    if (FUNC_4 (VAR_3) == -1)
    {
      FUNC_0 (VAR_1, "Unlink file '%s': %s", VAR_3, FUNC_3 (VAR_0));
    }
  }

  if (FUNC_2 (VAR_4, VAR_3) == -1)
  {
    FUNC_0 (VAR_1, "Rename file '%s' to '%s': %s", VAR_4, VAR_3, FUNC_3 (VAR_0));
  }

  return 0;
}
