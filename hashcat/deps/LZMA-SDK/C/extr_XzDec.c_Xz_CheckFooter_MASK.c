
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef scalar_t__ CXzStreamFlags ;
typedef scalar_t__ Byte ;
typedef int BoolInt ;


 scalar_t__ FUNC_0 (scalar_t__ const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;

__attribute__((used)) static BoolInt FUNC_3(CXzStreamFlags VAR_2, UInt64 VAR_3, const Byte *VAR_4)
{
  return VAR_3 == (((UInt64)FUNC_2(VAR_4 + 4) + 1) << 2)
      && FUNC_2(VAR_4) == FUNC_0(VAR_4 + 4, 6)
      && VAR_2 == FUNC_1(VAR_4 + 8)
      && VAR_4[10] == VAR_0
      && VAR_4[11] == VAR_1;
}
