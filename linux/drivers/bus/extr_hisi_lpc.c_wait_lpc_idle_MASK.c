
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
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_6, unsigned int VAR_7)
{
 u32 VAR_8;

 do {
  VAR_8 = FUNC_1(VAR_6 + VAR_3);
  if (VAR_8 & VAR_5)
   return (VAR_8 & VAR_4) ? 0 : -VAR_0;
  FUNC_0(VAR_2);
 } while (--VAR_7);

 return -VAR_1;
}
