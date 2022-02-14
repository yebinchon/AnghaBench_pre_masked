
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* recovery_cp; } ;
struct raid_set {int ctr_flags; TYPE_1__ md; } ;
typedef void* sector_t ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct raid_set*) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct raid_set *VAR_2, sector_t VAR_3)
{

 if (FUNC_0(VAR_2))
  VAR_2->md.recovery_cp = VAR_0;





 else if (FUNC_1(VAR_2))
  VAR_2->md.recovery_cp = VAR_3;




 else
  VAR_2->md.recovery_cp = FUNC_2(VAR_1, &VAR_2->ctr_flags)
         ? VAR_0 : VAR_3;
}
