
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; } ;
struct ib_mw {TYPE_1__* device; struct ib_pd* pd; } ;
struct TYPE_2__ {int (* dealloc_mw ) (struct ib_mw*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mw*) ;

int FUNC_2(struct ib_mw *VAR_0)
{
 struct ib_pd *VAR_1 = VAR_0->pd;
 int VAR_2;

 VAR_2 = VAR_0->device->dealloc_mw(VAR_0);
 if (!VAR_2)
  FUNC_0(&VAR_1->usecnt);
 return VAR_2;
}
