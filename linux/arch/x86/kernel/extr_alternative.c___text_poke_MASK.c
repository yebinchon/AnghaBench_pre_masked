
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int temp_mm_state_t ;
struct page {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ,int) ;
 int * FUNC_8 (int ,scalar_t__,int **) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (void*,void const*,size_t) ;
 int FUNC_14 (int *,void const*,size_t) ;
 int FUNC_15 (struct page*,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (int ,scalar_t__,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,scalar_t__,int *,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 struct page* FUNC_23 (void*) ;
 struct page* FUNC_24 (void*) ;

__attribute__((used)) static void *FUNC_25(void *VAR_7, const void *VAR_8, size_t VAR_9)
{
 bool VAR_10 = FUNC_16(VAR_7) + VAR_9 > VAR_2;
 struct page *VAR_11[2] = {((void*)0)};
 temp_mm_state_t VAR_12;
 unsigned long VAR_13;
 pte_t VAR_14, *VAR_15;
 spinlock_t *VAR_16;
 pgprot_t VAR_17;





 FUNC_0(!VAR_4);

 if (!FUNC_6((unsigned long)VAR_7)) {
  VAR_11[0] = FUNC_24(VAR_7);
  if (VAR_10)
   VAR_11[1] = FUNC_24(VAR_7 + VAR_2);
 } else {
  VAR_11[0] = FUNC_23(VAR_7);
  FUNC_3(!FUNC_1(VAR_11[0]));
  if (VAR_10)
   VAR_11[1] = FUNC_23(VAR_7 + VAR_2);
 }




 FUNC_0(!VAR_11[0] || (VAR_10 && !VAR_11[1]));

 FUNC_12(VAR_13);





 VAR_17 = FUNC_4(FUNC_17(VAR_0) & ~VAR_3);




 VAR_15 = FUNC_8(VAR_6, VAR_5, &VAR_16);




 FUNC_2(!VAR_15);

 VAR_14 = FUNC_15(VAR_11[0], VAR_17);
 FUNC_20(VAR_6, VAR_5, VAR_15, VAR_14);

 if (VAR_10) {
  VAR_14 = FUNC_15(VAR_11[1], VAR_17);
  FUNC_20(VAR_6, VAR_5 + VAR_2, VAR_15 + 1, VAR_14);
 }





 VAR_12 = FUNC_22(VAR_6);

 FUNC_9();
 FUNC_14((u8 *)VAR_5 + FUNC_16(VAR_7), VAR_8, VAR_9);
 FUNC_10();





 FUNC_5();

 FUNC_18(VAR_6, VAR_5, VAR_15);
 if (VAR_10)
  FUNC_18(VAR_6, VAR_5 + VAR_2, VAR_15 + 1);






 FUNC_21(VAR_12);





 FUNC_7(VAR_6, VAR_5, VAR_5 +
      (VAR_10 ? 2 : 1) * VAR_2,
      VAR_1, 0);





 FUNC_0(FUNC_13(VAR_7, VAR_8, VAR_9));

 FUNC_19(VAR_15, VAR_16);
 FUNC_11(VAR_13);
 return VAR_7;
}
