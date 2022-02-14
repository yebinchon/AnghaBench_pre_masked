
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_vtg {int irq_status; int crtc; int notifier_list; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_4, void *VAR_5)
{
 struct sti_vtg *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = (VAR_6->irq_status & VAR_2) ?
  VAR_3 : VAR_1;

 FUNC_0(&VAR_6->notifier_list, VAR_7, VAR_6->crtc);

 return VAR_0;
}
