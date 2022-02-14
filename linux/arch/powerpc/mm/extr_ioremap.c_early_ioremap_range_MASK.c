
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long,scalar_t__,int ) ;

int FUNC_2(unsigned long VAR_1, phys_addr_t VAR_2,
   unsigned long VAR_3, pgprot_t VAR_4)
{
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_0) {
  int VAR_6 = FUNC_1(VAR_1 + VAR_5, VAR_2 + VAR_5, VAR_4);

  if (FUNC_0(VAR_6))
   return VAR_6;
 }

 return 0;
}
