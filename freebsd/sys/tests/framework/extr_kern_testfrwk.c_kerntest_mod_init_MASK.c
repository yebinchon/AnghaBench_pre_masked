
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_2__ {int kfrwk_testlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;



 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_5(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_6 = FUNC_4();
  break;
 case 129:
  FUNC_0();
  if (FUNC_2(&VAR_2.kfrwk_testlist)) {
   VAR_6 = 0;
  } else {
   VAR_6 = VAR_0;
  }
  FUNC_1();
  break;
 case 128:
  VAR_6 = FUNC_3();
  break;
 default:
  return (VAR_1);
 }
 return (VAR_6);
}
