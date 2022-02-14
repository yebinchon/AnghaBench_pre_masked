
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct apbps2_priv* port_data; } ;
struct apbps2_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct serio *VAR_0)
{
 struct apbps2_priv *VAR_1 = VAR_0->port_data;


 FUNC_0(0, &VAR_1->regs->ctrl);
}
