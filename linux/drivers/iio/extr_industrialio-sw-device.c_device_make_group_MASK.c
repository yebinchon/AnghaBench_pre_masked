
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ci_name; } ;
struct config_group {TYPE_1__ cg_item; } ;
struct iio_sw_device {struct config_group group; } ;


 struct config_group* FUNC_0 (struct iio_sw_device*) ;
 scalar_t__ FUNC_1 (struct iio_sw_device*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 struct iio_sw_device* FUNC_3 (int ,char const*) ;

__attribute__((used)) static struct config_group *FUNC_4(struct config_group *VAR_0,
           const char *VAR_1)
{
 struct iio_sw_device *VAR_2;

 VAR_2 = FUNC_3(VAR_0->cg_item.ci_name, VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 FUNC_2(&VAR_2->group.cg_item, "%s", VAR_1);

 return &VAR_2->group;
}
