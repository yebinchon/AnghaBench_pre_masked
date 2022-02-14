
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_bitmap {int bm_bits; scalar_t__ bm_number_of_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long* FUNC_0 (struct drbd_bitmap*,scalar_t__) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct drbd_bitmap *VAR_3)
{
 unsigned long VAR_4;
 unsigned long *VAR_5, *VAR_6;
 int VAR_7;


 VAR_7 = (VAR_3->bm_bits & VAR_2);

 VAR_4 = (1UL << (VAR_7 & VAR_1)) -1;


 VAR_4 = FUNC_2(VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_3->bm_number_of_pages - 1);
 VAR_6 = VAR_5 + (VAR_7/VAR_0);
 if (VAR_4) {




  *VAR_6 |= ~VAR_4;
  VAR_6++;
 }

 if (VAR_0 == 32 && ((VAR_6 - VAR_5) & 1) == 1) {


  *VAR_6 = ~0UL;
 }
 FUNC_1(VAR_5);
}
