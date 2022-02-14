
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_crtc {int base; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct vc4_crtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 struct platform_device* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct device *VAR_2,
       void *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_3(VAR_1);
 struct vc4_crtc *VAR_5 = FUNC_1(VAR_1);

 FUNC_4(&VAR_5->base);

 FUNC_0(VAR_0, 0);

 FUNC_2(VAR_4, ((void*)0));
}
