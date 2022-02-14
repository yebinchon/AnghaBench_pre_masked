
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int DP; int* train_set; int lane_count; int * link_status; int * link_configuration; int output_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (struct gma_encoder*,int ,int *,int) ;
 int FUNC_5 (struct gma_encoder*) ;
 int FUNC_6 (struct gma_encoder*,int,int ) ;
 int FUNC_7 (struct gma_encoder*,int) ;
 int FUNC_8 (struct gma_encoder*,int ) ;
 int FUNC_9 (struct gma_encoder*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct gma_encoder *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct cdv_intel_dp *VAR_9 = VAR_7->dev_priv;
 int VAR_10;
 uint8_t VAR_11;
 bool VAR_12 = 0;
 int VAR_13;
 u32 VAR_14;
 uint32_t VAR_15 = VAR_9->DP;

 VAR_15 |= VAR_3;
 VAR_15 &= ~VAR_1;

 VAR_14 = VAR_15;
 VAR_14 |= VAR_2;

 FUNC_2(VAR_9->output_reg, VAR_14);
 FUNC_1(VAR_9->output_reg);
 FUNC_10(VAR_8);

 FUNC_0("Link config\n");

 FUNC_4(VAR_7, VAR_0,
      VAR_9->link_configuration,
      2);

 FUNC_11(VAR_9->train_set, 0, 4);
 VAR_11 = 0;
 VAR_13 = 0;
 VAR_12 = 0;

 FUNC_0("Start train\n");
  VAR_14 = VAR_15 | VAR_2;


 for (;;) {

  FUNC_0("DP Link Train Set %x, Link_config %x, %x\n",
    VAR_9->train_set[0],
    VAR_9->link_configuration[0],
    VAR_9->link_configuration[1]);

  if (!FUNC_6(VAR_7, VAR_14, VAR_4)) {
   FUNC_0("Failure in aux-transfer setting pattern 1\n");
  }
  FUNC_7(VAR_7, VAR_9->train_set[0]);


  FUNC_8(VAR_7, VAR_4);

  FUNC_12(200);
  if (!FUNC_5(VAR_7))
   break;

  FUNC_0("DP Link status %x, %x, %x, %x, %x, %x\n",
    VAR_9->link_status[0], VAR_9->link_status[1], VAR_9->link_status[2],
    VAR_9->link_status[3], VAR_9->link_status[4], VAR_9->link_status[5]);

  if (FUNC_3(VAR_9->link_status, VAR_9->lane_count)) {
   FUNC_0("PT1 train is done\n");
   VAR_12 = 1;
   break;
  }


  for (VAR_10 = 0; VAR_10 < VAR_9->lane_count; VAR_10++)
   if ((VAR_9->train_set[VAR_10] & VAR_5) == 0)
    break;
  if (VAR_10 == VAR_9->lane_count)
   break;


  if ((VAR_9->train_set[0] & VAR_6) == VAR_11) {
   ++VAR_13;
   if (VAR_13 == 5)
    break;
  } else
   VAR_13 = 0;
  VAR_11 = VAR_9->train_set[0] & VAR_6;


  FUNC_9(VAR_7);

 }

 if (!VAR_12) {
  FUNC_0("failure in DP patter 1 training, train set %x\n", VAR_9->train_set[0]);
 }

 VAR_9->DP = VAR_15;
}
