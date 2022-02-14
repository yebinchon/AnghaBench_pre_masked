
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rev_info*,struct object*,char*) ;
 struct object* FUNC_1 (struct object_id const*,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const struct object_id *VAR_3,
         int VAR_4, void *VAR_5)
{
 struct rev_info *VAR_6 = (struct rev_info *)VAR_5;
 struct object *VAR_7;

 if ((VAR_4 & VAR_1) && (VAR_4 & VAR_0)) {
  FUNC_2("symbolic ref is dangling: %s", VAR_2);
  return 0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_6, VAR_7, "");

 return 0;
}
