
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->i_rdev);
 if (VAR_4 < VAR_0) {
  VAR_1--;
 }
 return 0;
}
