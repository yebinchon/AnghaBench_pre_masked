
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* nr; int strdup_strings; } ;
struct mailmap_entry {TYPE_1__ namemap; int email; int name; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, const char *VAR_2)
{
 struct mailmap_entry *VAR_3 = (struct mailmap_entry *)VAR_1;
 FUNC_0("mailmap: removing entries for <%s>, with %d sub-entries\n",
   VAR_2, VAR_3->namemap.nr);
 FUNC_0("mailmap: - simple: '%s' <%s>\n",
   FUNC_1(VAR_3->name), FUNC_1(VAR_3->email));

 FUNC_2(VAR_3->name);
 FUNC_2(VAR_3->email);

 VAR_3->namemap.strdup_strings = 1;
 FUNC_3(&VAR_3->namemap, VAR_0);
}
