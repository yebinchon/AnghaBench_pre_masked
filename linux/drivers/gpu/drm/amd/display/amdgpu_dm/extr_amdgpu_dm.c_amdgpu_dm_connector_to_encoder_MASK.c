
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_connector {int * encoder_ids; int dev; } ;


 struct drm_encoder* FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static struct drm_encoder *FUNC_1(struct drm_connector *VAR_0)
{
 return FUNC_0(VAR_0->dev, ((void*)0), VAR_0->encoder_ids[0]);
}
