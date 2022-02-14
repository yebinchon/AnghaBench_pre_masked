
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 double VAR_0 ;
 int VAR_1 ;

void FUNC_2(void) {
  LARGE_INTEGER VAR_2;


  FUNC_0(&VAR_1);




  if (FUNC_1(&VAR_2)) {
    VAR_0 = 1.0 / VAR_2.QuadPart;
  } else {
    VAR_0= 0;
  }
}
