
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_data {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ driver_data; } ;


 TYPE_1__* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static struct soc_data *FUNC_1(struct platform_device *VAR_0)
{
 return (struct soc_data *)
    FUNC_0(VAR_0)->driver_data;
}
