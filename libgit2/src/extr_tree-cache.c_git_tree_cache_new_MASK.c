
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t namelen; char* name; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_pool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,int,size_t,int) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 size_t FUNC_5 (char const*) ;

int FUNC_6(git_tree_cache **VAR_0, const char *VAR_1, git_pool *VAR_2)
{
 size_t VAR_3, VAR_4;
 git_tree_cache *VAR_5;

 VAR_3 = FUNC_5(VAR_1);

 FUNC_1(&VAR_4, sizeof(git_tree_cache), VAR_3, 1);

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 FUNC_0(VAR_5);

 FUNC_4(VAR_5, 0x0, sizeof(git_tree_cache));

 VAR_5->namelen = VAR_3;
 FUNC_3(VAR_5->name, VAR_1, VAR_3);
 VAR_5->name[VAR_3] = '\0';

 *VAR_0 = VAR_5;
 return 0;
}
