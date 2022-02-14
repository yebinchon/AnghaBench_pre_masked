
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ar8xxx_priv*,int,int) ;
 int FUNC_4 (struct ar8xxx_priv*,int,int) ;
 int FUNC_5 (struct ar8xxx_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_6(struct ar8xxx_priv *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_1(VAR_7);
 u32 VAR_10 = (VAR_2 |
     VAR_0 |
     VAR_1) <<
    FUNC_0(VAR_7);

 if (VAR_8) {
  FUNC_5(VAR_6, VAR_5,
      FUNC_2(VAR_7) << VAR_4,
      FUNC_2(VAR_7) << VAR_3);
  FUNC_4(VAR_6, VAR_9, VAR_10);
 } else {
  FUNC_5(VAR_6, VAR_5,
      FUNC_2(VAR_7) << VAR_3,
      FUNC_2(VAR_7) << VAR_4);
  FUNC_3(VAR_6, VAR_9, VAR_10);
 }
}
