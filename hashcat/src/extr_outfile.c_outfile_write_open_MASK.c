
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * filename; int fp; } ;
typedef TYPE_1__ outfile_ctx_t ;
struct TYPE_6__ {TYPE_1__* outfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5 (hashcat_ctx_t *VAR_1)
{
  outfile_ctx_t *VAR_2 = VAR_1->outfile_ctx;

  if (VAR_2->filename == ((void*)0)) return 0;

  if (FUNC_2 (&VAR_2->fp, VAR_2->filename, "ab") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_2->filename, FUNC_4 (VAR_0));

    return -1;
  }

  if (FUNC_3 (&VAR_2->fp) == -1)
  {
    FUNC_1 (&VAR_2->fp);

    FUNC_0 (VAR_1, "%s: %s", VAR_2->filename, FUNC_4 (VAR_0));

    return -1;
  }

  return 0;
}
