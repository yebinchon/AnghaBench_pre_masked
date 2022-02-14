
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct string_list*,char*) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const struct object_id *VAR_1,
       int VAR_2, void *VAR_3)
{
 struct string_list *VAR_4 = VAR_3;
 char *VAR_5 = FUNC_1("refs/bisect%s", VAR_0);
 FUNC_0(VAR_4, VAR_5);
 return 0;
}
