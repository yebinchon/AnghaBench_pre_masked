
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msc_window {int sgt; } ;
struct msc {int mbuf_priv; TYPE_1__* mbuf; int work; struct msc_window* cur_win; scalar_t__ enabled; scalar_t__ msu_base; int do_irq; scalar_t__ index; } ;
struct intel_th_device {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* ready ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct msc* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct msc_window* FUNC_3 (struct msc_window*) ;
 scalar_t__ FUNC_4 (struct msc_window*,int ,int ) ;
 int FUNC_5 (struct msc*) ;
 int FUNC_6 (struct msc_window*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct intel_th_device *VAR_8)
{
 struct msc *VAR_9 = FUNC_0(&VAR_8->dev);
 u32 VAR_10 = FUNC_1(VAR_9->msu_base + VAR_4);
 u32 VAR_11 = VAR_9->index ? VAR_3 : VAR_2;
 struct msc_window *VAR_12, *VAR_13;

 if (!VAR_9->do_irq || !VAR_9->mbuf)
  return VAR_1;

 VAR_10 &= VAR_11;

 if (!VAR_10)
  return VAR_9->enabled ? VAR_0 : VAR_1;

 FUNC_2(VAR_10, VAR_9->msu_base + VAR_4);

 if (!VAR_9->enabled)
  return VAR_1;


 VAR_12 = VAR_9->cur_win;
 if (!VAR_12)
  return VAR_0;
 VAR_13 = FUNC_3(VAR_12);
 if (!VAR_13)
  return VAR_0;


 if (FUNC_4(VAR_13, VAR_7, VAR_5)) {
  FUNC_7(&VAR_9->work);
  return VAR_0;
 }


 FUNC_4(VAR_12, VAR_5, VAR_6);

 FUNC_5(VAR_9);

 if (VAR_9->mbuf && VAR_9->mbuf->ready)
  VAR_9->mbuf->ready(VAR_9->mbuf_priv, VAR_12->sgt,
     FUNC_6(VAR_12));

 return VAR_0;
}
