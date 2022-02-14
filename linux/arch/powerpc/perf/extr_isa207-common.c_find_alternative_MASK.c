
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u64 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u64 VAR_1, const unsigned int VAR_2[][VAR_0], int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  if (VAR_1 < VAR_2[VAR_4][0])
   break;

  for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_2[VAR_4][VAR_5]; ++VAR_5)
   if (VAR_1 == VAR_2[VAR_4][VAR_5])
    return VAR_4;
 }

 return -1;
}
