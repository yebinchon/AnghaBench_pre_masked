
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct input_dev {TYPE_1__* ff; } ;
struct hidpp_ff_private_data {int dummy; } ;
struct TYPE_2__ {struct hidpp_ff_private_data* private; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct hidpp_ff_private_data*,int ,int ,int*,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2, u16 VAR_3)
{
 struct hidpp_ff_private_data *VAR_4 = VAR_2->ff->private;
 u8 VAR_5[4];

 FUNC_1("Setting gain to %d.\n", VAR_3);

 VAR_5[0] = VAR_3 >> 8;
 VAR_5[1] = VAR_3 & 255;
 VAR_5[2] = 0;
 VAR_5[3] = 0;

 FUNC_2(VAR_4, VAR_0, VAR_1, VAR_5, FUNC_0(VAR_5));
}
