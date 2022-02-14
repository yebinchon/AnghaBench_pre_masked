
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pmap; } ;
struct vmspace {TYPE_1__ vm_map; } ;


 int FUNC_0 (int ,char*,struct vmspace*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmspace*) ;
 int FUNC_3 (int ,struct vmspace*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (struct vmspace*) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_8(struct vmspace *VAR_2)
{

 FUNC_0(VAR_0, "vmspace_free: %p", VAR_2);





 FUNC_2(VAR_2);






 (void)FUNC_6(&VAR_2->vm_map, FUNC_5(&VAR_2->vm_map),
     FUNC_4(&VAR_2->vm_map));

 FUNC_1(FUNC_7(VAR_2));
 VAR_2->vm_map.pmap = ((void*)0);
 FUNC_3(VAR_1, VAR_2);
}
