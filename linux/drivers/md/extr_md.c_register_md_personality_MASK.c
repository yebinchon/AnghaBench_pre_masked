
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_personality {int list; int level; int name; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct md_personality *VAR_2)
{
 FUNC_1("md: %s personality registered for level %d\n",
   VAR_2->name, VAR_2->level);
 FUNC_2(&VAR_1);
 FUNC_0(&VAR_2->list, &VAR_0);
 FUNC_3(&VAR_1);
 return 0;
}
