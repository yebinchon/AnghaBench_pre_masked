
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct setup_data {int len; unsigned long next; int type; } ;
struct TYPE_2__ {unsigned long setup_data; } ;
struct boot_params {TYPE_1__ hdr; } ;
struct boot_e820_entry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct boot_params *VAR_1,
   struct setup_data *VAR_2, u32 VAR_3)
{
 struct setup_data *VAR_4;

 VAR_2->type = VAR_0;
 VAR_2->len = VAR_3 * sizeof(struct boot_e820_entry);
 VAR_2->next = 0;

 VAR_4 = (struct setup_data *)(unsigned long)VAR_1->hdr.setup_data;

 while (VAR_4 && VAR_4->next)
  VAR_4 = (struct setup_data *)(unsigned long)VAR_4->next;

 if (VAR_4)
  VAR_4->next = (unsigned long)VAR_2;
 else
  VAR_1->hdr.setup_data = (unsigned long)VAR_2;
}
