
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e820_entry {int dummy; } ;
struct boot_params {unsigned int e820_entries; int e820_table; } ;
struct TYPE_2__ {unsigned int nr_entries; int entries; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct boot_params *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_1->nr_entries;


 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_2->e820_entries = VAR_3;
 FUNC_0(&VAR_2->e820_table, &VAR_1->entries, VAR_3*sizeof(struct e820_entry));

 return 0;
}
