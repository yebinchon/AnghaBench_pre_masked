
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pidfile_data_t ;
struct TYPE_5__ {char* filename; int * pd; } ;
typedef TYPE_1__ pidfile_ctx_t ;
struct TYPE_6__ {TYPE_1__* pidfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (hashcat_ctx_t *VAR_1)
{
  const pidfile_ctx_t *VAR_2 = VAR_1->pidfile_ctx;

  pidfile_data_t *VAR_3 = VAR_2->pd;

  char *VAR_4 = VAR_2->filename;

  HCFILE VAR_5;

  if (FUNC_3 (&VAR_5, VAR_4, "wb") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_4, FUNC_5 (VAR_0));

    return -1;
  }

  FUNC_4 (VAR_3, sizeof (pidfile_data_t), 1, &VAR_5);

  FUNC_2 (&VAR_5);

  FUNC_1 (&VAR_5);

  return 0;
}
