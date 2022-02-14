
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef int u_long ;
struct tte {int tte_data; } ;
struct TYPE_10__ {int resident_count; int wired_count; } ;
struct pmap {TYPE_2__ pm_stats; } ;
struct TYPE_9__ {int tte_list; } ;
struct TYPE_11__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pmap*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct tte*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct tte*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*) ;

int
FUNC_12(struct pmap *VAR_10, struct pmap *VAR_11, struct tte *VAR_12,
    vm_offset_t VAR_13)
{
 vm_page_t VAR_14;
 u_long VAR_15;

 FUNC_8(&VAR_9, VAR_2);
 VAR_15 = FUNC_6(&VAR_12->tte_data);
 if ((VAR_15 & VAR_3) == 0) {
  VAR_14 = FUNC_0(FUNC_4(VAR_15));
  FUNC_3(&VAR_14->md.tte_list, VAR_12, VAR_8);
  if ((VAR_15 & VAR_7) != 0)
   VAR_10->pm_stats.wired_count--;
  if ((VAR_15 & VAR_4) != 0) {
   if ((VAR_15 & VAR_6) != 0)
    FUNC_11(VAR_14);
   if ((VAR_15 & VAR_5) != 0)
    FUNC_10(VAR_14, VAR_0);
   if (FUNC_2(&VAR_14->md.tte_list))
    FUNC_9(VAR_14, VAR_1);
   VAR_10->pm_stats.resident_count--;
  }
  FUNC_7(VAR_14, VAR_13);
 }
 FUNC_5(VAR_12);
 if (FUNC_1(VAR_10))
  return (0);
 return (1);
}
