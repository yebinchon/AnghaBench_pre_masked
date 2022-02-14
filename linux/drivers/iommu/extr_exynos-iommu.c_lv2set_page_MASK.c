
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysmmu_pte_t ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(sysmmu_pte_t *VAR_5, phys_addr_t VAR_6, size_t VAR_7,
         int VAR_8, short *VAR_9)
{
 if (VAR_7 == VAR_3) {
  if (FUNC_0(!FUNC_3(VAR_5)))
   return -VAR_1;

  FUNC_7(VAR_5, FUNC_6(VAR_6, VAR_8));
  *VAR_9 -= 1;
 } else {
  int VAR_10;
  dma_addr_t VAR_11 = FUNC_8(VAR_5);

  FUNC_1(VAR_4, VAR_11,
     sizeof(*VAR_5) * VAR_2,
     VAR_0);
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++, VAR_5++) {
   if (FUNC_0(!FUNC_3(VAR_5))) {
    if (VAR_10 > 0)
     FUNC_4(VAR_5 - VAR_10, 0, sizeof(*VAR_5) * VAR_10);
    return -VAR_1;
   }

   *VAR_5 = FUNC_5(VAR_6, VAR_8);
  }
  FUNC_2(VAR_4, VAR_11,
        sizeof(*VAR_5) * VAR_2,
        VAR_0);
  *VAR_9 -= VAR_2;
 }

 return 0;
}
