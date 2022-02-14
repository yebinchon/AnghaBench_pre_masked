
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {char* name; int cleanup; int init; int read; } ;
struct iproc_rng200_dev {TYPE_1__ rng; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct iproc_rng200_dev* FUNC_6 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct iproc_rng200_dev *VAR_8;
 struct resource *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 int VAR_11;

 VAR_8 = FUNC_6(VAR_10, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_9 = FUNC_7(VAR_7, VAR_3, 0);
 if (!VAR_9) {
  FUNC_2(VAR_10, "failed to get rng resources\n");
  return -VAR_0;
 }

 VAR_8->base = FUNC_5(VAR_10, VAR_9);
 if (FUNC_0(VAR_8->base)) {
  FUNC_2(VAR_10, "failed to remap rng regs\n");
  return FUNC_1(VAR_8->base);
 }

 VAR_8->rng.name = "iproc-rng200",
 VAR_8->rng.read = VAR_6,
 VAR_8->rng.init = VAR_5,
 VAR_8->rng.cleanup = VAR_4,


 VAR_11 = FUNC_4(VAR_10, &VAR_8->rng);
 if (VAR_11) {
  FUNC_2(VAR_10, "hwrng registration failed\n");
  return VAR_11;
 }

 FUNC_3(VAR_10, "hwrng registered\n");

 return 0;
}
