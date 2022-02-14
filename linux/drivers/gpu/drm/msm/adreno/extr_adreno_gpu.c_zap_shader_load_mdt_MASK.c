
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct msm_gpu {TYPE_1__* pdev; } ;
struct firmware {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef int ssize_t ;
typedef int phys_addr_t ;
struct TYPE_5__ {scalar_t__ fwloc; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct firmware const*) ;
 int VAR_8 ;
 int FUNC_3 (struct firmware const*) ;
 struct firmware* FUNC_4 (TYPE_2__*,char const*) ;
 char* FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_10 (int ,char*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int ) ;
 int FUNC_13 (struct firmware const*) ;
 int FUNC_14 (struct device*,struct firmware const*,char const*,int ,void*,int ,int,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct firmware const*) ;
 int FUNC_17 (struct resource*) ;
 TYPE_2__* FUNC_18 (struct msm_gpu*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_19(struct msm_gpu *VAR_10, const char *VAR_11,
  u32 VAR_12)
{
 struct device *VAR_13 = &VAR_10->pdev->dev;
 const struct firmware *VAR_14;
 struct device_node *VAR_15, *VAR_16;
 struct resource VAR_17;
 phys_addr_t VAR_18;
 ssize_t VAR_19;
 void *VAR_20 = ((void*)0);
 int VAR_21;

 if (!FUNC_1(VAR_0)) {
  VAR_9 = 0;
  return -VAR_2;
 }

 VAR_15 = FUNC_10(VAR_13->of_node, "zap-shader");
 if (!VAR_15) {
  VAR_9 = 0;
  return -VAR_3;
 }

 VAR_16 = FUNC_12(VAR_15, "memory-region", 0);
 FUNC_11(VAR_15);
 if (!VAR_16) {
  VAR_9 = 0;
  return -VAR_2;
 }

 VAR_21 = FUNC_9(VAR_16, 0, &VAR_17);
 FUNC_11(VAR_16);
 if (VAR_21)
  return VAR_21;

 VAR_18 = VAR_17.start;


 VAR_14 = FUNC_4(FUNC_18(VAR_10), VAR_11);
 if (FUNC_2(VAR_14)) {
  FUNC_0(VAR_13, "Unable to load %s\n", VAR_11);
  return FUNC_3(VAR_14);
 }


 VAR_19 = FUNC_13(VAR_14);
 if (VAR_19 < 0) {
  VAR_21 = VAR_19;
  goto out;
 }

 if (VAR_19 > FUNC_17(&VAR_17)) {
  FUNC_0(VAR_13,
   "memory region is too small to load the MDT\n");
  VAR_21 = -VAR_1;
  goto out;
 }


 VAR_20 = FUNC_7(VAR_18, VAR_19, VAR_8);
 if (!VAR_20) {
  VAR_21 = -VAR_4;
  goto out;
 }
 if (FUNC_18(VAR_10)->fwloc == VAR_6) {
  VAR_21 = FUNC_14(VAR_13, VAR_14, VAR_11, VAR_12,
    VAR_20, VAR_18, VAR_19, ((void*)0));
 } else {
  char *VAR_22;

  VAR_22 = FUNC_5(VAR_7, "qcom/%s", VAR_11);

  VAR_21 = FUNC_14(VAR_13, VAR_14, VAR_22, VAR_12,
    VAR_20, VAR_18, VAR_19, ((void*)0));
  FUNC_6(VAR_22);
 }
 if (VAR_21)
  goto out;


 VAR_21 = FUNC_15(VAR_12);





 if (VAR_21 == -VAR_5)
  VAR_9 = 0;
 else if (VAR_21)
  FUNC_0(VAR_13, "Unable to authorize the image\n");

out:
 if (VAR_20)
  FUNC_8(VAR_20);

 FUNC_16(VAR_14);

 return VAR_21;
}
