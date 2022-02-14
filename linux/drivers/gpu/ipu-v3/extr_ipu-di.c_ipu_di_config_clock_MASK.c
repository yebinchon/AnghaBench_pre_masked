
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {int pixelclock; } ;
struct ipu_di_signal_cfg {int clkflags; TYPE_2__ mode; } ;
struct ipu_di {struct clk* clk_di_pixel; struct clk* clk_di; struct clk* clk_ipu; TYPE_1__* ipu; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int) ;
 int FUNC_4 (int ,char*,int,unsigned int,unsigned int,...) ;
 unsigned int FUNC_5 (struct ipu_di*,int ) ;
 int FUNC_6 (struct ipu_di*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_7(struct ipu_di *VAR_6,
 const struct ipu_di_signal_cfg *VAR_7)
{
 struct clk *VAR_8;
 unsigned VAR_9;
 uint32_t VAR_10;

 if (VAR_7->clkflags & VAR_4) {





  VAR_8 = VAR_6->clk_di;

  if (VAR_7->clkflags & VAR_5) {







   VAR_9 = 1 << 4;
  } else {







   unsigned long VAR_11;
   unsigned VAR_12;

   FUNC_3(VAR_8, VAR_7->mode.pixelclock);

   VAR_11 = FUNC_2(VAR_8);
   VAR_12 = FUNC_0(VAR_11, VAR_7->mode.pixelclock);
   VAR_12 = FUNC_1(VAR_12, 1U, 255U);

   VAR_9 = VAR_12 << 4;
  }
 } else {







  unsigned long VAR_13, VAR_14;
  unsigned VAR_15, VAR_16;

  VAR_14 = FUNC_2(VAR_6->clk_ipu);
  VAR_15 = FUNC_0(VAR_14, VAR_7->mode.pixelclock);
  VAR_15 = FUNC_1(VAR_15, 1U, 255U);
  VAR_13 = VAR_14 / VAR_15;

  VAR_16 = VAR_13 / (VAR_7->mode.pixelclock / 1000);

  FUNC_4(VAR_6->ipu->dev, "  IPU clock can give %lu with divider %u, error %d.%u%%\n",
   VAR_13, VAR_15, (signed)(VAR_16 - 1000) / 10, VAR_16 % 10);


  if (VAR_16 < 1010 && VAR_16 >= 990) {
   VAR_8 = VAR_6->clk_ipu;

   VAR_9 = VAR_15 << 4;
  } else {
   unsigned long VAR_17;
   unsigned VAR_18;

   VAR_8 = VAR_6->clk_di;

   FUNC_3(VAR_8, VAR_7->mode.pixelclock);

   VAR_17 = FUNC_2(VAR_8);
   VAR_18 = FUNC_0(VAR_17, VAR_7->mode.pixelclock);
   VAR_18 = FUNC_1(VAR_18, 1U, 255U);

   VAR_9 = VAR_18 << 4;
  }
 }

 VAR_6->clk_di_pixel = VAR_8;


 FUNC_6(VAR_6, VAR_9, VAR_0);







 FUNC_6(VAR_6, (VAR_9 >> 4) << 16, VAR_1);


 VAR_10 = FUNC_5(VAR_6, VAR_2) & ~VAR_3;
 if (VAR_8 == VAR_6->clk_di)
  VAR_10 |= VAR_3;
 FUNC_6(VAR_6, VAR_10, VAR_2);

 FUNC_4(VAR_6->ipu->dev, "Want %luHz IPU %luHz DI %luHz using %s, %luHz\n",
  VAR_7->mode.pixelclock,
  FUNC_2(VAR_6->clk_ipu),
  FUNC_2(VAR_6->clk_di),
  VAR_8 == VAR_6->clk_di ? "DI" : "IPU",
  FUNC_2(VAR_6->clk_di_pixel) / (VAR_9 >> 4));
}
