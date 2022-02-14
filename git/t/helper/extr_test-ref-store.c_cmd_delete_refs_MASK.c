
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct ref_store {int dummy; } ;


 struct string_list VAR_0 ;
 unsigned int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ref_store*,char const*,struct string_list*,unsigned int) ;
 int FUNC_2 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_3(struct ref_store *VAR_1, const char **VAR_2)
{
 unsigned int VAR_3 = FUNC_0(*VAR_2++, "flags");
 const char *VAR_4 = *VAR_2++;
 struct string_list VAR_5 = VAR_0;

 while (*VAR_2)
  FUNC_2(&VAR_5, *VAR_2++);

 return FUNC_1(VAR_1, VAR_4, &VAR_5, VAR_3);
}
