
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct line_log_data {int path; struct line_log_data* next; } ;
struct argv_array {int dummy; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 char** FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,int ) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (struct pathspec*,int ,int ,char*,char const**) ;

__attribute__((used)) static void FUNC_4(struct pathspec *VAR_2,
           struct line_log_data *VAR_3)
{
 struct line_log_data *VAR_4;
 struct argv_array VAR_5 = VAR_0;
 const char **VAR_6;

 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  FUNC_1(&VAR_5, VAR_4->path);
 VAR_6 = FUNC_0(&VAR_5);

 FUNC_3(VAR_2, 0, VAR_1, "", VAR_6);

 FUNC_2(VAR_6);
}
