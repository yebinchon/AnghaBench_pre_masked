
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdi_device {int dummy; } ;
struct device_node {struct sdi_device* data; } ;


 int FUNC_0 (struct sdi_device*) ;
 int FUNC_1 (struct sdi_device*) ;

void FUNC_2(struct device_node *VAR_0)
{
 struct sdi_device *VAR_1 = VAR_0->data;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
