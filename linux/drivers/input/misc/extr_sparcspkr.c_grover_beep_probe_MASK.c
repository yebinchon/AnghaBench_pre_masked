
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grover_beep_info {void* freq_regs; void* enable_reg; } ;
struct TYPE_2__ {struct grover_beep_info grover; } ;
struct sparcspkr_state {char* name; TYPE_1__ u; int lock; int event; } ;
struct platform_device {int * resource; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sparcspkr_state*) ;
 struct sparcspkr_state* FUNC_1 (int,int ) ;
 void* FUNC_2 (int *,int ,int,char*) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (struct platform_device*,struct sparcspkr_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct sparcspkr_state *VAR_4;
 struct grover_beep_info *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out_err;

 VAR_4->name = "Sparc Grover Speaker";
 VAR_4->event = VAR_2;
 FUNC_6(&VAR_4->lock);

 VAR_5 = &VAR_4->u.grover;
 VAR_5->freq_regs = FUNC_2(&VAR_3->resource[2], 0, 2, "grover beep freq");
 if (!VAR_5->freq_regs)
  goto out_free;

 VAR_5->enable_reg = FUNC_2(&VAR_3->resource[3], 0, 1, "grover beep enable");
 if (!VAR_5->enable_reg)
  goto out_unmap_freq_regs;

 FUNC_4(VAR_3, VAR_4);

 VAR_6 = FUNC_5(&VAR_3->dev);
 if (VAR_6)
  goto out_clear_drvdata;

 return 0;

out_clear_drvdata:
 FUNC_3(&VAR_3->resource[3], VAR_5->enable_reg, 1);

out_unmap_freq_regs:
 FUNC_3(&VAR_3->resource[2], VAR_5->freq_regs, 2);
out_free:
 FUNC_0(VAR_4);
out_err:
 return VAR_6;
}
