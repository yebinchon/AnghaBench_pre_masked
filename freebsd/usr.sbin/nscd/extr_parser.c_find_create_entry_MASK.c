
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int dummy; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (struct configuration_entry* (*) (struct configuration*,char const*)) ;
 int FUNC_1 (struct configuration_entry* (*) (struct configuration*,char const*)) ;
 int FUNC_2 (struct configuration*,struct configuration_entry*) ;
 int FUNC_3 (int) ;
 struct configuration_entry* FUNC_4 (struct configuration*,char const*) ;
 struct configuration_entry* FUNC_5 (char const*) ;

__attribute__((used)) static struct configuration_entry *
FUNC_6(struct configuration *VAR_0,
 const char *VAR_1)
{
 struct configuration_entry *VAR_2 = ((void*)0);
 int VAR_3;

 FUNC_0(FUNC_6);
 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_5(VAR_1);
  FUNC_3( VAR_2 != ((void*)0));
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  FUNC_3(VAR_3 == 0);
 }

 FUNC_1(FUNC_6);
 return (VAR_2);
}
