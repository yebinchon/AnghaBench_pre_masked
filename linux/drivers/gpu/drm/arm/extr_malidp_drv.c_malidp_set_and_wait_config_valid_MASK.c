
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_hw_device {TYPE_1__* hw; } ;
struct malidp_drm {int config_valid; int wq; struct malidp_hw_device* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
struct TYPE_2__ {scalar_t__ (* in_config_mode ) (struct malidp_hw_device*) ;int (* set_config_valid ) (struct malidp_hw_device*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct malidp_hw_device*,int) ;
 scalar_t__ FUNC_4 (struct malidp_hw_device*) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_3)
{
 struct malidp_drm *VAR_4 = VAR_3->dev_private;
 struct malidp_hw_device *VAR_5 = VAR_4->dev;
 int VAR_6;

 VAR_5->hw->set_config_valid(VAR_5, 1);

 if (VAR_5->hw->in_config_mode(VAR_5)) {
  FUNC_1(&VAR_4->config_valid, VAR_1);
  return 0;
 }

 VAR_6 = FUNC_5(VAR_4->wq,
   FUNC_0(&VAR_4->config_valid) == VAR_1,
   FUNC_2(VAR_2));

 return (VAR_6 > 0) ? 0 : -VAR_0;
}
