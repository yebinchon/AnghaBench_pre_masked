
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ref_store*,char const*) ;

__attribute__((used)) static int FUNC_2(struct ref_store *VAR_0, const char **VAR_1)
{
 const char *VAR_2 = FUNC_0(*VAR_1++, "refname");

 return !FUNC_1(VAR_0, VAR_2);
}
