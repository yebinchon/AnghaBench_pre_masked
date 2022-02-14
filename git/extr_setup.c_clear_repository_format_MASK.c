
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository_format {int partial_clone; int work_tree; int unknown_extensions; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct repository_format*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct repository_format *VAR_0)
{
 FUNC_2(&VAR_0->unknown_extensions, 0);
 FUNC_0(VAR_0->work_tree);
 FUNC_0(VAR_0->partial_clone);
 FUNC_1(VAR_0);
}
