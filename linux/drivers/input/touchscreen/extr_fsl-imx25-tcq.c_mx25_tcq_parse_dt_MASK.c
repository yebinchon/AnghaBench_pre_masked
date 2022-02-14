
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mx25_tcq_priv {int pen_threshold; int sample_count; int pen_debounce; int settling_time; int mode; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2,
        struct mx25_tcq_priv *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 u32 VAR_5;
 int VAR_6;


 VAR_3->pen_threshold = 500;
 VAR_3->sample_count = 3;
 VAR_3->pen_debounce = 1000000;
 VAR_3->settling_time = 250000;

 VAR_6 = FUNC_1(VAR_4, "fsl,wires", &VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "Failed to find fsl,wires properties\n");
  return VAR_6;
 }

 if (VAR_5 == 4) {
  VAR_3->mode = VAR_1;
 } else {
  FUNC_0(&VAR_2->dev, "%u-wire mode not supported\n", VAR_5);
  return -VAR_0;
 }


 FUNC_1(VAR_4, "fsl,pen-threshold", &VAR_3->pen_threshold);
 FUNC_1(VAR_4, "fsl,settling-time-ns", &VAR_3->settling_time);
 FUNC_1(VAR_4, "fsl,pen-debounce-ns", &VAR_3->pen_debounce);

 return 0;
}
