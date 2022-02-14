
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int entry_count; int children_count; struct TYPE_7__** children; int oid; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_pool ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (size_t*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int*,char const*,int,char const**,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,unsigned char const*) ;
 TYPE_1__** FUNC_5 (int *,size_t) ;
 scalar_t__ FUNC_6 (TYPE_1__**,char const*,int *) ;
 char* FUNC_7 (char const*,char,int) ;
 int FUNC_8 (TYPE_1__**,int,size_t) ;

__attribute__((used)) static int FUNC_9(git_tree_cache **VAR_2,
         const char **VAR_3, const char *VAR_4,
         git_pool *VAR_5)
{
 git_tree_cache *VAR_6 = ((void*)0);
 const char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_8 = VAR_7 = *VAR_3;

 if ((VAR_8 = FUNC_7(VAR_8, '\0', VAR_4 - VAR_8)) == ((void*)0))
  goto corrupted;

 if (++VAR_8 >= VAR_4)
  goto corrupted;

 if (FUNC_6(&VAR_6, VAR_7, VAR_5) < 0)
  return -1;


 if (FUNC_2(&VAR_9, VAR_8, VAR_4 - VAR_8, &VAR_8, 10) < 0)
  goto corrupted;

 VAR_6->entry_count = VAR_9;

 if (*VAR_8 != ' ' || ++VAR_8 >= VAR_4)
  goto corrupted;


 if (FUNC_2(&VAR_9, VAR_8, VAR_4 - VAR_8, &VAR_8, 10) < 0 || VAR_9 < 0)
  goto corrupted;

 VAR_6->children_count = VAR_9;

 if (*VAR_8 != '\n' || ++VAR_8 > VAR_4)
  goto corrupted;


 if (VAR_6->entry_count >= 0) {

  if (VAR_8 + VAR_1 > VAR_4)
   goto corrupted;

  FUNC_4(&VAR_6->oid, (const unsigned char *)VAR_8);
  VAR_8 += VAR_1;
 }


 if (VAR_6->children_count > 0) {
  size_t VAR_10, VAR_11;

  FUNC_1(&VAR_11, VAR_6->children_count, sizeof(git_tree_cache*));

  VAR_6->children = FUNC_5(VAR_5, VAR_11);
  FUNC_0(VAR_6->children);

  FUNC_8(VAR_6->children, 0x0, VAR_11);

  for (VAR_10 = 0; VAR_10 < VAR_6->children_count; ++VAR_10) {
   if (FUNC_9(&VAR_6->children[VAR_10], &VAR_8, VAR_4, VAR_5) < 0)
    goto corrupted;
  }
 }

 *VAR_3 = VAR_8;
 *VAR_2 = VAR_6;
 return 0;

 corrupted:
 FUNC_3(VAR_0, "corrupted TREE extension in index");
 return -1;
}
