
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct TYPE_2__ {int tree_size; int tree_data; int oid; } ;
struct pbase_tree {TYPE_1__ pcache; struct pbase_tree* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (struct tree_desc*,char const*,int,char const*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct tree_desc*,int ,int ) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 unsigned int FUNC_5 (char const*) ;
 struct pbase_tree* VAR_2 ;

__attribute__((used)) static void FUNC_6(const char *VAR_3)
{
 struct pbase_tree *VAR_4;
 int VAR_5;
 unsigned VAR_6 = FUNC_5(VAR_3);

 if (!VAR_1 || FUNC_2(VAR_6))
  return;

 VAR_5 = FUNC_4(VAR_3);
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_5 == 0) {
   FUNC_0(&VAR_4->pcache.oid, VAR_0, ((void*)0), 1);
  }
  else {
   struct tree_desc VAR_7;
   FUNC_3(&VAR_7, VAR_4->pcache.tree_data, VAR_4->pcache.tree_size);
   FUNC_1(&VAR_7, VAR_3, VAR_5, VAR_3);
  }
 }
}
