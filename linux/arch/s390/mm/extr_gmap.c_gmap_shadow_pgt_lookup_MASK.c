
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; } ;
struct gmap {int guest_table_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct gmap*) ;
 unsigned long* FUNC_2 (struct gmap*,unsigned long,int) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct gmap *VAR_5, unsigned long VAR_6,
      unsigned long *VAR_7, int *VAR_8,
      int *VAR_9)
{
 unsigned long *VAR_10;
 struct page *VAR_11;
 int VAR_12;

 FUNC_0(!FUNC_1(VAR_5));
 FUNC_4(&VAR_5->guest_table_lock);
 VAR_10 = FUNC_2(VAR_5, VAR_6, 1);
 if (VAR_10 && !(*VAR_10 & VAR_3)) {

  VAR_11 = FUNC_3(*VAR_10 >> VAR_2);
  *VAR_7 = VAR_11->index & ~VAR_1;
  *VAR_8 = !!(*VAR_10 & VAR_4);
  *VAR_9 = !!(VAR_11->index & VAR_1);
  VAR_12 = 0;
 } else {
  VAR_12 = -VAR_0;
 }
 FUNC_5(&VAR_5->guest_table_lock);
 return VAR_12;

}
