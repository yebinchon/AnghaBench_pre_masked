
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint32_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int ecma_number_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

int32_t
FUNC_2 (ecma_number_t VAR_0)
{
  uint32_t VAR_1 = FUNC_1 (VAR_0);


  const int64_t VAR_2 = (1ll << 32);


  const uint32_t VAR_3 = (1ull << 31);

  int32_t VAR_4;

  if (VAR_1 >= VAR_3)
  {
    VAR_4 = (int32_t) (VAR_1 - VAR_2);
  }
  else
  {
    VAR_4 = (int32_t) VAR_1;
  }


  int64_t VAR_5 = VAR_1;

  FUNC_0 (VAR_5 >= 0);

  if (VAR_5 >= VAR_3)
  {
    FUNC_0 (VAR_4 == VAR_5 - VAR_2);
  }
  else
  {
    FUNC_0 (VAR_4 == VAR_5);
  }


  return VAR_4;
}
