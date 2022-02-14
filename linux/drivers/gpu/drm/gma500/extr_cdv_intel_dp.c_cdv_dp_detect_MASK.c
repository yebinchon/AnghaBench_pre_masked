
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int * dpcd; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct gma_encoder*,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum drm_connector_status FUNC_2(struct gma_encoder *VAR_3)
{
 struct cdv_intel_dp *VAR_4 = VAR_3->dev_priv;
 enum drm_connector_status VAR_5;

 VAR_5 = VAR_2;
 if (FUNC_1(VAR_3, 0x000, VAR_4->dpcd,
         sizeof (VAR_4->dpcd)) == sizeof (VAR_4->dpcd))
 {
  if (VAR_4->dpcd[VAR_0] != 0)
   VAR_5 = VAR_1;
 }
 if (VAR_5 == VAR_1)
  FUNC_0("DPCD: Rev=%x LN_Rate=%x LN_CNT=%x LN_DOWNSP=%x\n",
   VAR_4->dpcd[0], VAR_4->dpcd[1],
   VAR_4->dpcd[2], VAR_4->dpcd[3]);
 return VAR_5;
}
