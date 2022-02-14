
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct iio_dev {int dev; } ;
struct device_node {int dummy; } ;
struct at91_adc_state {int low_res; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ) ;
 struct iio_dev* FUNC_2 (struct at91_adc_state*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int,char const**) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,int *,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct at91_adc_state *VAR_3,
          struct platform_device *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_3);
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 int VAR_7, VAR_8, VAR_9 = 0;
 char *VAR_10, *VAR_11;
 u32 *VAR_12;

 VAR_7 = FUNC_5(VAR_6, "atmel,adc-res-names");
 if (VAR_7 < 2) {
  FUNC_0(&VAR_5->dev, "You must specified at least two resolution names for "
        "adc-res-names property in the DT\n");
  return VAR_7;
 }

 VAR_12 = FUNC_4(VAR_7, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 if (FUNC_8(VAR_6, "atmel,adc-res", VAR_12, VAR_7)) {
  FUNC_0(&VAR_5->dev, "Missing adc-res property in the DT.\n");
  VAR_9 = -VAR_0;
  goto ret;
 }

 if (FUNC_6(VAR_6, "atmel,adc-use-res", (const char **)&VAR_10))
  VAR_10 = "highres";

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_7(VAR_6, "atmel,adc-res-names", VAR_8, (const char **)&VAR_11))
   continue;

  if (FUNC_9(VAR_10, VAR_11))
   continue;

  VAR_3->res = VAR_12[VAR_8];
  if (!FUNC_9(VAR_10, "lowres"))
   VAR_3->low_res = 1;
  else
   VAR_3->low_res = 0;

  FUNC_1(&VAR_5->dev, "Resolution used: %u bits\n", VAR_3->res);
  goto ret;
 }

 FUNC_0(&VAR_5->dev, "There is no resolution for %s\n", VAR_10);

ret:
 FUNC_3(VAR_12);
 return VAR_9;
}
