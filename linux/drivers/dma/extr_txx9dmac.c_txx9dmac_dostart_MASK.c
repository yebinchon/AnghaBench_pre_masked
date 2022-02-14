
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct txx9dmac_slave {int reg_width; scalar_t__ tx_reg; } ;
struct TYPE_3__ {int phys; int cookie; } ;
struct txx9dmac_desc {TYPE_1__ txd; } ;
struct TYPE_4__ {struct txx9dmac_slave* private; } ;
struct txx9dmac_chan {int ccr; TYPE_2__ chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct txx9dmac_chan*,int ,int) ;
 int FUNC_2 (struct txx9dmac_chan*,int) ;
 int FUNC_3 (struct txx9dmac_chan*,int ,int) ;
 int FUNC_4 (struct txx9dmac_chan*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ,struct txx9dmac_desc*) ;
 scalar_t__ FUNC_7 (struct txx9dmac_chan*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct txx9dmac_chan*) ;

__attribute__((used)) static void FUNC_10(struct txx9dmac_chan *VAR_7,
        struct txx9dmac_desc *VAR_8)
{
 struct txx9dmac_slave *VAR_9 = VAR_7->chan.private;
 u32 VAR_10, VAR_11;

 FUNC_6(FUNC_0(&VAR_7->chan), "dostart %u %p\n",
   VAR_8->txd.cookie, VAR_8);

 if (FUNC_4(VAR_7, VAR_3) & VAR_6) {
  FUNC_5(FUNC_0(&VAR_7->chan),
   "BUG: Attempted to start non-idle channel\n");
  FUNC_9(VAR_7);

  return;
 }

 if (FUNC_7(VAR_7)) {
  FUNC_3(VAR_7, VAR_2, 0);
  FUNC_3(VAR_7, VAR_3, 0xffffffff);
  if (VAR_9) {
   if (VAR_9->tx_reg) {
    VAR_10 = VAR_9->reg_width;
    VAR_11 = 0;
   } else {
    VAR_10 = 0;
    VAR_11 = VAR_9->reg_width;
   }
  } else {
   VAR_10 = 8;
   VAR_11 = 8;
  }
  FUNC_3(VAR_7, VAR_5, VAR_10);
  FUNC_3(VAR_7, VAR_4, VAR_11);

  FUNC_3(VAR_7, VAR_0, VAR_7->ccr);

  FUNC_2(VAR_7, VAR_8->txd.phys);
 } else {
  FUNC_1(VAR_7, VAR_2, 0);
  FUNC_1(VAR_7, VAR_3, 0xffffffff);
  if (VAR_9) {
   if (VAR_9->tx_reg) {
    VAR_10 = VAR_9->reg_width;
    VAR_11 = 0;
   } else {
    VAR_10 = 0;
    VAR_11 = VAR_9->reg_width;
   }
  } else {
   VAR_10 = 4;
   VAR_11 = 4;
  }
  FUNC_1(VAR_7, VAR_5, VAR_10);
  FUNC_1(VAR_7, VAR_4, VAR_11);
  if (FUNC_8()) {
   FUNC_1(VAR_7, VAR_0, VAR_7->ccr);

   FUNC_1(VAR_7, VAR_1, VAR_8->txd.phys);
  } else {
   FUNC_1(VAR_7, VAR_1, VAR_8->txd.phys);
   FUNC_1(VAR_7, VAR_0, VAR_7->ccr);
  }
 }
}
