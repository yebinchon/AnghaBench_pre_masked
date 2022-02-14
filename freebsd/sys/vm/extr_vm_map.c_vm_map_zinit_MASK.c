
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {int lock; int system_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*,int *,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, int VAR_3, int VAR_4)
{
 vm_map_t VAR_5;

 VAR_5 = (vm_map_t)VAR_2;
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 FUNC_1(&VAR_5->system_mtx, "vm map (system)", ((void*)0), VAR_0 | VAR_1);
 FUNC_2(&VAR_5->lock, "vm map (user)");
 return (0);
}
