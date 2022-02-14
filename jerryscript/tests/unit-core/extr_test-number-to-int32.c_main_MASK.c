
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uint32_num; scalar_t__ int32_num; int num; } ;
typedef TYPE_1__ uint32_test_case_t ;
typedef int uint32_t ;
typedef int test_cases_uint32 ;
typedef int test_cases_int32 ;
typedef TYPE_1__ const int32_test_case_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ const FUNC_1 (int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5 (void)
{
  FUNC_2 ();

  const uint32_test_case_t VAR_2[] =
  {

    { 1.0, 1 },
    { 0.0, 0 },
    { VAR_1, 0 },
    { -VAR_1, 0 },
    { VAR_0, 0 },
    { -VAR_0, 0 },
    { 0.1, 0 },
    { -0.1, 0 },
    { 1.1, 1 },
    { -1.1, 4294967295 },
    { 4294967295, 4294967295 },
    { -4294967295, 1 },
    { 4294967296, 0 },
    { -4294967296, 0 },
    { 4294967297, 1 },
    { -4294967297, 4294967295 }

  };

  for (uint32_t VAR_3 = 0;
       VAR_3 < sizeof (VAR_2) / sizeof (VAR_2[0]);
       VAR_3++)
  {
    FUNC_0 (FUNC_4 (VAR_2[VAR_3].num) == VAR_2[VAR_3].uint32_num);
  }

  int32_test_case_t VAR_4[] =
  {

    { 1.0, 1 },
    { 0.0, 0 },
    { VAR_1, 0 },
    { -VAR_1, 0 },
    { VAR_0, 0 },
    { -VAR_0, 0 },
    { 0.1, 0 },
    { -0.1, 0 },
    { 1.1, 1 },
    { -1.1, -1 },
    { 4294967295, -1 },
    { -4294967295, 1 },
    { 4294967296, 0 },
    { -4294967296, 0 },
    { 4294967297, 1 },
    { -4294967297, -1 },
    { 2147483648, -2147483648 },
    { -2147483648, -2147483648 },
    { 2147483647, 2147483647 },
    { -2147483647, -2147483647 },
    { -2147483649, 2147483647 },
    { 2147483649, -2147483647 }

  };

  for (uint32_t VAR_5 = 0;
       VAR_5 < sizeof (VAR_4) / sizeof (VAR_4[0]);
       VAR_5++)
  {
    FUNC_0 (FUNC_3 (VAR_4[VAR_5].num) == VAR_4[VAR_5].int32_num);
  }

  return 0;
}
