
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nrec; scalar_t__* rchg; } ;
typedef TYPE_1__ xdfile_t ;
struct xdlgroup {int end; int start; } ;



__attribute__((used)) static inline int FUNC_0(xdfile_t *VAR_0, struct xdlgroup *VAR_1)
{
 if (VAR_1->end == VAR_0->nrec)
  return -1;

 VAR_1->start = VAR_1->end + 1;
 for (VAR_1->end = VAR_1->start; VAR_0->rchg[VAR_1->end]; VAR_1->end++)
  ;

 return 0;
}
