
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct commit_graph {int filename; } ;


 struct commit_graph* FUNC_0 (int,struct stat*) ;
 int FUNC_1 (char const*,int*,struct stat*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct commit_graph *FUNC_3(const char *VAR_0)
{

 struct stat VAR_1;
 int VAR_2;
 struct commit_graph *VAR_3;
 int VAR_4 = FUNC_1(VAR_0, &VAR_2, &VAR_1);

 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_2, &VAR_1);

 if (VAR_3)
  VAR_3->filename = FUNC_2(VAR_0);

 return VAR_3;
}
