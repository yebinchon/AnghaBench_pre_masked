
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (unsigned long) ;
 int * FUNC_5 (int *,int *,unsigned long) ;
 int FUNC_6 (char*,unsigned long,unsigned long) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (unsigned long) ;

inline int FUNC_10(unsigned long VAR_9,
          unsigned long VAR_10, int VAR_11)
{
 pgd_t *VAR_12;
 unsigned long VAR_13;
 int VAR_14 = 0;

 VAR_9 &= VAR_2;
 VAR_10 &= VAR_2;

 VAR_13 = FUNC_0(VAR_10 + VAR_11);

 FUNC_6("dvma: mapping kern %08lx to virt %08lx\n", VAR_9, VAR_10);
 VAR_12 = FUNC_4(VAR_10);

 do {
  pmd_t *VAR_15;
  unsigned long VAR_16;

  if((VAR_15 = FUNC_5(&VAR_8, VAR_12, VAR_10)) == ((void*)0)) {
   VAR_14 = -VAR_0;
   goto out;
  }

  if((VAR_13 & VAR_4) > (VAR_10 & VAR_4))
   VAR_16 = (VAR_10 + (VAR_5-1)) & VAR_4;
  else
   VAR_16 = VAR_13;

  do {
   pte_t *VAR_17;
   unsigned long VAR_18;

   if((VAR_17 = FUNC_7(VAR_15, VAR_10)) == ((void*)0)) {
    VAR_14 = -VAR_0;
    goto out;
   }

   if((VAR_16 & VAR_6) > (VAR_10 & VAR_6))
    VAR_18 = (VAR_10 + (VAR_7-1)) & VAR_6;
   else
    VAR_18 = VAR_16;

   do {
    FUNC_6("mapping %08lx phys to %08lx\n",
      FUNC_1(VAR_9), VAR_10);
    FUNC_8(VAR_17, FUNC_3(FUNC_9(VAR_9),
           VAR_1));
    VAR_17++;
    VAR_9 += VAR_3;
    VAR_10 += VAR_3;
   } while(VAR_10 < VAR_18);

  } while(VAR_10 < VAR_16);

 } while(VAR_10 < VAR_13);

 FUNC_2();

 out:
 return VAR_14;
}
