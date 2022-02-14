
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int ofnode; int list; int level; } ;


 int FUNC_0 (struct cache*) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (struct cache*) ;

__attribute__((used)) static void FUNC_6(struct cache *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_4("freeing L%d %s cache for %pOF\n", VAR_0->level,
   FUNC_0(VAR_0), VAR_0->ofnode);

 FUNC_5(VAR_0);
 FUNC_2(&VAR_0->list);
 FUNC_3(VAR_0->ofnode);
 FUNC_1(VAR_0);
}
