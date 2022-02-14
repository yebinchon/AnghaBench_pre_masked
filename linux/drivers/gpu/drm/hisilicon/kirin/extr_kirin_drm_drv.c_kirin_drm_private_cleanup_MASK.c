
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_drm_private {int hw_ctx; } ;
struct kirin_drm_data {int (* cleanup_hw_ctx ) (int ) ;} ;
struct drm_device {struct kirin_drm_private* dev_private; int dev; } ;


 int FUNC_0 (int ,struct kirin_drm_private*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 struct kirin_drm_private *VAR_1 = VAR_0->dev_private;
 struct kirin_drm_data *VAR_2;

 VAR_2 = (struct kirin_drm_data *)FUNC_1(VAR_0->dev);
 if (VAR_2->cleanup_hw_ctx)
  VAR_2->cleanup_hw_ctx(VAR_1->hw_ctx);

 FUNC_0(VAR_0->dev, VAR_1);
 VAR_0->dev_private = ((void*)0);
}
