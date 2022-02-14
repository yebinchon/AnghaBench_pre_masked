
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct apbps2_priv* port_data; } ;
struct apbps2_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl; int data; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_3)
{
 struct apbps2_priv *VAR_4 = VAR_3->port_data;
 int VAR_5;
 unsigned long VAR_6;


 FUNC_1(0, &VAR_4->regs->status);


 VAR_5 = 1024;
 while ((FUNC_0(&VAR_4->regs->status) & VAR_2) && --VAR_5)
  VAR_6 = FUNC_0(&VAR_4->regs->data);


 FUNC_1(VAR_0 | VAR_1, &VAR_4->regs->ctrl);

 return 0;
}
