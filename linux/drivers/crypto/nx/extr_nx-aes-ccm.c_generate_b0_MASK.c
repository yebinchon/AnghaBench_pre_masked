
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, u8 *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7 = VAR_2;
 int VAR_8;

 FUNC_0(VAR_4, VAR_0, 16);

 VAR_6 = VAR_4[0];
 VAR_5 = VAR_6 + 1;


 *VAR_4 |= (8 * ((VAR_7 - 2) / 2));


 if (VAR_1)
  *VAR_4 |= 64;

 VAR_8 = FUNC_1(VAR_4 + 16 - VAR_5, VAR_3, VAR_5);

 return VAR_8;
}
