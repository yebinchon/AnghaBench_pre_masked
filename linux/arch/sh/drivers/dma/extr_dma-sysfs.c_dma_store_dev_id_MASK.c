
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int dev_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,char const*) ;
 struct dma_channel* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct dma_channel *VAR_4 = FUNC_1(VAR_0);
 FUNC_0(VAR_4->dev_id, VAR_2);
 return VAR_3;
}
