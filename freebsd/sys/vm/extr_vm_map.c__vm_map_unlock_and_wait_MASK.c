
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_4__ {int root; int lock; int system_mtx; scalar_t__ system_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char const*,int) ;
 int FUNC_4 (int *,char const*,int) ;

int
FUNC_5(vm_map_t VAR_3, int VAR_4, const char *VAR_5, int VAR_6)
{

 FUNC_0(VAR_3);
 FUNC_2(&VAR_2);
 if (VAR_3->system_map)
  FUNC_3(&VAR_3->system_mtx, 0, VAR_5, VAR_6);
 else
  FUNC_4(&VAR_3->lock, VAR_5, VAR_6);
 return (FUNC_1(&VAR_3->root, &VAR_2, VAR_0 | VAR_1, "vmmaps",
     VAR_4));
}
