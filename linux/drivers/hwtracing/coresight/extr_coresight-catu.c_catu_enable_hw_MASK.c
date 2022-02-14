
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etr_buf {scalar_t__ mode; struct catu_etr_buf* private; } ;
struct device {int dummy; } ;
struct catu_etr_buf {int sladdr; } ;
struct catu_drvdata {int base; TYPE_1__* csdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct catu_drvdata*) ;
 scalar_t__ FUNC_2 (struct catu_drvdata*) ;
 int FUNC_3 (struct catu_drvdata*,int ) ;
 int FUNC_4 (struct catu_drvdata*,int) ;
 int FUNC_5 (struct catu_drvdata*,int ) ;
 int FUNC_6 (struct catu_drvdata*,int ) ;
 int FUNC_7 (struct catu_drvdata*,int) ;
 int FUNC_8 (struct catu_drvdata*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct device*,char*,char*) ;
 int FUNC_11 (struct device*,char*) ;

__attribute__((used)) static int FUNC_12(struct catu_drvdata *VAR_7, void *VAR_8)
{
 int VAR_9;
 u32 VAR_10, VAR_11;
 struct etr_buf *VAR_12 = VAR_8;
 struct device *VAR_13 = &VAR_7->csdev->dev;

 if (FUNC_2(VAR_7))
  FUNC_11(VAR_13, "Timeout while waiting for READY\n");

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 & FUNC_0(VAR_0)) {
  FUNC_11(VAR_13, "CATU is already enabled\n");
  return -VAR_5;
 }

 VAR_9 = FUNC_9(VAR_7->base);
 if (VAR_9)
  return VAR_9;

 VAR_10 |= FUNC_0(VAR_0);

 if (VAR_12 && VAR_12->mode == VAR_6) {
  struct catu_etr_buf *VAR_14 = VAR_12->private;

  VAR_11 = VAR_3;
  FUNC_3(VAR_7, VAR_4);
  FUNC_8(VAR_7, VAR_14->sladdr);
  FUNC_5(VAR_7, VAR_1);
 } else {
  VAR_11 = VAR_2;
  FUNC_8(VAR_7, 0);
  FUNC_5(VAR_7, 0);
 }

 FUNC_6(VAR_7, 0);
 FUNC_7(VAR_7, VAR_11);
 FUNC_4(VAR_7, VAR_10);
 FUNC_10(VAR_13, "Enabled in %s mode\n",
  (VAR_11 == VAR_2) ?
  "Pass through" :
  "Translate");
 return 0;
}
