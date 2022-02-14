
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secashead_queue {int dummy; } ;
struct secasvar {struct secashead_queue savtree_alive; struct secashead_queue savtree_larval; } ;
struct secashead {struct secashead_queue savtree_alive; struct secashead_queue savtree_larval; } ;


 struct secasvar* FUNC_0 (struct secashead_queue*) ;
 struct secasvar* FUNC_1 (struct secasvar*,int ) ;
 int FUNC_2 (struct secashead_queue*,struct secasvar*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct secasvar**) ;
 int FUNC_4 (struct secasvar**) ;

__attribute__((used)) static void
FUNC_5(struct secashead_queue *VAR_1)
{
 struct secashead *VAR_2, *VAR_3;
 struct secasvar *VAR_4, *VAR_5;

 VAR_2 = FUNC_0(VAR_1);
 while (VAR_2 != ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_2->savtree_larval);
  while (VAR_4 != ((void*)0)) {
   VAR_5 = FUNC_1(VAR_4, VAR_0);
   FUNC_2(&VAR_2->savtree_larval, VAR_4, VAR_0);
   FUNC_4(&VAR_4);
   FUNC_3(&VAR_2);
   VAR_4 = VAR_5;
  }
  VAR_4 = FUNC_0(&VAR_2->savtree_alive);
  while (VAR_4 != ((void*)0)) {
   VAR_5 = FUNC_1(VAR_4, VAR_0);
   FUNC_2(&VAR_2->savtree_alive, VAR_4, VAR_0);
   FUNC_4(&VAR_4);
   FUNC_3(&VAR_2);
   VAR_4 = VAR_5;
  }
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_3(&VAR_2);
  VAR_2 = VAR_3;
 }
}
