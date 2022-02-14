
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bbc_beep_info {int regs; int clock_freq; } ;
struct TYPE_2__ {struct bbc_beep_info bbc; } ;
struct sparcspkr_state {char* name; TYPE_1__ u; int lock; int event; } ;
struct platform_device {int * resource; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sparcspkr_state*) ;
 struct sparcspkr_state* FUNC_1 (int,int ) ;
 struct device_node* FUNC_2 (char*) ;
 int FUNC_3 (struct device_node*,char*,int ) ;
 int FUNC_4 (int *,int ,int,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct platform_device*,struct sparcspkr_state*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct sparcspkr_state *VAR_5;
 struct bbc_beep_info *VAR_6;
 struct device_node *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  goto out_err;

 VAR_5->name = "Sparc BBC Speaker";
 VAR_5->event = VAR_3;
 FUNC_8(&VAR_5->lock);

 VAR_7 = FUNC_2("/");
 VAR_8 = -VAR_0;
 if (!VAR_7)
  goto out_free;

 VAR_6 = &VAR_5->u.bbc;
 VAR_6->clock_freq = FUNC_3(VAR_7, "clock-frequency", 0);
 if (!VAR_6->clock_freq)
  goto out_free;

 VAR_6->regs = FUNC_4(&VAR_4->resource[0], 0, 6, "bbc beep");
 if (!VAR_6->regs)
  goto out_free;

 FUNC_6(VAR_4, VAR_5);

 VAR_8 = FUNC_7(&VAR_4->dev);
 if (VAR_8)
  goto out_clear_drvdata;

 return 0;

out_clear_drvdata:
 FUNC_5(&VAR_4->resource[0], VAR_6->regs, 6);

out_free:
 FUNC_0(VAR_5);
out_err:
 return VAR_8;
}
