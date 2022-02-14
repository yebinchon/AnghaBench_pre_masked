
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si1145_data {int meas_rate; int lock; TYPE_1__* part_info; scalar_t__ autonomous; } ;
struct TYPE_2__ {scalar_t__ uncompressed_meas_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct si1145_data*,int) ;

__attribute__((used)) static int FUNC_4(struct si1145_data *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 if (VAR_2 <= 0 || VAR_2 > 32000)
  return -VAR_0;
 VAR_4 = 32000 / VAR_2;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->autonomous) {
  VAR_3 = FUNC_3(VAR_1, VAR_4);
  if (VAR_3)
   goto out;
 }
 if (VAR_1->part_info->uncompressed_meas_rate)
  VAR_1->meas_rate = VAR_4;
 else
  VAR_1->meas_rate = FUNC_2(VAR_4);

out:
 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
