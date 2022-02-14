
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grover_beep_info {int freq_regs; int enable_reg; } ;
struct TYPE_2__ {struct grover_beep_info grover; } ;
struct sparcspkr_state {int (* event ) (struct input_dev*,int ,int ,int ) ;struct input_dev* input_dev; TYPE_1__ u; } ;
struct platform_device {int * resource; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct sparcspkr_state*) ;
 int FUNC_2 (int *,int ,int) ;
 struct sparcspkr_state* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct input_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct sparcspkr_state *VAR_3 = FUNC_3(VAR_2);
 struct grover_beep_info *VAR_4 = &VAR_3->u.grover;
 struct input_dev *VAR_5 = VAR_3->input_dev;


 VAR_3->event(VAR_5, VAR_0, VAR_1, 0);

 FUNC_0(VAR_5);

 FUNC_2(&VAR_2->resource[3], VAR_4->enable_reg, 1);
 FUNC_2(&VAR_2->resource[2], VAR_4->freq_regs, 2);

 FUNC_1(VAR_3);

 return 0;
}
