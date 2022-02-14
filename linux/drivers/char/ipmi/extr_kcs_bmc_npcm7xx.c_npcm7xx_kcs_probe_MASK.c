
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device {TYPE_1__* parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct npcm7xx_kcs_bmc {TYPE_3__* reg; int map; } ;
struct TYPE_5__ {int str; int odr; int idr; } ;
struct kcs_bmc {TYPE_2__ ioreg; int miscdev; int io_outputb; int io_inputb; } ;
struct TYPE_6__ {int sts; int dob; int dib; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct kcs_bmc*) ;
 struct kcs_bmc* FUNC_3 (struct device*,int,int) ;
 struct npcm7xx_kcs_bmc* FUNC_4 (struct kcs_bmc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kcs_bmc*,struct platform_device*) ;
 int FUNC_7 (struct kcs_bmc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (char*,int,int ,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct npcm7xx_kcs_bmc *VAR_8;
 struct kcs_bmc *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_8(VAR_7->of_node, "kcs_chan", &VAR_10);
 if (VAR_11 != 0 || VAR_10 == 0 || VAR_10 > VAR_2) {
  FUNC_1(VAR_7, "no valid 'kcs_chan' configured\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_10);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_9);
 VAR_8->map = FUNC_10(VAR_7->parent->of_node);
 if (FUNC_0(VAR_8->map)) {
  FUNC_1(VAR_7, "Couldn't get regmap\n");
  return -VAR_0;
 }
 VAR_8->reg = &VAR_5[VAR_10 - 1];

 VAR_9->ioreg.idr = VAR_8->reg->dib;
 VAR_9->ioreg.odr = VAR_8->reg->dob;
 VAR_9->ioreg.str = VAR_8->reg->sts;
 VAR_9->io_inputb = VAR_3;
 VAR_9->io_outputb = VAR_4;

 FUNC_2(VAR_7, VAR_9);

 FUNC_7(VAR_9, 1);
 VAR_11 = FUNC_6(VAR_9, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(&VAR_9->miscdev);
 if (VAR_11) {
  FUNC_1(VAR_7, "Unable to register device\n");
  return VAR_11;
 }

 FUNC_9("channel=%u idr=0x%x odr=0x%x str=0x%x\n",
  VAR_10,
  VAR_9->ioreg.idr, VAR_9->ioreg.odr, VAR_9->ioreg.str);

 return 0;
}
