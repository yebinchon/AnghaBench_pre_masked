
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct property {int dummy; } ;
struct msm_dsi_host {int num_data_lanes; int dlane_swap; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int VAR_0 ;
 struct property* FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,char*,int*,int) ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_5(struct msm_dsi_host *VAR_2,
        struct device_node *VAR_3)
{
 struct device *VAR_4 = &VAR_2->pdev->dev;
 struct property *VAR_5;
 u32 VAR_6[4];
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = FUNC_3(VAR_3, "data-lanes", &VAR_9);
 if (!VAR_5) {
  FUNC_1(VAR_4,
   "failed to find data lane mapping, using default\n");
  return 0;
 }

 VAR_10 = VAR_9 / sizeof(u32);

 if (VAR_10 < 1 || VAR_10 > 4) {
  FUNC_2(VAR_4, "bad number of data lanes\n");
  return -VAR_0;
 }

 VAR_2->num_data_lanes = VAR_10;

 VAR_7 = FUNC_4(VAR_3, "data-lanes", VAR_6,
      VAR_10);
 if (VAR_7) {
  FUNC_2(VAR_4, "failed to read lane data\n");
  return VAR_7;
 }





 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  const int *VAR_11 = VAR_1[VAR_8];
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   if (VAR_6[VAR_12] < 0 || VAR_6[VAR_12] > 3)
    FUNC_2(VAR_4, "bad physical lane entry %u\n",
     VAR_6[VAR_12]);

   if (VAR_11[VAR_6[VAR_12]] != VAR_12)
    break;
  }

  if (VAR_12 == VAR_10) {
   VAR_2->dlane_swap = VAR_8;
   return 0;
  }
 }

 return -VAR_0;
}
