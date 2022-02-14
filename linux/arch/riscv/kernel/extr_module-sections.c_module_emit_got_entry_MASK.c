
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mod_section {int num_entries; int max_entries; TYPE_1__* shdr; } ;
struct TYPE_4__ {struct mod_section got; } ;
struct module {TYPE_2__ arch; } ;
struct got_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ sh_addr; } ;


 int FUNC_0 (int) ;
 struct got_entry FUNC_1 (unsigned long) ;
 struct got_entry* FUNC_2 (unsigned long,struct mod_section*) ;

unsigned long FUNC_3(struct module *VAR_0, unsigned long VAR_1)
{
 struct mod_section *VAR_2 = &VAR_0->arch.got;
 int VAR_3 = VAR_2->num_entries;
 struct got_entry *VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4)
  return (unsigned long)VAR_4;


 VAR_4 = (struct got_entry *)VAR_2->shdr->sh_addr;
 VAR_4[VAR_3] = FUNC_1(VAR_1);

 VAR_2->num_entries++;
 FUNC_0(VAR_2->num_entries > VAR_2->max_entries);

 return (unsigned long)&VAR_4[VAR_3];
}
