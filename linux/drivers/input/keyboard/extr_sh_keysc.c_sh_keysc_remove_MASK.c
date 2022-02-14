
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_keysc_priv {int iomem_base; int input; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct platform_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sh_keysc_priv*) ;
 struct sh_keysc_priv* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sh_keysc_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct sh_keysc_priv *VAR_3 = FUNC_4(VAR_2);

 FUNC_8(VAR_3, VAR_0, VAR_1);

 FUNC_1(VAR_3->input);
 FUNC_0(FUNC_5(VAR_2, 0), VAR_2);
 FUNC_2(VAR_3->iomem_base);

 FUNC_7(&VAR_2->dev);
 FUNC_6(&VAR_2->dev);

 FUNC_3(VAR_3);

 return 0;
}
