
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bus_id; void* bus_type; } ;
struct TYPE_3__ {int config_type; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 void*** VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void)
{


 if (VAR_4->config_type != 0) {
  VAR_3[2] = FUNC_0(VAR_0, 2, 0);
  VAR_1[0].bus_id = 0;
  VAR_1[0].bus_type = VAR_2[VAR_4->config_type - 1][2];
  if (VAR_5 > 1) {
   VAR_1[1].bus_id = 1;
   VAR_1[1].bus_type =
       VAR_2[VAR_4->config_type - 1][4];
  }
 } else
  FUNC_1(VAR_6,
      ((void*)0));
}
