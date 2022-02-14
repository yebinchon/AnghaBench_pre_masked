
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int worktree; } ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,struct repository const*,struct json_writer*) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (struct json_writer*,int ) ;
 int FUNC_3 (struct json_writer*,char*,int ) ;
 int FUNC_4 (struct json_writer*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(const char *VAR_2, int VAR_3,
         const struct repository *VAR_4)
{
 const char *VAR_5 = "def_repo";
 struct json_writer VAR_6 = VAR_0;

 FUNC_2(&VAR_6, 0);
 FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4, &VAR_6);
 FUNC_3(&VAR_6, "worktree", VAR_4->worktree);
 FUNC_1(&VAR_6);

 FUNC_5(&VAR_1, &VAR_6.json);
 FUNC_4(&VAR_6);
}
