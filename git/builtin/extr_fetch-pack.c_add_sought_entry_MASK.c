
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref**,int,int) ;
 struct ref* FUNC_1 (char const*) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (int *,struct object_id*) ;
 int FUNC_4 (char const*,struct object_id*,char const**) ;

__attribute__((used)) static void FUNC_5(struct ref ***VAR_0, int *VAR_1, int *VAR_2,
        const char *VAR_3)
{
 struct ref *VAR_4;
 struct object_id VAR_5;
 const char *VAR_6;

 if (!FUNC_4(VAR_3, &VAR_5, &VAR_6)) {
  if (*VAR_6 == ' ') {

   VAR_3 = VAR_6 + 1;
  } else if (*VAR_6 == '\0') {
   ;
  } else {

   FUNC_2(&VAR_5);
  }
 } else {

  FUNC_2(&VAR_5);
 }

 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(&VAR_4->old_oid, &VAR_5);
 (*VAR_1)++;
 FUNC_0(*VAR_0, *VAR_1, *VAR_2);
 (*VAR_0)[*VAR_1 - 1] = VAR_4;
}
