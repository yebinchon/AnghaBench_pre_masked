
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long csr; } ;
struct TYPE_4__ {TYPE_1__ dir0; } ;


 TYPE_2__* VAR_0 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;


 VAR_2 = VAR_0->dir0.csr;





 while (VAR_2) {
  VAR_3 = FUNC_0(~VAR_2);
  VAR_2 &= VAR_2 - 1;
  if (VAR_3 == 55)
   FUNC_2(VAR_1);
  else
   FUNC_1(16 + VAR_3);
 }
}
