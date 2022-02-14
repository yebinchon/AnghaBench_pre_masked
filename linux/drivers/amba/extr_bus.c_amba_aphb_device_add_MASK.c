
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* parent; void* platform_data; int coherent_dma_mask; } ;
struct amba_device {int* irq; unsigned int periphid; TYPE_1__ dev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 struct amba_device* FUNC_0 (int) ;
 int FUNC_1 (struct amba_device*,struct resource*) ;
 struct amba_device* FUNC_2 (char const*,int ,size_t) ;
 int FUNC_3 (struct amba_device*) ;

__attribute__((used)) static struct amba_device *
FUNC_4(struct device *VAR_1, const char *VAR_2,
       resource_size_t VAR_3, size_t VAR_4, int VAR_5, int VAR_6,
       void *VAR_7, unsigned int VAR_8, u64 VAR_9,
       struct resource *VAR_10)
{
 struct amba_device *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_11->dev.coherent_dma_mask = VAR_9;
 VAR_11->irq[0] = VAR_5;
 VAR_11->irq[1] = VAR_6;
 VAR_11->periphid = VAR_8;
 VAR_11->dev.platform_data = VAR_7;
 VAR_11->dev.parent = VAR_1;

 VAR_12 = FUNC_1(VAR_11, VAR_10);
 if (VAR_12) {
  FUNC_3(VAR_11);
  return FUNC_0(VAR_12);
 }

 return VAR_11;
}
