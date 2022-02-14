
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int extensions; } ;


 int VAR_0 ;

__attribute__((used)) static u8 *FUNC_0(const struct edid *VAR_1, int VAR_2)
{
 u8 *VAR_3 = ((void*)0);
 int VAR_4;


 if (VAR_1 == ((void*)0) || VAR_1->extensions == 0)
  return ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_1->extensions; VAR_4++) {
  VAR_3 = (u8 *)VAR_1 + VAR_0 * (VAR_4 + 1);
  if (VAR_3[0] == VAR_2)
   break;
 }

 if (VAR_4 == VAR_1->extensions)
  return ((void*)0);

 return VAR_3;
}
