
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct flash_platform_data {char* name; } ;
struct TYPE_3__ {int num_resources; struct resource* resource; } ;


 int FUNC_0 (TYPE_1__*,struct flash_platform_data*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct flash_platform_data *VAR_1,
    struct resource *VAR_2, int VAR_3)
{
 VAR_1->name = "sa1100";
 VAR_0.resource = VAR_2;
 VAR_0.num_resources = VAR_3;
 FUNC_0(&VAR_0, VAR_1);
}
