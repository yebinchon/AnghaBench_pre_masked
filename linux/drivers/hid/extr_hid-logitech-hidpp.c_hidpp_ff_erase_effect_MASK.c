
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {TYPE_1__* ff; } ;
struct hidpp_ff_private_data {int dummy; } ;
struct TYPE_2__ {struct hidpp_ff_private_data* private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct hidpp_ff_private_data*,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, int VAR_2)
{
 struct hidpp_ff_private_data *VAR_3 = VAR_1->ff->private;
 u8 VAR_4 = 0;

 FUNC_0("Erasing effect %d.\n", VAR_2);

 return FUNC_1(VAR_3, VAR_2, VAR_0, &VAR_4, 1);
}
