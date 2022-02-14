
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct hidpp_ff_private_data*,int ,int ,int*,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_5, u16 VAR_6)
{
 struct hidpp_ff_private_data *VAR_7 = VAR_5->ff->private;
 u8 VAR_8[VAR_0];

 FUNC_1("Setting autocenter to %d.\n", VAR_6);


 VAR_8[1] = VAR_4 | VAR_3;

 VAR_8[2] = VAR_8[3] = VAR_8[4] = VAR_8[5] = 0;

 VAR_8[8] = VAR_8[14] = VAR_6 >> 11;
 VAR_8[9] = VAR_8[15] = (VAR_6 >> 3) & 255;
 VAR_8[6] = VAR_8[16] = VAR_6 >> 9;
 VAR_8[7] = VAR_8[17] = (VAR_6 >> 1) & 255;

 VAR_8[10] = VAR_8[11] = VAR_8[12] = VAR_8[13] = 0;

 FUNC_2(VAR_7, VAR_2, VAR_1, VAR_8, FUNC_0(VAR_8));
}
