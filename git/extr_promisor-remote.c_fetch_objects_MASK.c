
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int exact_oid; struct ref* next; int old_oid; } ;
struct object_id {int dummy; } ;


 struct ref* FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct ref*) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (int *,struct object_id const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0,
    const struct object_id *VAR_1,
    int VAR_2)
{
 struct ref *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct ref *VAR_5 = FUNC_0(FUNC_2(&VAR_1[VAR_4]));
  FUNC_3(&VAR_5->old_oid, &VAR_1[VAR_4]);
  VAR_5->exact_oid = 1;
  VAR_5->next = VAR_3;
  VAR_3 = VAR_5;
 }
 return FUNC_1(VAR_0, VAR_3);
}
