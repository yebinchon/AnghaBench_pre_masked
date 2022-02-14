
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ecma_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

bool
FUNC_2 (ecma_char_t VAR_10)
{
  if (VAR_10 <= VAR_6)
  {
    return (VAR_10 == VAR_4
            || VAR_10 == VAR_5
            || VAR_10 == VAR_1
            || VAR_10 == VAR_3);
  }
  else
  {
    return (VAR_10 == VAR_2
            || VAR_10 == VAR_0
            || (VAR_10 >= VAR_8[0]
                && VAR_10 <= VAR_8[0] + VAR_7[0])
            || FUNC_1 (VAR_10,
                                          VAR_9,
                                          FUNC_0 (VAR_9)));
  }
}
