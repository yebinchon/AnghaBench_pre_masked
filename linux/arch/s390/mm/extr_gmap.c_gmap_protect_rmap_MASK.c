
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_2 (struct gmap*,unsigned long) ;
 int FUNC_3 (struct gmap*,unsigned long,struct gmap_rmap*) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gmap*,unsigned long,unsigned long,int ) ;
 int * FUNC_7 (struct gmap*,unsigned long,int **) ;
 int FUNC_8 (struct gmap_rmap*) ;
 struct gmap_rmap* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,unsigned long,int *,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct gmap *VAR_6, unsigned long VAR_7,
        unsigned long VAR_8, unsigned long VAR_9)
{
 struct gmap *VAR_10;
 struct gmap_rmap *VAR_11;
 unsigned long VAR_12;
 spinlock_t *VAR_13;
 pte_t *VAR_14;
 int VAR_15;

 FUNC_0(!FUNC_4(VAR_6));
 VAR_10 = VAR_6->parent;
 while (VAR_9) {
  VAR_12 = FUNC_2(VAR_10, VAR_8);
  if (FUNC_1(VAR_12))
   return VAR_12;
  VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_2);
  if (!VAR_11)
   return -VAR_1;
  VAR_11->raddr = VAR_7;
  VAR_15 = FUNC_11(VAR_2);
  if (VAR_15) {
   FUNC_8(VAR_11);
   return VAR_15;
  }
  VAR_15 = -VAR_0;
  VAR_14 = FUNC_7(VAR_10, VAR_8, &VAR_13);
  if (VAR_14) {
   FUNC_13(&VAR_6->guest_table_lock);
   VAR_15 = FUNC_10(VAR_10->mm, VAR_8, VAR_14, VAR_5,
          VAR_4);
   if (!VAR_15)
    FUNC_3(VAR_6, VAR_12, VAR_11);
   FUNC_14(&VAR_6->guest_table_lock);
   FUNC_5(VAR_13);
  }
  FUNC_12();
  if (VAR_15) {
   FUNC_8(VAR_11);
   VAR_15 = FUNC_6(VAR_10, VAR_8, VAR_12, VAR_5);
   if (VAR_15)
    return VAR_15;
   continue;
  }
  VAR_8 += VAR_3;
  VAR_9 -= VAR_3;
 }
 return 0;
}
