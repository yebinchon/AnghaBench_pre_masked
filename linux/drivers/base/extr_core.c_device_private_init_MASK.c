
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int deferred_probe; int klist_children; struct device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4)
{
 VAR_4->p = FUNC_2(sizeof(*VAR_4->p), VAR_1);
 if (!VAR_4->p)
  return -VAR_0;
 VAR_4->p->device = VAR_4;
 FUNC_1(&VAR_4->p->klist_children, VAR_2,
     VAR_3);
 FUNC_0(&VAR_4->p->deferred_probe);
 return 0;
}
