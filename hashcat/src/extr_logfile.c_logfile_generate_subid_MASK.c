
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int enabled; int subid; } ;
typedef TYPE_1__ logfile_ctx_t ;
struct TYPE_5__ {TYPE_1__* logfile_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int ,int,char*,int,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  logfile_ctx_t *VAR_1 = VAR_0->logfile_ctx;

  if (VAR_1->enabled == 0) return;

  struct timeval VAR_2;

  FUNC_0 (&VAR_2, ((void*)0));

  FUNC_1 (VAR_1->subid, 40, "SUB.%08x.%08x", (u32) VAR_2.tv_sec, (u32) VAR_2.tv_usec);
}
