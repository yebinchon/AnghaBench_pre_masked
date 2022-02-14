
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csession {struct csession* mackey; struct csession* key; int lock; int cses; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct csession*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct csession *VAR_1)
{

 FUNC_0(VAR_1->cses);
 FUNC_2(&VAR_1->lock);
 if (VAR_1->key)
  FUNC_1(VAR_1->key, VAR_0);
 if (VAR_1->mackey)
  FUNC_1(VAR_1->mackey, VAR_0);
 FUNC_1(VAR_1, VAR_0);
}
