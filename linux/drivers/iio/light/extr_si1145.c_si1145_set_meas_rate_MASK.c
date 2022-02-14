
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si1145_data {int client; TYPE_1__* part_info; } ;
struct TYPE_2__ {scalar_t__ uncompressed_meas_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct si1145_data *VAR_1, int VAR_2)
{
 if (VAR_1->part_info->uncompressed_meas_rate)
  return FUNC_1(VAR_1->client,
   VAR_0, VAR_2);
 else
  return FUNC_0(VAR_1->client,
   VAR_0, VAR_2);
}
