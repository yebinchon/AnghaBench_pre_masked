
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct commit_graph {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,size_t) ;
 struct commit_graph* FUNC_4 (void*,int,size_t) ;
 void* FUNC_5 (int *,size_t,int ,int ,int,int ) ;
 size_t FUNC_6 (int ) ;

struct commit_graph *FUNC_7(int VAR_3, struct stat *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;
 struct commit_graph *VAR_7;

 VAR_6 = FUNC_6(VAR_4->st_size);

 if (VAR_6 < VAR_0) {
  FUNC_1(VAR_3);
  FUNC_2(FUNC_0("commit-graph file is too small"));
  return ((void*)0);
 }
 VAR_5 = FUNC_5(((void*)0), VAR_6, VAR_2, VAR_1, VAR_3, 0);
 VAR_7 = FUNC_4(VAR_5, VAR_3, VAR_6);

 if (!VAR_7) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_1(VAR_3);
 }

 return VAR_7;
}
