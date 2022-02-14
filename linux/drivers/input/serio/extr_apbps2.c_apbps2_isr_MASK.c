
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apbps2_priv {int io; TYPE_1__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int status; int data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct apbps2_priv *VAR_9 = VAR_8;
 unsigned long VAR_10, VAR_11, VAR_12;
 irqreturn_t VAR_13 = VAR_4;

 while ((VAR_10 = FUNC_0(&VAR_9->regs->status)) & VAR_0) {
  VAR_11 = FUNC_0(&VAR_9->regs->data);
  VAR_12 = (VAR_10 & VAR_2) ? VAR_6 : 0;
  VAR_12 |= (VAR_10 & VAR_1) ? VAR_5 : 0;


  if (VAR_12)
   FUNC_1(0, &VAR_9->regs->status);

  FUNC_2(VAR_9->io, VAR_11, VAR_12);

  VAR_13 = VAR_3;
 }

 return VAR_13;
}
