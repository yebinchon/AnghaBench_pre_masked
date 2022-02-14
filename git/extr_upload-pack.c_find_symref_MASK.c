
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int util; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*,int ,int *,int*) ;
 struct string_list_item* FUNC_2 (void*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, const struct object_id *VAR_2,
         int VAR_3, void *VAR_4)
{
 const char *VAR_5;
 struct string_list_item *VAR_6;

 if ((VAR_3 & VAR_0) == 0)
  return 0;
 VAR_5 = FUNC_1(VAR_1, 0, ((void*)0), &VAR_3);
 if (!VAR_5 || (VAR_3 & VAR_0) == 0)
  FUNC_0("'%s' is a symref but it is not?", VAR_1);
 VAR_6 = FUNC_2(VAR_4, FUNC_3(VAR_1));
 VAR_6->util = FUNC_4(FUNC_3(VAR_5));
 return 0;
}
