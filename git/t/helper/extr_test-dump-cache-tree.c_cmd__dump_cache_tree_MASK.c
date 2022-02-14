
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {struct cache_tree* cache_tree; } ;
struct cache_tree {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cache_tree* FUNC_0 () ;
 int FUNC_1 (struct index_state*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct cache_tree*,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 struct index_state VAR_2 ;

int FUNC_6(int VAR_3, const char **VAR_4)
{
 struct index_state VAR_5;
 struct cache_tree *VAR_6 = FUNC_0();
 FUNC_5();
 if (FUNC_4() < 0)
  FUNC_2("unable to read index file");
 VAR_5 = VAR_2;
 VAR_5.cache_tree = VAR_6;
 FUNC_1(&VAR_5, VAR_0);
 return FUNC_3(VAR_1, VAR_6, "");
}
