
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int invalid_paths; int valid_paths; } ;
struct path_selector {struct selector* context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct selector*) ;

__attribute__((used)) static void FUNC_2(struct path_selector *VAR_0)
{
 struct selector *VAR_1 = VAR_0->context;

 FUNC_0(&VAR_1->valid_paths);
 FUNC_0(&VAR_1->invalid_paths);
 FUNC_1(VAR_1);
 VAR_0->context = ((void*)0);
}
