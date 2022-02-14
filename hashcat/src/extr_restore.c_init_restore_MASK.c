
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cwd; int argv; int argc; int version; } ;
typedef TYPE_1__ restore_data_t ;
struct TYPE_7__ {int argv; int argc; TYPE_1__* rd; } ;
typedef TYPE_2__ restore_ctx_t ;
struct TYPE_8__ {TYPE_2__* restore_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int * FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (hashcat_ctx_t *VAR_2)
{
  restore_ctx_t *VAR_3 = VAR_2->restore_ctx;

  restore_data_t *VAR_4 = (restore_data_t *) FUNC_2 (sizeof (restore_data_t));

  VAR_3->rd = VAR_4;

  VAR_4->version = VAR_0;

  VAR_4->argc = VAR_3->argc;
  VAR_4->argv = VAR_3->argv;

  if (FUNC_1 (VAR_4->cwd, 255) == ((void*)0))
  {
    FUNC_0 (VAR_2, "getcwd(): %s", FUNC_3 (VAR_1));

    return -1;
  }

  return 0;
}
