
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cs2000_priv {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs2000_priv*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct cs2000_priv*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cs2000_priv *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_3);
 s32 VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
  if (!(VAR_5 & VAR_2))
   return 0;
  FUNC_3(1);
 }

 FUNC_1(VAR_4, "pll lock failed\n");

 return -VAR_1;
}
