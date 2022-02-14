
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_rsu_priv {int chan; } ;
struct platform_device {int dummy; } ;


 struct stratix10_rsu_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct stratix10_rsu_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->chan);
 return 0;
}
