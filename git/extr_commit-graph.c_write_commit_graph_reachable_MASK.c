
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct split_commit_graph_opts {int dummy; } ;
typedef enum commit_graph_write_flags { ____Placeholder_commit_graph_write_flags } commit_graph_write_flags ;


 struct string_list VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct string_list*) ;
 int FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (char const*,int *,struct string_list*,int,struct split_commit_graph_opts const*) ;

int FUNC_3(const char *VAR_2,
     enum commit_graph_write_flags VAR_3,
     const struct split_commit_graph_opts *VAR_4)
{
 struct string_list VAR_5 = VAR_0;
 int VAR_6;

 FUNC_0(VAR_1, &VAR_5);
 VAR_6 = FUNC_2(VAR_2, ((void*)0), &VAR_5,
        VAR_3, VAR_4);

 FUNC_1(&VAR_5, 0);
 return VAR_6;
}
