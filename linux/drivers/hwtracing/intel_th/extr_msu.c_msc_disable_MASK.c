
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msc_window {int sgt; } ;
struct msc {scalar_t__ mode; int single_wrap; int single_sz; int nr_pages; int orig_addr; int orig_sz; scalar_t__ reg_base; scalar_t__ index; scalar_t__ enabled; int mbuf_priv; TYPE_1__* mbuf; int thdev; int buf_mutex; struct msc_window* cur_win; } ;
struct TYPE_2__ {int (* ready ) (int ,int ,int ) ;int (* deactivate ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct msc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct msc*) ;
 int FUNC_7 (struct msc_window*,int ,int ) ;
 int FUNC_8 (struct msc_window*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct msc *VAR_16)
{
 struct msc_window *VAR_17 = VAR_16->cur_win;
 u32 VAR_18;

 FUNC_5(&VAR_16->buf_mutex);

 if (VAR_16->mode == VAR_2)
  FUNC_7(VAR_17, VAR_14, VAR_15);

 if (VAR_16->mbuf && VAR_16->mbuf->deactivate)
  VAR_16->mbuf->deactivate(VAR_16->mbuf_priv);
 FUNC_1(VAR_16);
 FUNC_2(VAR_16->thdev);

 if (VAR_16->mode == VAR_3) {
  VAR_18 = FUNC_3(VAR_16->reg_base + VAR_12);
  VAR_16->single_wrap = !!(VAR_18 & VAR_0);

  VAR_18 = FUNC_3(VAR_16->reg_base + VAR_9);
  VAR_16->single_sz = VAR_18 & ((VAR_16->nr_pages << VAR_6) - 1);
  FUNC_0(FUNC_6(VAR_16), "MSCnMWP: %08x/%08lx, wrap: %d\n",
   VAR_18, VAR_16->single_sz, VAR_16->single_wrap);
 }

 VAR_18 = FUNC_3(VAR_16->reg_base + VAR_8);
 VAR_18 &= ~VAR_1;
 FUNC_4(VAR_18, VAR_16->reg_base + VAR_8);

 if (VAR_16->mbuf && VAR_16->mbuf->ready)
  VAR_16->mbuf->ready(VAR_16->mbuf_priv, VAR_17->sgt,
     FUNC_8(VAR_17));

 VAR_16->enabled = 0;

 FUNC_4(VAR_16->orig_addr, VAR_16->reg_base + VAR_7);
 FUNC_4(VAR_16->orig_sz, VAR_16->reg_base + VAR_11);

 FUNC_0(FUNC_6(VAR_16), "MSCnNWSA: %08x\n",
  FUNC_3(VAR_16->reg_base + VAR_10));

 VAR_18 = FUNC_3(VAR_16->reg_base + VAR_12);
 FUNC_0(FUNC_6(VAR_16), "MSCnSTS: %08x\n", VAR_18);

 VAR_18 = FUNC_3(VAR_16->reg_base + VAR_13);
 VAR_18 &= VAR_16->index ? VAR_5 : VAR_4;
 FUNC_4(VAR_18, VAR_16->reg_base + VAR_13);
}
