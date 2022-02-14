
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int lru; } ;
struct gmap {int edat_level; int guest_table_lock; int crst_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_1 (struct page*,int ) ;
 struct page* FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned long*,int ) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (struct gmap*,unsigned long,unsigned long,unsigned long) ;
 unsigned long* FUNC_6 (struct gmap*,unsigned long,int) ;
 int FUNC_7 (struct gmap*,unsigned long) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct gmap *VAR_15, unsigned long VAR_16, unsigned long VAR_17,
      int VAR_18)
{
 unsigned long VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned long *VAR_23, *VAR_24;
 struct page *VAR_25;
 int VAR_26;

 FUNC_0(!FUNC_4(VAR_15));

 VAR_25 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_25)
  return -VAR_2;
 VAR_25->index = VAR_17 & VAR_11;
 if (VAR_18)
  VAR_25->index |= VAR_4;
 VAR_23 = (unsigned long *) FUNC_9(VAR_25);

 FUNC_10(&VAR_15->guest_table_lock);
 VAR_24 = FUNC_6(VAR_15, VAR_16, 3);
 if (!VAR_24) {
  VAR_26 = -VAR_1;
  goto out_free;
 }
 if (!(*VAR_24 & VAR_8)) {
  VAR_26 = 0;
  goto out_free;
 } else if (*VAR_24 & VAR_11) {
  VAR_26 = -VAR_1;
 }
 FUNC_3(VAR_23, VAR_7);

 *VAR_24 = (unsigned long) VAR_23 | VAR_9 |
   VAR_13 | VAR_8;
 if (VAR_15->edat_level >= 1)
  *VAR_24 |= (VAR_17 & VAR_12);
 FUNC_8(&VAR_25->lru, &VAR_15->crst_list);
 if (VAR_18) {

  *VAR_24 &= ~VAR_8;
  FUNC_11(&VAR_15->guest_table_lock);
  return 0;
 }
 FUNC_11(&VAR_15->guest_table_lock);

 VAR_19 = (VAR_16 & VAR_6) | VAR_14;
 VAR_20 = VAR_17 & VAR_11;
 VAR_21 = ((VAR_17 & VAR_10) >> 6) * VAR_5;
 VAR_22 = ((VAR_17 & VAR_9) + 1) * VAR_5 - VAR_21;
 VAR_26 = FUNC_5(VAR_15, VAR_19, VAR_20 + VAR_21, VAR_22);
 FUNC_10(&VAR_15->guest_table_lock);
 if (!VAR_26) {
  VAR_24 = FUNC_6(VAR_15, VAR_16, 3);
  if (!VAR_24 || (*VAR_24 & VAR_11) !=
         (unsigned long) VAR_23)
   VAR_26 = -VAR_1;
  else
   *VAR_24 &= ~VAR_8;
 } else {
  FUNC_7(VAR_15, VAR_19);
 }
 FUNC_11(&VAR_15->guest_table_lock);
 return VAR_26;
out_free:
 FUNC_11(&VAR_15->guest_table_lock);
 FUNC_1(VAR_25, VAR_0);
 return VAR_26;
}
