
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar8xxx_priv*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int,int,int,int) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct ar8xxx_priv *VAR_1, int VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5 = 20;
 u32 VAR_6 = 0;

 while (1) {
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_6 & VAR_3) == VAR_4)
   return 0;

  if (VAR_5-- <= 0)
   break;

  FUNC_3(10);
  FUNC_1();
 }

 FUNC_2("ar8216: timeout on reg %08x: %08x & %08x != %08x\n",
        (unsigned int) VAR_2, VAR_6, VAR_3, VAR_4);
 return -VAR_0;
}
