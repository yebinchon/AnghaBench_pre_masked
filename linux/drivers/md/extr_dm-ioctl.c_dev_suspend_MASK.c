
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dm_ioctl {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_ioctl*) ;
 int FUNC_1 (struct dm_ioctl*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct dm_ioctl *VAR_2, size_t VAR_3)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_2);

 return FUNC_0(VAR_2);
}
