
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct efivar_entry {int scanning; struct list_head list; } ;



__attribute__((used)) static void FUNC_0(struct efivar_entry *VAR_0,
     struct efivar_entry *VAR_1,
     struct list_head *VAR_2)
{
 VAR_0->scanning = 1;
 if (&VAR_1->list != VAR_2)
  VAR_1->scanning = 1;
}
