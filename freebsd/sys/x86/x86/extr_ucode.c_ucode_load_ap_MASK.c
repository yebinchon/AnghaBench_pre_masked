
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cpu_hyperthread; int cpu_present; } ;
struct TYPE_3__ {int (* load ) (int *,int,int *,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 size_t* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,int,int *,int *) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_2(int VAR_4)
{
 if (VAR_2 != ((void*)0))
  (void)VAR_3->load(VAR_2, 0, ((void*)0), ((void*)0));
}
