
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {TYPE_1__* ff; } ;
struct hidpp_ff_private_data {int dummy; } ;
struct TYPE_2__ {struct hidpp_ff_private_data* private; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct hidpp_ff_private_data*,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_3, int VAR_4, int VAR_5)
{
 struct hidpp_ff_private_data *VAR_6 = VAR_3->ff->private;
 u8 VAR_7[2];

 VAR_7[1] = VAR_5 ? VAR_0 : VAR_1;

 FUNC_1("St%sing playback of effect %d.\n", VAR_5?"art":"opp", VAR_4);

 return FUNC_2(VAR_6, VAR_4, VAR_2, VAR_7, FUNC_0(VAR_7));
}
