
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(const struct inode *VAR_1)
{
 if (VAR_1->i_sb->s_magic == VAR_0)
  return 1;

 return 0;
}
