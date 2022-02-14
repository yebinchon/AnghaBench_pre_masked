
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipu_image_convert_run {int list; int out_phys; int in_phys; struct ipu_image_convert_ctx* ctx; } ;
struct TYPE_7__ {int phys0; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct TYPE_5__ {int phys0; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct ipu_image_convert_ctx {int next_tile; scalar_t__ cur_buf_num; TYPE_4__ out; TYPE_2__ in; struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {struct ipu_image_convert_run* current_run; int irqlock; } ;


 int FUNC_0 (struct ipu_image_convert_run*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ipu_image_convert_run *VAR_0)
{
 struct ipu_image_convert_ctx *VAR_1 = VAR_0->ctx;
 struct ipu_image_convert_chan *VAR_2 = VAR_1->chan;

 FUNC_2(&VAR_2->irqlock);

 VAR_1->in.base.phys0 = VAR_0->in_phys;
 VAR_1->out.base.phys0 = VAR_0->out_phys;

 VAR_1->cur_buf_num = 0;
 VAR_1->next_tile = 1;


 FUNC_1(&VAR_0->list);
 VAR_2->current_run = VAR_0;

 return FUNC_0(VAR_0, 0);
}
