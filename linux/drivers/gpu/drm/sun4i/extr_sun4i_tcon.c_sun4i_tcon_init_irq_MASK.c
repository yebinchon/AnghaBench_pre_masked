
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tcon {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int,int ,int ,int ,struct sun4i_tcon*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int VAR_0 ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
          struct sun4i_tcon *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_1);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_3, 0);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "Couldn't retrieve the TCON interrupt\n");
  return VAR_4;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0, 0,
          FUNC_1(VAR_1), VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_1, "Couldn't request the IRQ\n");
  return VAR_5;
 }

 return 0;
}
