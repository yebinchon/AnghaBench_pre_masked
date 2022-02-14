
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_ioctl_version_data {scalar_t__ impl_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tee_ioctl_version_data *VAR_1, const void *VAR_2)
{
 if (VAR_1->impl_id == VAR_0)
  return 1;
 else
  return 0;
}
