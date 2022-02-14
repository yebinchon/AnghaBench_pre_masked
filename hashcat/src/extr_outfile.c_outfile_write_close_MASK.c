
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * pfp; } ;
struct TYPE_5__ {TYPE_4__ fp; } ;
typedef TYPE_1__ outfile_ctx_t ;
struct TYPE_6__ {TYPE_1__* outfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (TYPE_4__*) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  outfile_ctx_t *VAR_1 = VAR_0->outfile_ctx;

  if (VAR_1->fp.pfp == ((void*)0)) return;

  FUNC_0 (&VAR_1->fp);
}
