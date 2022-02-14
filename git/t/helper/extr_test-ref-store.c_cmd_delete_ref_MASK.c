
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 unsigned int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ref_store*,char const*,char const*,struct object_id*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ref_store *VAR_0, const char **VAR_1)
{
 const char *VAR_2 = FUNC_3(*VAR_1++, "msg");
 const char *VAR_3 = FUNC_3(*VAR_1++, "refname");
 const char *VAR_4 = FUNC_3(*VAR_1++, "old-sha1");
 unsigned int VAR_5 = FUNC_0(*VAR_1++, "flags");
 struct object_id VAR_6;

 if (FUNC_2(VAR_4, &VAR_6))
  FUNC_1("not sha-1");

 return FUNC_4(VAR_0, VAR_2, VAR_3, &VAR_6, VAR_5);
}
