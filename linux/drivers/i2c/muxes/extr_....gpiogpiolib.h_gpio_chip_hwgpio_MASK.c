
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {TYPE_1__* gdev; } ;
struct TYPE_2__ {struct gpio_desc const* descs; } ;



__attribute__((used)) static inline int FUNC_0(const struct gpio_desc *VAR_0)
{
 return VAR_0 - &VAR_0->gdev->descs[0];
}
