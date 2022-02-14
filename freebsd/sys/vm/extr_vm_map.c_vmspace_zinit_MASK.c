
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pmap; } ;
struct vmspace {TYPE_1__ vm_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (struct vmspace*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, int VAR_1, int VAR_2)
{
 struct vmspace *VAR_3;

 VAR_3 = (struct vmspace *)VAR_0;

 VAR_3->vm_map.pmap = ((void*)0);
 (void)FUNC_1(&VAR_3->vm_map, sizeof(VAR_3->vm_map), VAR_2);
 FUNC_0(FUNC_2(VAR_3));
 return (0);
}
