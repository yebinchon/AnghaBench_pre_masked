
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cm32181_chip {int* conf_regs; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct cm32181_chip *VAR_7, int *VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 VAR_9 = VAR_7->conf_regs[VAR_2];
 VAR_9 &= VAR_0;
 VAR_9 >>= VAR_1;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
  if (VAR_9 == VAR_5[VAR_10]) {
   *VAR_8 = VAR_6[VAR_10];
   return VAR_4;
  }
 }

 return -VAR_3;
}
