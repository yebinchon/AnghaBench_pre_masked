
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* rchg; } ;
typedef TYPE_1__ xdfile_t ;
struct xdlgroup {int start; int end; } ;



__attribute__((used)) static inline int FUNC_0(xdfile_t *VAR_0, struct xdlgroup *VAR_1)
{
 if (VAR_1->start == 0)
  return -1;

 VAR_1->end = VAR_1->start - 1;
 for (VAR_1->start = VAR_1->end; VAR_0->rchg[VAR_1->start - 1]; VAR_1->start--)
  ;

 return 0;
}
