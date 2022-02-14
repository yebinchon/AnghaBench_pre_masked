
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int u_int ;
struct pn_softc {int mvs; int rvo; unsigned long long pll; int vst; int irt; int errata; scalar_t__ fsb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned long long*) ;
 int FUNC_7 (int,int,unsigned long long,unsigned long long*) ;

__attribute__((used)) static int
FUNC_8(struct pn_softc *VAR_2, int VAR_3, int VAR_4)
{
 uint64_t VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;
 u_int VAR_10;

 VAR_9 = FUNC_6(&VAR_5);
 if (VAR_9)
  return (VAR_9);

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_4(VAR_5);

 if (VAR_3 == VAR_6 && VAR_4 == VAR_7)
  return (0);





 while (VAR_7 > VAR_4) {
  VAR_10 = VAR_7 - (1 << VAR_2->mvs);
  VAR_9 = FUNC_7(VAR_6, (VAR_10 > 0) ? VAR_10 : 0, 1ULL, &VAR_5);
  if (VAR_9) {
   VAR_2->errata |= VAR_1;
   return (VAR_9);
  }
  VAR_7 = FUNC_4(VAR_5);
  FUNC_1(VAR_2->vst);
 }


 for (VAR_8 = VAR_2->rvo; VAR_8 > 0 && VAR_7 > 0; --VAR_8) {



  VAR_9 = FUNC_7(VAR_6, VAR_7 - 1, 1ULL, &VAR_5);
  if (VAR_9) {
   VAR_2->errata |= VAR_1;
   return (VAR_9);
  }
  VAR_7 = FUNC_4(VAR_5);
  FUNC_1(VAR_2->vst);
 }


 if (VAR_6 != VAR_3) {
  u_int VAR_11, VAR_12, VAR_13;

  VAR_11 = FUNC_2(VAR_3);
  VAR_12 = FUNC_2(VAR_6);

  while (FUNC_5(VAR_11 - VAR_12) > 2) {
   VAR_13 = (VAR_12 & 1) ? 1 : 2;
   if (VAR_3 > VAR_6) {
    if (VAR_6 > 7)
     VAR_10 = VAR_6 + VAR_13;
    else
     VAR_10 = FUNC_2(VAR_6) + VAR_13;
   } else
    VAR_10 = VAR_6 - VAR_13;
   VAR_9 = FUNC_7(VAR_10, VAR_7,
       VAR_2->pll * (uint64_t) VAR_2->fsb,
       &VAR_5);
   if (VAR_9) {
    VAR_2->errata |= VAR_1;
    return (VAR_9);
   }
   VAR_6 = FUNC_3(VAR_5);
   FUNC_0(VAR_2->irt);

   VAR_12 = FUNC_2(VAR_6);
  }

  VAR_9 = FUNC_7(VAR_3, VAR_7,
      VAR_2->pll * (uint64_t) VAR_2->fsb,
      &VAR_5);
  if (VAR_9) {
   VAR_2->errata |= VAR_1;
   return (VAR_9);
  }
  VAR_6 = FUNC_3(VAR_5);
  FUNC_0(VAR_2->irt);
 }


 if (VAR_7 != VAR_4) {
  VAR_9 = FUNC_7(VAR_6, VAR_4, 1ULL, &VAR_5);
  VAR_7 = FUNC_4(VAR_5);
  FUNC_1(VAR_2->vst);
 }


 if (VAR_6 != VAR_3 || VAR_7 != VAR_4)
  VAR_9 = VAR_0;

 return (VAR_9);
}
