
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct mga_connector {TYPE_1__* i2c; struct drm_connector base; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ,int *) ;
 int FUNC_3 (struct drm_connector*) ;
 struct mga_connector* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static struct drm_connector *FUNC_6(struct drm_device *VAR_4)
{
 struct drm_connector *VAR_5;
 struct mga_connector *VAR_6;

 VAR_6 = FUNC_4(sizeof(struct mga_connector), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = &VAR_6->base;
 VAR_6->i2c = FUNC_5(VAR_4);
 if (!VAR_6->i2c)
  FUNC_0("failed to add ddc bus\n");

 FUNC_2(VAR_4, VAR_5,
        &VAR_2,
        VAR_0,
        &VAR_6->i2c->adapter);

 FUNC_1(VAR_5, &VAR_3);

 FUNC_3(VAR_5);

 return VAR_5;
}
