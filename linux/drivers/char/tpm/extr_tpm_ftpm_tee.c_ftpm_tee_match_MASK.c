
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_ioctl_version_data {scalar_t__ impl_id; int gen_caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tee_ioctl_version_data *VAR_2, const void *VAR_3)
{



 if ((VAR_2->impl_id == VAR_1) &&
  (VAR_2->gen_caps & VAR_0))
  return 1;
 else
  return 0;
}
