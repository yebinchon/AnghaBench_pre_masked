
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct papr_scm_priv {int bus; } ;


 int FUNC_0 (struct papr_scm_priv*) ;
 int FUNC_1 (struct papr_scm_priv*) ;
 int FUNC_2 (int ) ;
 struct papr_scm_priv* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct papr_scm_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->bus);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
