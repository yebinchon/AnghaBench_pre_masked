
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {void* platform_data; } ;
struct TYPE_5__ {int num_resources; TYPE_1__ dev; struct resource* resource; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(struct resource *VAR_1, int VAR_2, void *VAR_3)
{
 VAR_0.resource = VAR_1;
 VAR_0.num_resources = VAR_2;
 VAR_0.dev.platform_data = VAR_3;
 return FUNC_0(&VAR_0);
}
