
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 static int VAR_5;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8;

 if (VAR_5)
  return VAR_5;

 VAR_8 = FUNC_3(VAR_0);

 if (VAR_8 & (VAR_3 | VAR_4))
  VAR_6 = FUNC_1(VAR_8);

 if (VAR_8 & (VAR_1 | VAR_2))
  VAR_7 = FUNC_0(VAR_8);

 VAR_5 = 1 << (11 + FUNC_2(VAR_7, VAR_6));
 return VAR_5;
}
