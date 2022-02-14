
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct msc {int mode; int base_addr; int nr_pages; int burst_len; int enabled; int mbuf_priv; TYPE_2__* mbuf; TYPE_3__* thdev; scalar_t__ reg_base; scalar_t__ wrap; void* orig_sz; void* orig_addr; int cur_win; int buf_mutex; } ;
struct TYPE_4__ {int multiblock; } ;
struct TYPE_6__ {TYPE_1__ output; } ;
struct TYPE_5__ {int (* activate ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msc*) ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct msc*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct msc *VAR_15)
{
 u32 VAR_16;

 FUNC_5(&VAR_15->buf_mutex);

 if (VAR_15->mode > VAR_5)
  return -VAR_1;

 if (VAR_15->mode == VAR_5) {
  if (FUNC_7(VAR_15->cur_win, VAR_14, VAR_13))
   return -VAR_0;

  FUNC_6(VAR_15);
 }

 VAR_15->orig_addr = FUNC_3(VAR_15->reg_base + VAR_10);
 VAR_15->orig_sz = FUNC_3(VAR_15->reg_base + VAR_12);

 VAR_16 = VAR_15->base_addr >> VAR_9;
 FUNC_4(VAR_16, VAR_15->reg_base + VAR_10);

 if (VAR_15->mode == VAR_6) {
  VAR_16 = VAR_15->nr_pages;
  FUNC_4(VAR_16, VAR_15->reg_base + VAR_12);
 }

 VAR_16 = FUNC_3(VAR_15->reg_base + VAR_11);
 VAR_16 &= ~(VAR_4 | VAR_8 | VAR_2 | VAR_7);

 VAR_16 |= VAR_2;
 VAR_16 |= VAR_15->mode << FUNC_0(VAR_4);
 VAR_16 |= VAR_15->burst_len << FUNC_0(VAR_3);

 if (VAR_15->wrap)
  VAR_16 |= VAR_8;

 FUNC_4(VAR_16, VAR_15->reg_base + VAR_11);

 FUNC_1(VAR_15);

 VAR_15->thdev->output.multiblock = VAR_15->mode == VAR_5;
 FUNC_2(VAR_15->thdev);
 VAR_15->enabled = 1;

 if (VAR_15->mbuf && VAR_15->mbuf->activate)
  VAR_15->mbuf->activate(VAR_15->mbuf_priv);

 return 0;
}
