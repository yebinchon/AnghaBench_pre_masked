
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ar8xxx_priv*,int ) ;

__attribute__((used)) static u32
FUNC_2(struct ar8xxx_priv *VAR_6, int VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_6, FUNC_0(VAR_7));




 if (VAR_8 & VAR_1 &&
     VAR_8 & VAR_0) {
  VAR_8 &= ~(VAR_3 | VAR_2);
  if (VAR_8 & VAR_5)
   VAR_8 |= VAR_3;
  if (VAR_8 & VAR_4)
   VAR_8 |= VAR_2;
 }

 return VAR_8;
}
