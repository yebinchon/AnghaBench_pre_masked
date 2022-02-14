
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_aes_dev {TYPE_2__* engine; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int max_qlen; } ;
struct TYPE_4__ {TYPE_1__ queue; } ;


 struct omap_aes_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct omap_aes_dev *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d\n", VAR_3->engine->queue.max_qlen);
}
