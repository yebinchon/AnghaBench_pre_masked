
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int dummy; } ;
struct configuration {int entries_size; int entries; } ;


 int FUNC_0 (struct configuration_entry* (*) (struct configuration*,char const*)) ;
 int FUNC_1 (struct configuration_entry* (*) (struct configuration*,char const*)) ;
 struct configuration_entry** FUNC_2 (char const*,int ,int ,int,int ) ;
 int VAR_0 ;

struct configuration_entry *
FUNC_3(struct configuration *VAR_1,
 const char *VAR_2)
{
 struct configuration_entry **VAR_3;

 FUNC_0(FUNC_3);

 VAR_3 = FUNC_2(VAR_2, VAR_1->entries, VAR_1->entries_size,
  sizeof(struct configuration_entry *), VAR_0);
 FUNC_1(FUNC_3);

 return ((VAR_3 != ((void*)0)) ? *VAR_3 : ((void*)0));
}
