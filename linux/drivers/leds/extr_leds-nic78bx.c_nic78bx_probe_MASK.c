
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nic78bx_led_data {scalar_t__ io_base; int lock; struct platform_device* pdev; } ;
struct TYPE_3__ {int cdev; struct nic78bx_led_data* data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct device*,char*) ;
 struct nic78bx_led_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int ,scalar_t__) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct nic78bx_led_data*) ;
 scalar_t__ FUNC_8 (struct resource*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct nic78bx_led_data *VAR_12;
 struct resource *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_2(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->pdev = VAR_10;
 FUNC_7(VAR_10, VAR_12);

 VAR_13 = FUNC_6(VAR_10, VAR_4, 0);
 if (!VAR_13) {
  FUNC_1(VAR_11, "missing IO resources\n");
  return -VAR_1;
 }

 if (FUNC_8(VAR_13) < VAR_8) {
  FUNC_1(VAR_11, "IO region too small\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_11, VAR_13->start, FUNC_8(VAR_13),
     VAR_5)) {
  FUNC_1(VAR_11, "failed to get IO region\n");
  return -VAR_0;
 }

 VAR_12->io_base = VAR_13->start;
 FUNC_9(&VAR_12->lock);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++) {
  VAR_9[VAR_15].data = VAR_12;

  VAR_14 = FUNC_3(VAR_11, &VAR_9[VAR_15].cdev);
  if (VAR_14)
   return VAR_14;
 }


 FUNC_5(VAR_7,
      VAR_12->io_base + VAR_6);

 return VAR_14;
}
