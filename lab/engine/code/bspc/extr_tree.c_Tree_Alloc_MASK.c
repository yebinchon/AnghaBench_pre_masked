
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maxs; int mins; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

tree_t *FUNC_3(void)
{
 tree_t *VAR_0;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 FUNC_2 (VAR_0, 0, sizeof(*VAR_0));
 FUNC_0 (VAR_0->mins, VAR_0->maxs);

 return VAR_0;
}
