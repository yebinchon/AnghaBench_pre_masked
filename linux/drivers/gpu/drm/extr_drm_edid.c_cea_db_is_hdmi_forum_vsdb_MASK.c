
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static bool FUNC_2(const u8 *VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_1(VAR_2) != VAR_1)
  return 0;

 if (FUNC_0(VAR_2) < 7)
  return 0;

 VAR_3 = VAR_2[3] << 16 | VAR_2[2] << 8 | VAR_2[1];

 return VAR_3 == VAR_0;
}
