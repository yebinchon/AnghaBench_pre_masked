
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_2(VAR_3, VAR_4);
 u32 VAR_7 = FUNC_3(VAR_3, VAR_4);
 u32 VAR_8 = FUNC_0(VAR_1 * VAR_7, VAR_6);

 if (VAR_8 > VAR_1)
  VAR_8 -= VAR_6;

 if (!FUNC_1(VAR_2, VAR_6))
  return -VAR_0;

 if (VAR_2 <= VAR_8)
  VAR_5 = 1;
 else {
  VAR_5 = VAR_2 / VAR_8;
  if (VAR_5 * VAR_8 < VAR_2)
   VAR_5++;
 }
 return VAR_5;
}
