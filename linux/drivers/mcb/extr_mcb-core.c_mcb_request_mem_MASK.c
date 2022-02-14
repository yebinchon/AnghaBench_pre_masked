
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_6__ {int start; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct mcb_device {TYPE_3__ mem; TYPE_2__ dev; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (int ) ;
 struct resource* FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (TYPE_3__*) ;

struct resource *FUNC_3(struct mcb_device *VAR_1, const char *VAR_2)
{
 struct resource *VAR_3;
 u32 VAR_4;

 if (!VAR_2)
  VAR_2 = VAR_1->dev.driver->name;

 VAR_4 = FUNC_2(&VAR_1->mem);

 VAR_3 = FUNC_1(VAR_1->mem.start, VAR_4, VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return VAR_3;
}
