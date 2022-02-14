
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2, VAR_3);
 u32 VAR_5 = FUNC_2(VAR_2, VAR_3);
 u32 VAR_6 = FUNC_0(VAR_0 * VAR_5, VAR_4);

 if (VAR_6 > VAR_0)
  VAR_6 -= VAR_4;

 if (VAR_1 <= VAR_6)
  return VAR_1;

 if (VAR_1 <= 2 * VAR_6)
  return FUNC_0(VAR_1 / 2, VAR_4);

 return VAR_6;
}
