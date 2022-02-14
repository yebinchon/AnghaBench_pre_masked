
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsl_msi_irq {int * vectors; scalar_t__ reg; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2)
{
 struct fsl_msi_irq *VAR_3 = VAR_2;
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1 + VAR_3->reg);
 VAR_5 = 0;
 while (VAR_4 != 0) {
  if (VAR_4 & 1)
   FUNC_1(VAR_3->vectors[VAR_5], ((void*)0));
  VAR_4 >>= 1;
  VAR_5++;
 }

 return (VAR_0);
}
