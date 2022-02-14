
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_4__ {int mdpg_attrs; } ;
struct TYPE_5__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static __inline void
FUNC_1(vm_page_t VAR_2, int VAR_3)
{

 FUNC_0(&VAR_1, VAR_0);
 VAR_2->md.mdpg_attrs |= VAR_3;
}
