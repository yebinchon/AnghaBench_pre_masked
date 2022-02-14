
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_bridge_data {int dummy; } ;
struct TYPE_6__ {int num_entries; } ;
struct TYPE_5__ {void* current_size; } ;
struct TYPE_4__ {int gatt; } ;


 TYPE_3__* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (struct agp_bridge_data *VAR_2)
{
 int VAR_3, VAR_4;
 void *VAR_5;

 VAR_5 = VAR_0->current_size;

 VAR_3 = FUNC_0(VAR_5)->num_entries;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  FUNC_2(VAR_4, 0);
 FUNC_1(VAR_3 - 1);

 FUNC_3(VAR_1);
 return 0;
}
