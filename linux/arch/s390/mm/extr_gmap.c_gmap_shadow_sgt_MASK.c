
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
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
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

int FUNC_12(struct gmap *VAR_16, unsigned long VAR_17, unsigned long VAR_18,
      int VAR_19)
{
 unsigned long VAR_20, VAR_21, VAR_22, VAR_23;
 unsigned long *VAR_24, *VAR_25;
 struct page *VAR_26;
 int VAR_27;

 FUNC_0(!FUNC_4(VAR_16) || (VAR_18 & VAR_6));

 VAR_26 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_26)
  return -VAR_2;
 VAR_26->index = VAR_18 & VAR_11;
 if (VAR_19)
  VAR_26->index |= VAR_4;
 VAR_24 = (unsigned long *) FUNC_9(VAR_26);

 FUNC_10(&VAR_16->guest_table_lock);
 VAR_25 = FUNC_6(VAR_16, VAR_17, 2);
 if (!VAR_25) {
  VAR_27 = -VAR_1;
  goto out_free;
 }
 if (!(*VAR_25 & VAR_8)) {
  VAR_27 = 0;
  goto out_free;
 } else if (*VAR_25 & VAR_11) {
  VAR_27 = -VAR_1;
  goto out_free;
 }
 FUNC_3(VAR_24, VAR_14);

 *VAR_25 = (unsigned long) VAR_24 | VAR_9 |
   VAR_13 | VAR_8;
 if (VAR_16->edat_level >= 1)
  *VAR_25 |= VAR_18 & VAR_12;
 FUNC_8(&VAR_26->lru, &VAR_16->crst_list);
 if (VAR_19) {

  *VAR_25 &= ~VAR_8;
  FUNC_11(&VAR_16->guest_table_lock);
  return 0;
 }
 FUNC_11(&VAR_16->guest_table_lock);

 VAR_20 = (VAR_17 & VAR_7) | VAR_15;
 VAR_21 = VAR_18 & VAR_11;
 VAR_22 = ((VAR_18 & VAR_10) >> 6) * VAR_5;
 VAR_23 = ((VAR_18 & VAR_9) + 1) * VAR_5 - VAR_22;
 VAR_27 = FUNC_5(VAR_16, VAR_20, VAR_21 + VAR_22, VAR_23);
 FUNC_10(&VAR_16->guest_table_lock);
 if (!VAR_27) {
  VAR_25 = FUNC_6(VAR_16, VAR_17, 2);
  if (!VAR_25 || (*VAR_25 & VAR_11) !=
         (unsigned long) VAR_24)
   VAR_27 = -VAR_1;
  else
   *VAR_25 &= ~VAR_8;
 } else {
  FUNC_7(VAR_16, VAR_20);
 }
 FUNC_11(&VAR_16->guest_table_lock);
 return VAR_27;
out_free:
 FUNC_11(&VAR_16->guest_table_lock);
 FUNC_1(VAR_26, VAR_0);
 return VAR_27;
}
