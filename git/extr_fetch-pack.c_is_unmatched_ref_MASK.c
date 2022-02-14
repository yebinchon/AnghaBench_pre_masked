
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {scalar_t__ match_status; int old_oid; int name; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct object_id*,int *) ;
 int FUNC_1 (int ,struct object_id*,char const**) ;

__attribute__((used)) static int FUNC_2(const struct ref *VAR_1)
{
 struct object_id VAR_2;
 const char *VAR_3;
 return VAR_1->match_status == VAR_0 &&
  !FUNC_1(VAR_1->name, &VAR_2, &VAR_3) &&
  *VAR_3 == '\0' &&
  FUNC_0(&VAR_2, &VAR_1->old_oid);
}
