
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dvo_device {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;

__attribute__((used)) static enum drm_connector_status FUNC_1(struct intel_dvo_device *VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_4, VAR_1, &VAR_5);

 if (VAR_5 & VAR_0)
  return VAR_2;
 else
  return VAR_3;
}
