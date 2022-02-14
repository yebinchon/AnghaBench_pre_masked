
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int level; int ofnode; } ;


 struct cache* FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*,struct cache*) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static void FUNC_5(struct cache *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2 = VAR_0->level;

 FUNC_1(VAR_0);

 while ((VAR_1 = FUNC_3(VAR_0->ofnode))) {
  struct cache *VAR_3;

  VAR_2++;
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  FUNC_4(VAR_1);
  if (!VAR_3)
   break;

  FUNC_2(VAR_0, VAR_3);
  VAR_0 = VAR_3;
 }
}
