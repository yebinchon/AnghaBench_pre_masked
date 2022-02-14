
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct applespi_data* i_private; } ;
struct file {struct applespi_data* private_data; } ;
struct applespi_data {int tp_dim_min_x; int tp_dim_min_y; int tp_dim_max_x; int tp_dim_max_y; TYPE_2__* touchpad_input_dev; int tp_dim_val; } ;
struct TYPE_3__ {int product; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (int ,int,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct applespi_data *VAR_2 = VAR_0->i_private;

 VAR_1->private_data = VAR_2;

 FUNC_1(VAR_2->tp_dim_val, sizeof(VAR_2->tp_dim_val),
   "0x%.4x %dx%d+%u+%u\n",
   VAR_2->touchpad_input_dev->id.product,
   VAR_2->tp_dim_min_x, VAR_2->tp_dim_min_y,
   VAR_2->tp_dim_max_x - VAR_2->tp_dim_min_x,
   VAR_2->tp_dim_max_y - VAR_2->tp_dim_min_y);

 return FUNC_0(VAR_0, VAR_1);
}
