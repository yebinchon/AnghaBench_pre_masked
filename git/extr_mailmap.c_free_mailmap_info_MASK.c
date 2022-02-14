
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailmap_info {int email; int name; } ;


 int FUNC_0 (char*,char const*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const char *VAR_1)
{
 struct mailmap_info *VAR_2 = (struct mailmap_info *)VAR_0;
 FUNC_0("mailmap: -- complex: '%s' -> '%s' <%s>\n",
   VAR_1, FUNC_1(VAR_2->name), FUNC_1(VAR_2->email));
 FUNC_2(VAR_2->name);
 FUNC_2(VAR_2->email);
}
