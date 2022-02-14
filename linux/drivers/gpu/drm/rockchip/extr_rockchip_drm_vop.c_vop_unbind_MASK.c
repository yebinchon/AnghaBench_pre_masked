
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int dclk; int hclk; int aclk; scalar_t__ rgb; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vop* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct vop*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct vop *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->rgb)
  FUNC_3(VAR_3->rgb);

 FUNC_2(VAR_0);
 FUNC_4(VAR_3);

 FUNC_0(VAR_3->aclk);
 FUNC_0(VAR_3->hclk);
 FUNC_0(VAR_3->dclk);
}
