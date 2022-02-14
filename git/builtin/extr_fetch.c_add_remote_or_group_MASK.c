
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; } ;
struct remote_group_data {char const* name; struct string_list* list; } ;
struct remote {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct remote_group_data*) ;
 struct remote* FUNC_1 (char const*) ;
 int FUNC_2 (struct remote*,int ) ;
 int FUNC_3 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct string_list *VAR_2)
{
 int VAR_3 = VAR_2->nr;
 struct remote_group_data VAR_4;
 VAR_4.name = VAR_1; VAR_4.list = VAR_2;

 FUNC_0(VAR_0, &VAR_4);
 if (VAR_2->nr == VAR_3) {
  struct remote *VAR_5 = FUNC_1(VAR_1);
  if (!FUNC_2(VAR_5, 0))
   return 0;
  FUNC_3(VAR_2, VAR_5->name);
 }
 return 1;
}
