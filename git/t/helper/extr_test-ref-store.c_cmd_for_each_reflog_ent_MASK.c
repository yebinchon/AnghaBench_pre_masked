
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ref_store*,char const*,int ,struct ref_store*) ;

__attribute__((used)) static int FUNC_2(struct ref_store *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = FUNC_0(*VAR_2++, "refname");

 return FUNC_1(VAR_1, VAR_3, VAR_0, VAR_1);
}
