
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ,char*) ;
 char* FUNC_2 (struct object_id*) ;
 int FUNC_3 (char*,char*,char const*,int) ;
 char* FUNC_4 (struct ref_store*,char const*,int,struct object_id*,int*) ;

__attribute__((used)) static int FUNC_5(struct ref_store *VAR_0, const char **VAR_1)
{
 struct object_id VAR_2;
 const char *VAR_3 = FUNC_1(*VAR_1++, "refname");
 int VAR_4 = FUNC_0(*VAR_1++, "resolve-flags");
 int VAR_5;
 const char *VAR_6;

 VAR_6 = FUNC_4(VAR_0, VAR_3, VAR_4,
          &VAR_2, &VAR_5);
 FUNC_3("%s %s 0x%x\n", FUNC_2(&VAR_2), VAR_6 ? VAR_6 : "(null)", VAR_5);
 return VAR_6 ? 0 : 1;
}
