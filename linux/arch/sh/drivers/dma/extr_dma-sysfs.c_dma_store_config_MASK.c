
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int vchan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (char const*,int *,int ) ;
 struct dma_channel* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct dma_channel *VAR_4 = FUNC_2(VAR_0);
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_2, ((void*)0), 0);
 FUNC_0(VAR_4->vchan, VAR_5);

 return VAR_3;
}
