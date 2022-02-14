
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct vm_freelist {int lcnt; int pl; } ;
struct TYPE_5__ {int order; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct vm_freelist *VAR_1, vm_page_t VAR_2, int VAR_3, int VAR_4)
{

 VAR_2->order = VAR_3;
 if (VAR_4)
  FUNC_1(&VAR_1[VAR_3].pl, VAR_2, VAR_0);
 else
  FUNC_0(&VAR_1[VAR_3].pl, VAR_2, VAR_0);
 VAR_1[VAR_3].lcnt++;
}
