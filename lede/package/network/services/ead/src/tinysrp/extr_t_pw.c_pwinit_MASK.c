
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1()
{
  if(VAR_2 == ((void*)0)) {
    if((VAR_2 = FUNC_0(VAR_0)) == ((void*)0))
      return -1;
    VAR_2->state = VAR_1;
  }
  return 0;
}
