
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef unsigned int u_int ;
struct msdosfsmount {int pm_nxtfree; int pm_maxcluster; unsigned int* pm_inusemap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct msdosfsmount*,int,int,int,int*,int*) ;
 int FUNC_2 (struct msdosfsmount*,int,int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct msdosfsmount *VAR_3, u_long VAR_4, u_long VAR_5,
    u_long VAR_6, u_long *VAR_7, u_long *VAR_8)
{
 u_long VAR_9;
 u_long VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u_long VAR_15 = 0;
 u_int VAR_16;

 FUNC_0(("clusteralloc(): find %lu clusters\n", VAR_5));

 if (VAR_4) {
  if ((VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5)) >= VAR_5)
   return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 } else
  VAR_10 = 0;

 VAR_11 = VAR_3->pm_nxtfree;
 VAR_12 = 0;

 for (VAR_13 = VAR_11; VAR_13 <= VAR_3->pm_maxcluster;) {
  VAR_9 = VAR_13 / VAR_2;
  VAR_16 = VAR_3->pm_inusemap[VAR_9];
  VAR_16 |= (1U << (VAR_13 % VAR_2)) - 1;
  if (VAR_16 != VAR_1) {
   VAR_13 = VAR_9 * VAR_2 + FUNC_3(VAR_16 ^ VAR_1) - 1;
   if ((VAR_14 = FUNC_2(VAR_3, VAR_13, VAR_5)) >= VAR_5)
    return (FUNC_1(VAR_3, VAR_13, VAR_5, VAR_6, VAR_7, VAR_8));
   if (VAR_14 > VAR_12) {
    VAR_15 = VAR_13;
    VAR_12 = VAR_14;
   }
   VAR_13 += VAR_14 + 1;
   continue;
  }
  VAR_13 += VAR_2 - VAR_13 % VAR_2;
 }
 for (VAR_13 = 0; VAR_13 < VAR_11;) {
  VAR_9 = VAR_13 / VAR_2;
  VAR_16 = VAR_3->pm_inusemap[VAR_9];
  VAR_16 |= (1U << (VAR_13 % VAR_2)) - 1;
  if (VAR_16 != VAR_1) {
   VAR_13 = VAR_9 * VAR_2 + FUNC_3(VAR_16 ^ VAR_1) - 1;
   if ((VAR_14 = FUNC_2(VAR_3, VAR_13, VAR_5)) >= VAR_5)
    return (FUNC_1(VAR_3, VAR_13, VAR_5, VAR_6, VAR_7, VAR_8));
   if (VAR_14 > VAR_12) {
    VAR_15 = VAR_13;
    VAR_12 = VAR_14;
   }
   VAR_13 += VAR_14 + 1;
   continue;
  }
  VAR_13 += VAR_2 - VAR_13 % VAR_2;
 }

 if (!VAR_12)
  return (VAR_0);

 if (VAR_10)
  return (FUNC_1(VAR_3, VAR_4, VAR_10, VAR_6, VAR_7, VAR_8));
 else
  return (FUNC_1(VAR_3, VAR_15, VAR_12, VAR_6, VAR_7, VAR_8));
}
