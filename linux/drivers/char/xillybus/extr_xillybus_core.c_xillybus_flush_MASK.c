
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; int private_data; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, fl_owner_t VAR_3)
{
 if (!(VAR_2->f_mode & VAR_0))
  return 0;

 return FUNC_0(VAR_2->private_data, VAR_1);
}
