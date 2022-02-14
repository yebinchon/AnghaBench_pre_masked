
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;
struct ps2mult_port {int sel; } ;
struct ps2mult {struct ps2mult_port* out_port; struct serio* mx_serio; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct serio*,int ) ;

__attribute__((used)) static void FUNC_2(struct ps2mult *VAR_0, struct ps2mult_port *VAR_1)
{
 struct serio *VAR_2 = VAR_0->mx_serio;

 FUNC_1(VAR_2, VAR_1->sel);
 VAR_0->out_port = VAR_1;
 FUNC_0(&VAR_2->dev, "switched to sel %02x\n", VAR_1->sel);
}
