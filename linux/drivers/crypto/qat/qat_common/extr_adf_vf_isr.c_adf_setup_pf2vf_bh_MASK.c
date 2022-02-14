
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf2pf_lock; int pf2vf_bh_tasklet; } ;
struct adf_accel_dev {TYPE_1__ vf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct adf_accel_dev *VAR_1)
{
 FUNC_1(&VAR_1->vf.pf2vf_bh_tasklet,
       (void *)VAR_0, (unsigned long)VAR_1);

 FUNC_0(&VAR_1->vf.vf2pf_lock);
 return 0;
}
