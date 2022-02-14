
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lboard_t ;
typedef int klinfo_t ;


 int * FUNC_0 (int *,int) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *) ;

klinfo_t *FUNC_4(lboard_t *VAR_0, klinfo_t *VAR_1, unsigned char VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1 == (klinfo_t *)((void*)0)) {
  VAR_3 = 0;
 } else {
  for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_0); VAR_4++)
   if (VAR_1 == FUNC_0(VAR_0, VAR_4))
    break;
  VAR_3 = VAR_4;
  if (VAR_3 == FUNC_2(VAR_0)) {
   FUNC_3("find_component: Bad pointer: 0x%p\n", VAR_1);
   return (klinfo_t *)((void*)0);
  }
  VAR_3++;
 }

 for (; VAR_3 < FUNC_2(VAR_0); VAR_3++) {
  VAR_1 = FUNC_0(VAR_0, VAR_3);
  if (FUNC_1(VAR_1) == VAR_2)
   return VAR_1;
 }


 return (klinfo_t *)((void*)0);
}
