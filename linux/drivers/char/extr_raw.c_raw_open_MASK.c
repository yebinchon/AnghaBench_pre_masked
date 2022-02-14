
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; struct block_device* private_data; int f_mapping; int f_flags; int * f_op; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_6__ {int i_mapping; } ;
struct TYPE_5__ {int inuse; struct block_device* binding; } ;
struct TYPE_4__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,int,int (*) (struct inode*,struct file*)) ;
 int FUNC_3 (struct block_device*,int) ;
 TYPE_3__* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct block_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_6, struct file *VAR_7)
{
 const int VAR_8 = FUNC_5(VAR_6);
 struct block_device *VAR_9;
 int VAR_10;

 if (VAR_8 == 0) {
  VAR_7->f_op = &VAR_3;
  return 0;
 }

 FUNC_6(&VAR_5);




 VAR_9 = VAR_4[VAR_8].binding;
 VAR_10 = -VAR_0;
 if (!VAR_9)
  goto out;
 FUNC_1(VAR_9);
 VAR_10 = FUNC_2(VAR_9, VAR_7->f_mode | VAR_1, FUNC_9);
 if (VAR_10)
  goto out;
 VAR_10 = FUNC_8(VAR_9, FUNC_0(VAR_9));
 if (VAR_10)
  goto out1;
 VAR_7->f_flags |= VAR_2;
 VAR_7->f_mapping = VAR_9->bd_inode->i_mapping;
 if (++VAR_4[VAR_8].inuse == 1)
  FUNC_4(VAR_7)->i_mapping =
   VAR_9->bd_inode->i_mapping;
 VAR_7->private_data = VAR_9;
 FUNC_7(&VAR_5);
 return 0;

out1:
 FUNC_3(VAR_9, VAR_7->f_mode | VAR_1);
out:
 FUNC_7(&VAR_5);
 return VAR_10;
}
