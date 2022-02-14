
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; int * i_mapping; } ;
struct file {int f_mode; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ inuse; struct block_device* binding; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 const int VAR_5= FUNC_1(VAR_3);
 struct block_device *VAR_6;

 FUNC_2(&VAR_2);
 VAR_6 = VAR_1[VAR_5].binding;
 if (--VAR_1[VAR_5].inuse == 0)

  VAR_3->i_mapping = &VAR_3->i_data;
 FUNC_3(&VAR_2);

 FUNC_0(VAR_6, VAR_4->f_mode | VAR_0);
 return 0;
}
