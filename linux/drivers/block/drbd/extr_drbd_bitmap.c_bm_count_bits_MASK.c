
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_bitmap {unsigned long bm_bits; int bm_number_of_pages; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long* FUNC_0 (struct drbd_bitmap*,int) ;
 int FUNC_1 (unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long*,int) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_6(struct drbd_bitmap *VAR_5)
{
 unsigned long *VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = (1UL << (VAR_5->bm_bits & VAR_1)) -1;
 int VAR_9, VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_5->bm_number_of_pages - 1; VAR_9++) {
  VAR_6 = FUNC_0(VAR_5, VAR_9);
  VAR_7 += FUNC_2(VAR_6, VAR_2);
  FUNC_1(VAR_6);
  FUNC_3();
 }

 VAR_10 = ((VAR_5->bm_bits - 1) & VAR_3) >> VAR_4;
 VAR_6 = FUNC_0(VAR_5, VAR_9);
 VAR_7 += FUNC_2(VAR_6, VAR_10 * VAR_0);
 VAR_6[VAR_10] &= FUNC_4(VAR_8);
 VAR_7 += FUNC_5(VAR_6[VAR_10]);

 if (VAR_0 == 32 && (VAR_10 & 1) == 0)
  VAR_6[VAR_10+1] = 0;
 FUNC_1(VAR_6);
 return VAR_7;
}
