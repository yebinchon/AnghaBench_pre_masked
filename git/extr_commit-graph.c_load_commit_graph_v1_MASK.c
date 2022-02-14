
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct commit_graph {char const* obj_dir; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 struct commit_graph* FUNC_2 (char*) ;

__attribute__((used)) static struct commit_graph *FUNC_3(struct repository *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_1);
 struct commit_graph *VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_2);

 if (VAR_3)
  VAR_3->obj_dir = VAR_1;

 return VAR_3;
}
