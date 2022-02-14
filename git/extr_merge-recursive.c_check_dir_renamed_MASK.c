
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
struct dir_rename_entry {int dummy; } ;


 struct dir_rename_entry* FUNC_0 (struct hashmap*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static struct dir_rename_entry *FUNC_4(const char *VAR_0,
        struct hashmap *VAR_1)
{
 char *VAR_2 = FUNC_3(VAR_0);
 char *VAR_3;
 struct dir_rename_entry *VAR_4 = ((void*)0);

 while ((VAR_3 = FUNC_2(VAR_2, '/'))) {
  *VAR_3 = '\0';
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4)
   break;
 }
 FUNC_1(VAR_2);
 return VAR_4;
}
