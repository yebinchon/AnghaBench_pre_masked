
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_accel_dev {int owner; int ref_count; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct adf_accel_dev *VAR_0)
{
 if (FUNC_0(1, &VAR_0->ref_count) == 0)
  FUNC_1(VAR_0->owner);
}
