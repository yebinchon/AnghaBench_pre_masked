
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; int f_mode; } ;
struct TYPE_2__ {int * set_checksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_9, struct file *VAR_10)
{
 FUNC_0(&VAR_8);


 if ((VAR_6 && (VAR_10->f_flags & VAR_4)) ||
     (VAR_7 & VAR_2)) {
  FUNC_1(&VAR_8);
  return -VAR_0;
 }
 if (VAR_10->f_flags & VAR_4)
  VAR_7 |= VAR_2;
 if (VAR_10->f_mode & VAR_1)
  VAR_7 |= VAR_3;
 VAR_6++;

 FUNC_1(&VAR_8);

 return 0;
}
