
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int lru; } ;
struct gmap {int guest_table_lock; int pt_list; int mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_1 (struct gmap*) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long,int ) ;
 unsigned long* FUNC_3 (struct gmap*,unsigned long,int) ;
 int FUNC_4 (struct gmap*,unsigned long) ;
 int FUNC_5 (int *,int *) ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct gmap *VAR_12, unsigned long VAR_13, unsigned long VAR_14,
      int VAR_15)
{
 unsigned long VAR_16, VAR_17;
 unsigned long *VAR_18, *VAR_19;
 struct page *VAR_20;
 int VAR_21;

 FUNC_0(!FUNC_1(VAR_12) || (VAR_14 & VAR_7));

 VAR_20 = FUNC_6(VAR_12->mm);
 if (!VAR_20)
  return -VAR_1;
 VAR_20->index = VAR_14 & VAR_8;
 if (VAR_15)
  VAR_20->index |= VAR_2;
 VAR_18 = (unsigned long *) FUNC_8(VAR_20);

 FUNC_9(&VAR_12->guest_table_lock);
 VAR_19 = FUNC_3(VAR_12, VAR_13, 1);
 if (!VAR_19) {
  VAR_21 = -VAR_0;
  goto out_free;
 }
 if (!(*VAR_19 & VAR_6)) {
  VAR_21 = 0;
  goto out_free;
 } else if (*VAR_19 & VAR_8) {
  VAR_21 = -VAR_0;
  goto out_free;
 }

 *VAR_19 = (unsigned long) VAR_18 | VAR_5 |
   (VAR_14 & VAR_9) | VAR_6;
 FUNC_5(&VAR_20->lru, &VAR_12->pt_list);
 if (VAR_15) {

  *VAR_19 &= ~VAR_6;
  FUNC_10(&VAR_12->guest_table_lock);
  return 0;
 }
 FUNC_10(&VAR_12->guest_table_lock);

 VAR_16 = (VAR_13 & VAR_10) | VAR_11;
 VAR_17 = VAR_14 & VAR_8 & VAR_3;
 VAR_21 = FUNC_2(VAR_12, VAR_16, VAR_17, VAR_4);
 FUNC_9(&VAR_12->guest_table_lock);
 if (!VAR_21) {
  VAR_19 = FUNC_3(VAR_12, VAR_13, 1);
  if (!VAR_19 || (*VAR_19 & VAR_8) !=
         (unsigned long) VAR_18)
   VAR_21 = -VAR_0;
  else
   *VAR_19 &= ~VAR_6;
 } else {
  FUNC_4(VAR_12, VAR_16);
 }
 FUNC_10(&VAR_12->guest_table_lock);
 return VAR_21;
out_free:
 FUNC_10(&VAR_12->guest_table_lock);
 FUNC_7(VAR_20);
 return VAR_21;

}
