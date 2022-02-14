
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct pathspec {int dummy; } ;
typedef int read_tree_fn_t ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*,struct tree*,struct strbuf*,int,struct pathspec const*,int ,void*) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*) ;

int FUNC_3(struct repository *VAR_1,
   struct tree *VAR_2,
   const char *VAR_3, int VAR_4,
   int VAR_5, const struct pathspec *VAR_6,
   read_tree_fn_t VAR_7, void *VAR_8)
{
 struct strbuf VAR_9 = VAR_0;
 int VAR_10;

 FUNC_1(&VAR_9, VAR_3, VAR_4);
 VAR_10 = FUNC_0(VAR_1, VAR_2, &VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_2(&VAR_9);
 return VAR_10;
}
