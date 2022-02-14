
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_2, s32 VAR_3)
{
 int VAR_4;

 while (VAR_3-- > 0) {
  VAR_4 = *VAR_2++;

  if (!FUNC_0(VAR_4) && VAR_4 != '_')
   return VAR_0;
 }

 return VAR_1;
}
