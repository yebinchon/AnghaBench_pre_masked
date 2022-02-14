
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {size_t class; } ;
struct sensor_data {int scale; TYPE_1__ info; } ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(u64 *VAR_1, struct sensor_data *VAR_2)
{
 if (VAR_0[VAR_2->info.class] != VAR_2->scale) {
  *VAR_1 *= VAR_0[VAR_2->info.class];
  FUNC_0(*VAR_1, VAR_2->scale);
 }
}
