
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_3__ {int minor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(&VAR_1);
 VAR_5 = FUNC_1(VAR_3);
 VAR_4->private_data = (void *) (unsigned long) VAR_5;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6)
  if (VAR_2[VAR_6].minor == VAR_5) {
   FUNC_3(&VAR_1);
   return 0;
  }
 FUNC_3(&VAR_1);
 return -VAR_0;
}
