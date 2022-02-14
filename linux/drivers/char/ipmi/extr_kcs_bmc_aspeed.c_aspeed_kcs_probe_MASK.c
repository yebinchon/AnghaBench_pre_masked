
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {TYPE_1__* parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int str; int odr; int idr; } ;
struct kcs_bmc {TYPE_2__ ioreg; int miscdev; int io_outputb; int io_inputb; } ;
struct aspeed_kcs_bmc {int map; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct kcs_bmc*,struct platform_device*) ;
 int FUNC_2 (struct kcs_bmc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct kcs_bmc*,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct kcs_bmc*) ;
 struct kcs_bmc* FUNC_6 (struct device*,int,int) ;
 struct aspeed_kcs_bmc* FUNC_7 (struct kcs_bmc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int*) ;
 int FUNC_10 (char*,int,int,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct aspeed_kcs_bmc *VAR_8;
 struct kcs_bmc *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_9(VAR_7->of_node, "kcs_chan", &VAR_10);
 if ((VAR_12 != 0) || (VAR_10 == 0 || VAR_10 > VAR_2)) {
  FUNC_4(VAR_7, "no valid 'kcs_chan' configured\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_9(VAR_7->of_node, "kcs_addr", &VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_7, "no valid 'kcs_addr' configured\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_10);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_9);
 VAR_8->map = FUNC_11(VAR_7->parent->of_node);
 if (FUNC_0(VAR_8->map)) {
  FUNC_4(VAR_7, "Couldn't get regmap\n");
  return -VAR_0;
 }

 VAR_9->ioreg = VAR_5[VAR_10 - 1];
 VAR_9->io_inputb = VAR_3;
 VAR_9->io_outputb = VAR_4;

 FUNC_5(VAR_7, VAR_9);

 FUNC_3(VAR_9, VAR_11);
 FUNC_2(VAR_9, 1);
 VAR_12 = FUNC_1(VAR_9, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(&VAR_9->miscdev);
 if (VAR_12) {
  FUNC_4(VAR_7, "Unable to register device\n");
  return VAR_12;
 }

 FUNC_10("channel=%u addr=0x%x idr=0x%x odr=0x%x str=0x%x\n",
  VAR_10, VAR_11,
  VAR_9->ioreg.idr, VAR_9->ioreg.odr, VAR_9->ioreg.str);

 return 0;
}
