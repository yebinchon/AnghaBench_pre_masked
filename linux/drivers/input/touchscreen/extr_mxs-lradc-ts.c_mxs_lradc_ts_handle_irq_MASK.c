
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mxs_lradc_ts {scalar_t__ base; int lock; struct mxs_lradc* lradc; } ;
struct mxs_lradc {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mxs_lradc_ts*) ;
 unsigned long FUNC_2 (struct mxs_lradc*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct mxs_lradc_ts *VAR_9 = VAR_8;
 struct mxs_lradc *VAR_10 = VAR_9->lradc;
 unsigned long VAR_11 = FUNC_3(VAR_9->base + VAR_2);
 u32 VAR_12 = FUNC_2(VAR_10);
 const u32 VAR_13 =
  VAR_3 |
  FUNC_0(VAR_5) |
  FUNC_0(VAR_6);
 unsigned long VAR_14;

 if (!(VAR_11 & FUNC_2(VAR_10)))
  return VAR_1;

 if (VAR_11 & VAR_13) {
  FUNC_4(&VAR_9->lock, VAR_14);
  FUNC_1(VAR_9);
  FUNC_5(&VAR_9->lock, VAR_14);

  VAR_12 &= ~(FUNC_0(VAR_5) |
    FUNC_0(VAR_6));
  FUNC_6(VAR_11 & VAR_12,
         VAR_9->base + VAR_2 + VAR_4);
 }

 return VAR_0;
}
