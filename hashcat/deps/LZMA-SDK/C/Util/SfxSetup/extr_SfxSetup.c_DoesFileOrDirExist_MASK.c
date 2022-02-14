
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BoolInt ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BoolInt FUNC_2(const WCHAR *VAR_3)
{
  WIN32_FIND_DATAW VAR_4;
  HANDLE VAR_5;
  VAR_5 = FUNC_1(VAR_3, &VAR_4);
  if (VAR_5 == VAR_1)
    return VAR_0;
  FUNC_0(VAR_5);
  return VAR_2;
}
