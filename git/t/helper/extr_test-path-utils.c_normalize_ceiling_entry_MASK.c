
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct string_list_item *VAR_0, void *VAR_1)
{
 char *VAR_2 = VAR_0->string;

 if (!*VAR_2)
  FUNC_0("Empty path is not supported");
 if (!FUNC_1(VAR_2))
  FUNC_0("Path \"%s\" is not absolute", VAR_2);
 if (FUNC_2(VAR_2, VAR_2) < 0)
  FUNC_0("Path \"%s\" could not be normalized", VAR_2);
 return 1;
}
