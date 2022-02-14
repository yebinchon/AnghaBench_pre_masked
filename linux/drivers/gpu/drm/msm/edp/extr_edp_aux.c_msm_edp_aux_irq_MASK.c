
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_aux {int msg_err; int msg_comp; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;

irqreturn_t FUNC_3(struct edp_aux *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_1) {
  FUNC_0("isr=%x", VAR_5);
  FUNC_2(VAR_4->base + VAR_3, 0);

  if (VAR_5 & VAR_0)
   VAR_4->msg_err = 1;
  else
   VAR_4->msg_err = 0;

  FUNC_1(&VAR_4->msg_comp);
 }

 return VAR_2;
}
