
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_edp {int encoder; int dev; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int polled; } ;
struct edp_connector {struct drm_connector base; struct msm_edp* edp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_connector* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct drm_connector*,int ) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (int ,struct drm_connector*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct edp_connector* FUNC_4 (int,int ) ;

struct drm_connector *FUNC_5(struct msm_edp *VAR_6)
{
 struct drm_connector *VAR_7 = ((void*)0);
 struct edp_connector *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 VAR_8->edp = VAR_6;

 VAR_7 = &VAR_8->base;

 VAR_9 = FUNC_3(VAR_6->dev, VAR_7, &VAR_4,
   VAR_1);
 if (VAR_9)
  return FUNC_0(VAR_9);

 FUNC_2(VAR_7, &VAR_5);


 VAR_7->polled = VAR_0;


 VAR_7->interlace_allowed = 0;
 VAR_7->doublescan_allowed = 0;

 FUNC_1(VAR_7, VAR_6->encoder);

 return VAR_7;
}
