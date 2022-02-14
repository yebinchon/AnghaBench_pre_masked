
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

int FUNC_2(struct radeon_device *VAR_2)
{
 if (FUNC_1(VAR_2, VAR_0) != VAR_1)
  FUNC_0("rv770_set_sw_state failed\n");
 return 0;
}
