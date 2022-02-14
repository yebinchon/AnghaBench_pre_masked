
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct g2d_data {int runqueue_work; int g2d_workq; int flags; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct g2d_data*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 struct g2d_data *VAR_13 = VAR_12;
 u32 VAR_14;

 VAR_14 = FUNC_3(VAR_13->regs + VAR_7);
 if (VAR_14)
  FUNC_4(VAR_14, VAR_13->regs + VAR_7);

 if (VAR_14 & VAR_9) {
  u32 VAR_15 = FUNC_3(VAR_13->regs + VAR_6);

  VAR_15 = (VAR_15 & VAR_4) >>
      VAR_5;

  FUNC_1(VAR_13, VAR_15);

  FUNC_4(0, VAR_13->regs + VAR_3);
  if (!(VAR_14 & VAR_8)) {
   FUNC_4(VAR_2,
     VAR_13->regs + VAR_1);
  }
 }

 if (VAR_14 & VAR_8) {
  FUNC_0(VAR_0, &VAR_13->flags);
  FUNC_2(VAR_13->g2d_workq, &VAR_13->runqueue_work);
 }

 return VAR_10;
}
