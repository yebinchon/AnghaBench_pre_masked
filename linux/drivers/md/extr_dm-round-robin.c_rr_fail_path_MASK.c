
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int lock; int invalid_paths; } ;
struct path_selector {struct selector* context; } ;
struct path_info {int list; } ;
struct dm_path {struct path_info* pscontext; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct path_selector *VAR_0, struct dm_path *VAR_1)
{
 unsigned long VAR_2;
 struct selector *VAR_3 = VAR_0->context;
 struct path_info *VAR_4 = VAR_1->pscontext;

 FUNC_1(&VAR_3->lock, VAR_2);
 FUNC_0(&VAR_4->list, &VAR_3->invalid_paths);
 FUNC_2(&VAR_3->lock, VAR_2);
}
