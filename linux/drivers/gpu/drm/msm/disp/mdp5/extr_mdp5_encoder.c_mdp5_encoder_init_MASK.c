
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_interface {scalar_t__ type; } ;
struct drm_encoder {int dummy; } ;
struct mdp5_encoder {int intf_lock; struct mdp5_interface* intf; struct mdp5_ctl* ctl; struct drm_encoder base; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_encoder* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct mdp5_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int,int *) ;
 struct mdp5_encoder* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_encoder*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;

struct drm_encoder *FUNC_7(struct drm_device *VAR_7,
          struct mdp5_interface *VAR_8,
          struct mdp5_ctl *VAR_9)
{
 struct drm_encoder *VAR_10 = ((void*)0);
 struct mdp5_encoder *VAR_11;
 int VAR_12 = (VAR_8->type == VAR_4) ?
  VAR_0 : VAR_1;
 int VAR_13;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto fail;
 }

 VAR_10 = &VAR_11->base;
 VAR_11->ctl = VAR_9;
 VAR_11->intf = VAR_8;

 FUNC_6(&VAR_11->intf_lock);

 FUNC_3(VAR_7, VAR_10, &VAR_5, VAR_12, ((void*)0));

 FUNC_2(VAR_10, &VAR_6);

 FUNC_1(VAR_11);

 return VAR_10;

fail:
 if (VAR_10)
  FUNC_5(VAR_10);

 return FUNC_0(VAR_13);
}
