
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct vm_freelist {int lcnt; int pl; } ;
struct TYPE_4__ {int order; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct vm_freelist *VAR_2, vm_page_t VAR_3, int VAR_4)
{

 FUNC_0(&VAR_2[VAR_4].pl, VAR_3, VAR_1);
 VAR_2[VAR_4].lcnt--;
 VAR_3->order = VAR_0;
}
