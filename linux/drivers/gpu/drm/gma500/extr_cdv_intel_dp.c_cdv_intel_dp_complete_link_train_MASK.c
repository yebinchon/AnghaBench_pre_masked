
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int DP; int output_reg; int lane_count; int * link_status; int * train_set; int * link_configuration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct gma_encoder*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct gma_encoder*,int ,int ) ;
 int FUNC_7 (struct gma_encoder*) ;
 int FUNC_8 (struct gma_encoder*) ;
 int FUNC_9 (struct gma_encoder*,int,int ) ;
 int FUNC_10 (struct gma_encoder*,int ) ;
 int FUNC_11 (struct gma_encoder*) ;
 int FUNC_12 (struct gma_encoder*,int ) ;
 int FUNC_13 (struct gma_encoder*) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct gma_encoder *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->base.dev;
 struct cdv_intel_dp *VAR_7 = VAR_5->dev_priv;
 bool VAR_8 = 0;
 int VAR_9, VAR_10;
 u32 VAR_11;
 uint32_t VAR_12 = VAR_7->DP;


 VAR_9 = 0;
 VAR_10 = 0;
 VAR_8 = 0;

 FUNC_0("\n");
  VAR_11 = VAR_12 | VAR_1;

 for (;;) {

  FUNC_0("DP Link Train Set %x, Link_config %x, %x\n",
    VAR_7->train_set[0],
    VAR_7->link_configuration[0],
    VAR_7->link_configuration[1]);


  if (!FUNC_9(VAR_5, VAR_11,
          VAR_2)) {
   FUNC_0("Failure in aux-transfer setting pattern 2\n");
  }


  if (VAR_10 > 5) {
   FUNC_1("failed to train DP, aborting\n");
   FUNC_8(VAR_5);
   break;
  }

  FUNC_10(VAR_5, VAR_7->train_set[0]);

  FUNC_12(VAR_5, VAR_2);

  FUNC_14(1000);
  if (!FUNC_7(VAR_5))
   break;

  FUNC_0("DP Link status %x, %x, %x, %x, %x, %x\n",
    VAR_7->link_status[0], VAR_7->link_status[1], VAR_7->link_status[2],
    VAR_7->link_status[3], VAR_7->link_status[4], VAR_7->link_status[5]);


  if (!FUNC_5(VAR_7->link_status, VAR_7->lane_count)) {
   FUNC_11(VAR_5);
   VAR_10++;
   continue;
  }

  if (FUNC_4(VAR_5)) {
   FUNC_0("PT2 train is done\n");
   VAR_8 = 1;
   break;
  }


  if (VAR_9 > 5) {
   FUNC_8(VAR_5);
   FUNC_11(VAR_5);
   VAR_9 = 0;
   VAR_10++;
   continue;
  }


  FUNC_13(VAR_5);
  ++VAR_9;

 }

 VAR_11 = VAR_12 | VAR_0;

 FUNC_3(VAR_7->output_reg, VAR_11);
 FUNC_2(VAR_7->output_reg);
 FUNC_6(VAR_5,
        VAR_4, VAR_3);
}
