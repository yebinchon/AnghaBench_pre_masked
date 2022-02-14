
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap_rmap {unsigned long raddr; } ;
struct gmap {int guest_table_lock; int mm; struct gmap* parent; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_2 (struct gmap*,unsigned long) ;
 int FUNC_3 (struct gmap*,unsigned long,struct gmap_rmap*) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gmap*,unsigned long,unsigned long,int) ;
 int * FUNC_7 (struct gmap*,unsigned long,int **) ;
 scalar_t__ FUNC_8 (struct gmap*,unsigned long,int ) ;
 int FUNC_9 (struct gmap_rmap*) ;
 struct gmap_rmap* FUNC_10 (int,int ) ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned long,int *,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct gmap *VAR_8, unsigned long VAR_9, pte_t VAR_10)
{
 struct gmap *VAR_11;
 struct gmap_rmap *VAR_12;
 unsigned long VAR_13, VAR_14;
 spinlock_t *VAR_15;
 pte_t *VAR_16, *VAR_17;
 int VAR_18;
 int VAR_19;

 FUNC_0(!FUNC_4(VAR_8));
 VAR_11 = VAR_8->parent;
 VAR_18 = (FUNC_11(VAR_10) & VAR_6) ? VAR_4 : VAR_5;

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->raddr = (VAR_9 & VAR_3) | VAR_7;

 while (1) {
  VAR_14 = FUNC_11(VAR_10) & VAR_3;
  VAR_13 = FUNC_2(VAR_11, VAR_14);
  if (FUNC_1(VAR_13)) {
   VAR_19 = VAR_13;
   break;
  }
  VAR_19 = FUNC_13(VAR_2);
  if (VAR_19)
   break;
  VAR_19 = -VAR_0;
  VAR_16 = FUNC_7(VAR_11, VAR_14, &VAR_15);
  if (VAR_16) {
   FUNC_15(&VAR_8->guest_table_lock);

   VAR_17 = (pte_t *) FUNC_8(VAR_8, VAR_9, 0);
   if (!VAR_17) {
    FUNC_16(&VAR_8->guest_table_lock);
    FUNC_5(VAR_15);
    FUNC_14();
    break;
   }
   VAR_19 = FUNC_12(VAR_8->mm, VAR_9, VAR_16, VAR_17, VAR_10);
   if (VAR_19 > 0) {

    FUNC_3(VAR_8, VAR_13, VAR_12);
    VAR_12 = ((void*)0);
    VAR_19 = 0;
   }
   FUNC_5(VAR_15);
   FUNC_16(&VAR_8->guest_table_lock);
  }
  FUNC_14();
  if (!VAR_19)
   break;
  VAR_19 = FUNC_6(VAR_11, VAR_14, VAR_13, VAR_18);
  if (VAR_19)
   break;
 }
 FUNC_9(VAR_12);
 return VAR_19;
}
