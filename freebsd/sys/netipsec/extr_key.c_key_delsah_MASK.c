
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secashead {scalar_t__ state; int savtree_alive; int savtree_larval; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct secashead*,int ) ;

__attribute__((used)) static void
FUNC_3(struct secashead *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0), ("NULL sah"));
 FUNC_0(VAR_2->state == VAR_1,
     ("Attempt to free non DEAD SAH %p", VAR_2));
 FUNC_0(FUNC_1(&VAR_2->savtree_larval),
     ("Attempt to free SAH %p with LARVAL SA", VAR_2));
 FUNC_0(FUNC_1(&VAR_2->savtree_alive),
     ("Attempt to free SAH %p with ALIVE SA", VAR_2));

 FUNC_2(VAR_2, VAR_0);
}
