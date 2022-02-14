
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2rng {int hvapi_major; } ;



 unsigned long VAR_0 ;

 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct n2rng *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 if (VAR_1->hvapi_major == 1) {
  VAR_2 = FUNC_2();
 } else {





  VAR_2 = FUNC_1(0UL, ~0UL, &VAR_3, &VAR_3, &VAR_3, &VAR_3);
  switch (VAR_2) {
  case 128:
  case 129:
   break;
  default:
   VAR_2 = VAR_0;
   break;
  }
 }

 return FUNC_0(VAR_2);
}
