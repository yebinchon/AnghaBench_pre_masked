
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long const*,int,int) ;

int FUNC_2(u32 VAR_0, u32 VAR_1,
         const unsigned long *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6 = -1;

 VAR_4 = VAR_0 % VAR_1;

 for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_6 + 1);
  FUNC_0(VAR_6 == VAR_3);
 }

 return VAR_6;
}
