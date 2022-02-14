
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 struct object_id const* VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (int *,char) ;
 char* FUNC_3 (struct object_id const*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_5(const struct object_id *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_3);
 char *VAR_5 = FUNC_3(VAR_0);
 char *VAR_6 = FUNC_2(&VAR_1, ' ');

 FUNC_4(FUNC_0("the merge base between %s and [%s] "
  "must be skipped.\n"
  "So we cannot be sure the first %s commit is "
  "between %s and %s.\n"
  "We continue anyway."),
  VAR_5, VAR_6, VAR_2, VAR_4, VAR_5);
 FUNC_1(VAR_6);
}
