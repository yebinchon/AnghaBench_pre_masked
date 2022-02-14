
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int new_oid; } ;
struct object_id {int dummy; } ;


 struct ref* FUNC_0 () ;
 struct ref* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int *,struct object_id*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0,
        struct ref **VAR_1)
{
 struct object_id VAR_2;

 if (!*VAR_0) {
  if (VAR_1)
   *VAR_1 = FUNC_0();
  return 0;
 }

 if (FUNC_2(VAR_0, &VAR_2))
  return -1;

 if (VAR_1) {
  *VAR_1 = FUNC_1(VAR_0);
  FUNC_3(&(*VAR_1)->new_oid, &VAR_2);
 }
 return 0;
}
