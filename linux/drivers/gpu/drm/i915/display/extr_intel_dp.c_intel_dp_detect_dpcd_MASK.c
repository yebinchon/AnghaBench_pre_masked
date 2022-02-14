
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_lspcon {scalar_t__ active; } ;
struct TYPE_2__ {int ddc; } ;
struct intel_dp {int* dpcd; int* downstream_ports; TYPE_1__ aux; scalar_t__ sink_count; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct intel_lspcon* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_lspcon*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct intel_dp *VAR_12)
{
 struct intel_lspcon *VAR_13 = FUNC_2(VAR_12);
 u8 *VAR_14 = VAR_12->dpcd;
 u8 VAR_15;

 if (FUNC_1(FUNC_7(VAR_12)))
  return VAR_9;

 if (VAR_13->active)
  FUNC_8(VAR_13);

 if (!FUNC_6(VAR_12))
  return VAR_10;


 if (!FUNC_3(VAR_14))
  return VAR_9;


 if (VAR_12->dpcd[VAR_1] >= 0x11 &&
     VAR_12->downstream_ports[0] & VAR_2) {

  return VAR_12->sink_count ?
  VAR_9 : VAR_10;
 }

 if (FUNC_5(VAR_12))
  return VAR_9;


 if (FUNC_4(&VAR_12->aux.ddc))
  return VAR_9;


 if (VAR_12->dpcd[VAR_1] >= 0x11) {
  VAR_15 = VAR_12->downstream_ports[0] & VAR_3;
  if (VAR_15 == VAR_5 ||
      VAR_15 == VAR_4)
   return VAR_11;
 } else {
  VAR_15 = VAR_12->dpcd[VAR_0] &
   VAR_7;
  if (VAR_15 == VAR_6 ||
      VAR_15 == VAR_8)
   return VAR_11;
 }


 FUNC_0("Broken DP branch device, ignoring\n");
 return VAR_10;
}
