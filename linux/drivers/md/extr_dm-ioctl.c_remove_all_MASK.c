
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dm_ioctl {int flags; scalar_t__ data_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct dm_ioctl *VAR_2, size_t VAR_3)
{
 FUNC_0(1, !!(VAR_2->flags & VAR_0), 0);
 VAR_2->data_size = 0;
 return 0;
}
