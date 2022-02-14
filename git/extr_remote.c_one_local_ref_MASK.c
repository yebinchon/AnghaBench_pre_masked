
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; int new_oid; } ;
struct object_id {int dummy; } ;


 struct ref* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,struct object_id const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const struct object_id *VAR_1,
    int VAR_2, void *VAR_3)
{
 struct ref ***VAR_4 = VAR_3;
 struct ref *VAR_5;


 if (FUNC_1(VAR_0 + 5, 0))
  return 0;

 VAR_5 = FUNC_0(VAR_0);
 FUNC_2(&VAR_5->new_oid, VAR_1);
 **VAR_4 = VAR_5;
 *VAR_4 = &VAR_5->next;
 return 0;
}
