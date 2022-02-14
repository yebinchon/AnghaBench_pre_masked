
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct arasan_cf_dev {scalar_t__ vbase; TYPE_1__* host; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct arasan_cf_dev *VAR_10)
{
 struct device *VAR_11 = VAR_10->host->dev;

 FUNC_0(VAR_11, ": =========== REGISTER DUMP ===========");
 FUNC_0(VAR_11, ": CFI_STS: %x", FUNC_1(VAR_10->vbase + VAR_0));
 FUNC_0(VAR_11, ": IRQ_STS: %x", FUNC_1(VAR_10->vbase + VAR_6));
 FUNC_0(VAR_11, ": IRQ_EN: %x", FUNC_1(VAR_10->vbase + VAR_5));
 FUNC_0(VAR_11, ": OP_MODE: %x", FUNC_1(VAR_10->vbase + VAR_7));
 FUNC_0(VAR_11, ": CLK_CFG: %x", FUNC_1(VAR_10->vbase + VAR_1));
 FUNC_0(VAR_11, ": TM_CFG: %x", FUNC_1(VAR_10->vbase + VAR_8));
 FUNC_0(VAR_11, ": XFER_CTR: %x", FUNC_1(VAR_10->vbase + VAR_9));
 FUNC_0(VAR_11, ": GIRQ_STS: %x", FUNC_1(VAR_10->vbase + VAR_3));
 FUNC_0(VAR_11, ": GIRQ_STS_EN: %x", FUNC_1(VAR_10->vbase + VAR_4));
 FUNC_0(VAR_11, ": GIRQ_SGN_EN: %x", FUNC_1(VAR_10->vbase + VAR_2));
 FUNC_0(VAR_11, ": =====================================");
}
