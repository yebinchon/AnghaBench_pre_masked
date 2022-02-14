
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si1145_data {int meas_rate; TYPE_1__* part_info; } ;
struct TYPE_2__ {scalar_t__ uncompressed_meas_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct si1145_data *VAR_1, int *VAR_2, int *VAR_3)
{
 *VAR_2 = 32000;
 if (VAR_1->part_info->uncompressed_meas_rate)
  *VAR_3 = VAR_1->meas_rate;
 else
  *VAR_3 = FUNC_0(VAR_1->meas_rate);
 return VAR_0;
}
