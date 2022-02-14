
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {scalar_t__ force; } ;
struct amdgpu_dm_connector {TYPE_1__ base; int * dc_sink; int fake_enable; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct amdgpu_dm_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_1(struct drm_connector *VAR_4, bool VAR_5)
{
 bool VAR_6;
 struct amdgpu_dm_connector *VAR_7 = FUNC_0(VAR_4);
 if (VAR_7->base.force == VAR_1 &&
     !VAR_7->fake_enable)
  VAR_6 = (VAR_7->dc_sink != ((void*)0));
 else
  VAR_6 = (VAR_7->base.force == VAR_0);

 return (VAR_6 ? VAR_2 :
   VAR_3);
}
