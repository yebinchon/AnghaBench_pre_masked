
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int co_usecount; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;

int
FUNC_2(void)
{


 if (VAR_1.co_usecount > 1) {
  FUNC_0("%d connections still active\n", VAR_1.co_usecount - 1);
  return VAR_0;
 }
 FUNC_1(&VAR_1);
 return 0;
}
