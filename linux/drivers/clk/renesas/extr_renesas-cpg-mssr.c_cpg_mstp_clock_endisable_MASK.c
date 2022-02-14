
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mstp_clock {int index; struct cpg_mssr_priv* priv; } ;
struct device {int dummy; } ;
struct cpg_mssr_priv {scalar_t__ base; scalar_t__ stbyctrl; int rmw_lock; struct device* dev; } ;
struct clk_hw {int clk; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (struct device*,char*,unsigned int,unsigned int,int ,char*) ;
 int FUNC_7 (struct device*,char*,scalar_t__,unsigned int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct mstp_clock* FUNC_12 (struct clk_hw*) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct clk_hw *VAR_1, bool VAR_2)
{
 struct mstp_clock *VAR_3 = FUNC_12(VAR_1);
 struct cpg_mssr_priv *VAR_4 = VAR_3->priv;
 unsigned int VAR_5 = VAR_3->index / 32;
 unsigned int VAR_6 = VAR_3->index % 32;
 struct device *VAR_7 = VAR_4->dev;
 u32 VAR_8 = FUNC_0(VAR_6);
 unsigned long VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;

 FUNC_6(VAR_7, "MSTP %u%02u/%pC %s\n", VAR_5, VAR_6, VAR_1->clk,
  VAR_2 ? "ON" : "OFF");
 FUNC_10(&VAR_4->rmw_lock, VAR_9);

 if (VAR_4->stbyctrl) {
  VAR_11 = FUNC_8(VAR_4->base + FUNC_3(VAR_5));
  if (VAR_2)
   VAR_11 &= ~VAR_8;
  else
   VAR_11 |= VAR_8;
  FUNC_13(VAR_11, VAR_4->base + FUNC_3(VAR_5));


  FUNC_8(VAR_4->base + FUNC_3(VAR_5));
  FUNC_4(VAR_4->base + FUNC_3(VAR_5));
 } else {
  VAR_11 = FUNC_9(VAR_4->base + FUNC_2(VAR_5));
  if (VAR_2)
   VAR_11 &= ~VAR_8;
  else
   VAR_11 |= VAR_8;
  FUNC_14(VAR_11, VAR_4->base + FUNC_2(VAR_5));
 }

 FUNC_11(&VAR_4->rmw_lock, VAR_9);

 if (!VAR_2 || VAR_4->stbyctrl)
  return 0;

 for (VAR_10 = 1000; VAR_10 > 0; --VAR_10) {
  if (!(FUNC_9(VAR_4->base + FUNC_1(VAR_5)) & VAR_8))
   break;
  FUNC_5();
 }

 if (!VAR_10) {
  FUNC_7(VAR_7, "Failed to enable SMSTP %p[%d]\n",
   VAR_4->base + FUNC_2(VAR_5), VAR_6);
  return -VAR_0;
 }

 return 0;
}
