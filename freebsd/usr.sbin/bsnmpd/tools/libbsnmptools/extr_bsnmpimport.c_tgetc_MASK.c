
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {int fp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static int32_t
FUNC_2(void)
{
 int VAR_3;

 if (VAR_2 != -1) {
  VAR_3 = VAR_2;
  VAR_2 = -1;
  return (VAR_3);
 }

 for (;;) {
  if (VAR_1 == ((void*)0))
   return (VAR_0);

  if ((VAR_3 = FUNC_0(VAR_1->fp)) != VAR_0)
   return (VAR_3);

  FUNC_1();
 }
}
