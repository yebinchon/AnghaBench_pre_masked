
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 double VAR_0 ;

uint64_t FUNC_1(double VAR_1) {
  LARGE_INTEGER VAR_2;


  if (VAR_0 == 0) {
    return 0;
  }

  if (!FUNC_0(&VAR_2)) {
    return 0;
  }





  return (uint64_t) ((double) VAR_2.QuadPart * VAR_0 * VAR_1);
}
