
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iadev_priv {int carrier_detect; } ;
struct ia_reg {int member_1; int member_0; } ;


 int FUNC_0 (struct ia_reg const*) ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct iadev_priv*,int ) ;
 int FUNC_2 (struct iadev_priv*,struct ia_reg const*,int ) ;

__attribute__((used)) static void FUNC_3(struct iadev_priv *VAR_2)
{
 static const struct ia_reg VAR_3[] = {
  { 131, 0x17 },
  { 132, 0x01 },
  { 130, 0x01 },
  { 133, 0 },
  { 129, 0 },
  { 128, 0 }
 };
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_2->carrier_detect = (VAR_4 & VAR_1) ? 0 : 1;

 FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_3));
}
