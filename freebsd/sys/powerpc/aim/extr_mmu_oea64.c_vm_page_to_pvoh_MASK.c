
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct pvo_head {int dummy; } ;
struct TYPE_5__ {struct pvo_head mdpg_pvoh; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct pvo_head *
FUNC_3(vm_page_t VAR_1)
{

 FUNC_2(FUNC_0(FUNC_1(VAR_1)), VAR_0);
 return (&VAR_1->md.mdpg_pvoh);
}
