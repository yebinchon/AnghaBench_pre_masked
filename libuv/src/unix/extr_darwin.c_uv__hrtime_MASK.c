
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_clocktype_t ;
typedef int uint64_t ;
struct TYPE_3__ {int numer; int denom; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

uint64_t FUNC_4(uv_clocktype_t VAR_2) {
  static mach_timebase_info_data_t VAR_3;

  if ((FUNC_0(VAR_1, VAR_3.numer) == 0 ||
       FUNC_0(VAR_1, VAR_3.denom) == 0) &&
      FUNC_3(&VAR_3) != VAR_0)
    FUNC_1();

  return FUNC_2() * VAR_3.numer / VAR_3.denom;
}
