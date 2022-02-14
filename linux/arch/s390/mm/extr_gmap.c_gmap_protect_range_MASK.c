
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_2 (struct gmap*,unsigned long) ;
 int FUNC_3 (struct gmap*) ;
 int FUNC_4 (struct gmap*,int *) ;
 int * FUNC_5 (struct gmap*,unsigned long) ;
 int FUNC_6 (struct gmap*,unsigned long,int *,int,unsigned long) ;
 int FUNC_7 (struct gmap*,unsigned long,int *,int,unsigned long) ;
 int FUNC_8 (struct gmap*,unsigned long,unsigned long,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gmap *VAR_5, unsigned long VAR_6,
         unsigned long VAR_7, int VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11;
 pmd_t *VAR_12;
 int VAR_13;

 FUNC_0(FUNC_3(VAR_5));
 while (VAR_7) {
  VAR_13 = -VAR_0;
  VAR_12 = FUNC_5(VAR_5, VAR_6);
  if (VAR_12) {
   if (!FUNC_9(*VAR_12)) {
    VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_12, VAR_8,
            VAR_9);
    if (!VAR_13) {
     VAR_7 -= VAR_4;
     VAR_6 += VAR_4;
    }
   } else {
    VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_12, VAR_8,
            VAR_9);
    if (!VAR_13) {
     VAR_11 = VAR_3 - (VAR_6 & ~VAR_2);
     VAR_7 = VAR_7 < VAR_11 ? 0 : VAR_7 - VAR_11;
     VAR_6 = (VAR_6 & VAR_2) + VAR_3;
    }
   }
   FUNC_4(VAR_5, VAR_12);
  }
  if (VAR_13) {
   if (VAR_13 == -VAR_1)
    return VAR_13;


   VAR_10 = FUNC_2(VAR_5, VAR_6);
   if (FUNC_1(VAR_10))
    return VAR_10;
   VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_10, VAR_8);
   if (VAR_13)
    return VAR_13;
  }
 }
 return 0;
}
