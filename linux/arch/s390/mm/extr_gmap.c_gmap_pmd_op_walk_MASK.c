
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gmap {int guest_table_lock; TYPE_2__* mm; } ;
typedef int pmd_t ;
struct TYPE_3__ {int allow_gmap_hpage_1m; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gmap*) ;
 scalar_t__ FUNC_2 (struct gmap*,unsigned long,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline pmd_t *FUNC_7(struct gmap *VAR_0, unsigned long VAR_1)
{
 pmd_t *VAR_2;

 FUNC_0(FUNC_1(VAR_0));
 VAR_2 = (pmd_t *) FUNC_2(VAR_0, VAR_1, 1);
 if (!VAR_2)
  return ((void*)0);


 if (!VAR_0->mm->context.allow_gmap_hpage_1m)
  return FUNC_4(*VAR_2) ? ((void*)0) : VAR_2;

 FUNC_5(&VAR_0->guest_table_lock);
 if (FUNC_4(*VAR_2)) {
  FUNC_6(&VAR_0->guest_table_lock);
  return ((void*)0);
 }


 if (!FUNC_3(*VAR_2))
  FUNC_6(&VAR_0->guest_table_lock);
 return VAR_2;
}
