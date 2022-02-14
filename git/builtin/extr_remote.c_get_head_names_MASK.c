
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {int pattern; char* src; char* dst; scalar_t__ force; } ;
struct TYPE_2__ {int strdup_strings; } ;
struct ref_states {TYPE_1__ heads; } ;
struct ref {int name; struct ref* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ref const*,char*) ;
 int FUNC_2 (struct ref*) ;
 int FUNC_3 (struct ref const*,struct refspec_item*,struct ref***,int ) ;
 struct ref* FUNC_4 (int ,struct ref*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(const struct ref *VAR_0, struct ref_states *VAR_1)
{
 struct ref *VAR_2, *VAR_3;
 struct ref *VAR_4 = ((void*)0), **VAR_5 = &VAR_4;
 struct refspec_item VAR_6;

 VAR_6.force = 0;
 VAR_6.pattern = 1;
 VAR_6.src = VAR_6.dst = "refs/heads/*";
 VAR_1->heads.strdup_strings = 1;
 FUNC_3(VAR_0, &VAR_6, &VAR_5, 0);
 VAR_3 = FUNC_4(FUNC_1(VAR_0, "HEAD"),
        VAR_4, 1);
 for (VAR_2 = VAR_3; VAR_2; VAR_2 = VAR_2->next)
  FUNC_5(&VAR_1->heads, FUNC_0(VAR_2->name));

 FUNC_2(VAR_4);
 FUNC_2(VAR_3);

 return 0;
}
