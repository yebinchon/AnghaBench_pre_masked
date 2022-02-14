
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ time_t ;
struct TYPE_6__ {int enabled; int unused; int filename; int fp; } ;
typedef TYPE_1__ loopback_ctx_t ;
struct TYPE_7__ {int enabled; int root_directory; } ;
typedef TYPE_2__ induct_ctx_t ;
struct TYPE_8__ {TYPE_1__* loopback_ctx; TYPE_2__* induct_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char*,int ,int ,int,int const) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*) ;

int FUNC_6 (hashcat_ctx_t *VAR_2)
{
  induct_ctx_t *VAR_3 = VAR_2->induct_ctx;
  loopback_ctx_t *VAR_4 = VAR_2->loopback_ctx;

  if (VAR_4->enabled == 0) return 0;

  if (VAR_3->enabled == 0) return 0;

  time_t VAR_5;

  FUNC_5 (&VAR_5);

  const u32 VAR_6 = FUNC_1 (0, 9999);

  FUNC_2 (&VAR_4->filename, "%s/%s.%d_%u", VAR_3->root_directory, VAR_0, (int) VAR_5, VAR_6);

  if (FUNC_3 (&VAR_4->fp, VAR_4->filename, "ab") == 0)
  {
    FUNC_0 (VAR_2, "%s: %s", VAR_4->filename, FUNC_4 (VAR_1));

    return -1;
  }

  VAR_4->unused = 1;

  return 0;
}
