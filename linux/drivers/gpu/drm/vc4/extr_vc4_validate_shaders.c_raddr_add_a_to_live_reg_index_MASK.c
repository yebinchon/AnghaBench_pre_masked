
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static uint32_t
FUNC_1(uint64_t VAR_8)
{
 uint32_t VAR_9 = FUNC_0(VAR_8, VAR_6);
 uint32_t VAR_10 = FUNC_0(VAR_8, VAR_0);
 uint32_t VAR_11 = FUNC_0(VAR_8, VAR_4);
 uint32_t VAR_12 = FUNC_0(VAR_8, VAR_5);

 if (VAR_10 == VAR_1)
  return VAR_11;
 else if (VAR_10 == VAR_2 && VAR_9 != VAR_7)
  return 32 + VAR_12;
 else if (VAR_10 <= VAR_3)
  return 64 + VAR_10;
 else
  return ~0;
}
