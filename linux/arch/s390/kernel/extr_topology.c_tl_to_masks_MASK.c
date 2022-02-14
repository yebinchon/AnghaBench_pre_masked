
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union topology_entry {int nl; int cpu; TYPE_1__ container; } ;
struct sysinfo_15_1_x {scalar_t__ length; union topology_entry* tle; } ;
struct mask_info {int id; struct mask_info* next; } ;


 int FUNC_0 (int *,struct mask_info*,struct mask_info*,struct mask_info*) ;
 struct mask_info VAR_0 ;
 int FUNC_1 () ;
 struct mask_info VAR_1 ;
 union topology_entry* FUNC_2 (union topology_entry*) ;
 struct mask_info VAR_2 ;

__attribute__((used)) static void FUNC_3(struct sysinfo_15_1_x *VAR_3)
{
 struct mask_info *VAR_4 = &VAR_2;
 struct mask_info *VAR_5 = &VAR_0;
 struct mask_info *VAR_6 = &VAR_1;
 union topology_entry *VAR_7, *VAR_8;

 FUNC_1();
 VAR_7 = VAR_3->tle;
 VAR_8 = (union topology_entry *)((unsigned long)VAR_3 + VAR_3->length);
 while (VAR_7 < VAR_8) {
  switch (VAR_7->nl) {
  case 3:
   VAR_6 = VAR_6->next;
   VAR_6->id = VAR_7->container.id;
   break;
  case 2:
   VAR_5 = VAR_5->next;
   VAR_5->id = VAR_7->container.id;
   break;
  case 1:
   VAR_4 = VAR_4->next;
   VAR_4->id = VAR_7->container.id;
   break;
  case 0:
   FUNC_0(&VAR_7->cpu, VAR_6, VAR_5, VAR_4);
   break;
  default:
   FUNC_1();
   return;
  }
  VAR_7 = FUNC_2(VAR_7);
 }
}
