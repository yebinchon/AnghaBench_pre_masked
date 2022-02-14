
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enabled; int filename; int fp; } ;
typedef TYPE_1__ potfile_ctx_t ;
struct TYPE_6__ {TYPE_1__* potfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ) ;

int FUNC_3 (hashcat_ctx_t *VAR_1)
{
  potfile_ctx_t *VAR_2 = VAR_1->potfile_ctx;

  if (VAR_2->enabled == 0) return 0;

  if (FUNC_1 (&VAR_2->fp, VAR_2->filename, "rb") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_2->filename, FUNC_2 (VAR_0));

    return -1;
  }

  return 0;
}
