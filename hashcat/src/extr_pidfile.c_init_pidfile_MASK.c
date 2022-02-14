
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pid; } ;
typedef TYPE_1__ pidfile_data_t ;
struct TYPE_7__ {TYPE_1__* pd; } ;
typedef TYPE_2__ pidfile_ctx_t ;
struct TYPE_8__ {TYPE_2__* pidfile_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4 (hashcat_ctx_t *VAR_0)
{
  pidfile_ctx_t *VAR_1 = VAR_0->pidfile_ctx;

  pidfile_data_t *VAR_2 = (pidfile_data_t *) FUNC_3 (sizeof (pidfile_data_t));

  VAR_1->pd = VAR_2;

  const int VAR_3 = FUNC_1 (VAR_0);

  if (VAR_3 == -1) return -1;




  VAR_2->pid = FUNC_2 ();


  return 0;
}
