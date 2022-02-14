
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(const short VAR_1[8],
  int VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_0);
 size_t VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
  if (VAR_1[VAR_4] < 0 ||
      VAR_1[VAR_4] >= VAR_3)
   return 0;
 }

 if (VAR_2 < 0 || VAR_2 >= VAR_3)
  return 0;

 return 1;
}
