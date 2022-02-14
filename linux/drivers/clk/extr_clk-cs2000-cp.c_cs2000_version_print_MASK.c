
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
 int FUNC_1 (struct device*,char*,char const*) ;
 struct device* FUNC_2 (struct cs2000_priv*) ;

__attribute__((used)) static int FUNC_3(struct cs2000_priv *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_3);
 s32 VAR_5;
 const char *VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_5 >> 3)
  return -VAR_1;

 switch (VAR_5 & VAR_2) {
 case 129:
  VAR_6 = "B2 / B3";
  break;
 case 128:
  VAR_6 = "C1";
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_4, "revision - %s\n", VAR_6);

 return 0;
}
