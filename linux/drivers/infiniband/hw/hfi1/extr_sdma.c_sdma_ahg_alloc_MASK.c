
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int ahg_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct sdma_engine*,int) ;

int FUNC_5(struct sdma_engine *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (!VAR_2) {
  FUNC_4(VAR_2, -VAR_0);
  return -VAR_0;
 }
 while (1) {
  VAR_3 = FUNC_2(FUNC_0(VAR_2->ahg_bits));
  if (VAR_3 > 31) {
   FUNC_4(VAR_2, -VAR_1);
   return -VAR_1;
  }
  VAR_4 = FUNC_3(VAR_3, &VAR_2->ahg_bits);
  if (!VAR_4)
   break;
  FUNC_1();
 }
 FUNC_4(VAR_2, VAR_3);
 return VAR_3;
}
