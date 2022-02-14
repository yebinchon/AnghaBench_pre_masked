
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pidfile_written; int pd; int filename; } ;
typedef TYPE_1__ pidfile_ctx_t ;
struct TYPE_6__ {TYPE_1__* pidfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3 (hashcat_ctx_t *VAR_0)
{
  pidfile_ctx_t *VAR_1 = VAR_0->pidfile_ctx;

  if (VAR_1->pidfile_written == 1)
  {
    FUNC_2 (VAR_1->filename);
  }

  FUNC_0 (VAR_1->filename);

  FUNC_0 (VAR_1->pd);

  FUNC_1 (VAR_1, 0, sizeof (pidfile_ctx_t));
}
