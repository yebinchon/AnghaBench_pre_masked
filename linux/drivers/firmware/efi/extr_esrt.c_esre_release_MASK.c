
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct esre_entry {int list; } ;


 int FUNC_0 (struct esre_entry*) ;
 int FUNC_1 (int *) ;
 struct esre_entry* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct esre_entry *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
