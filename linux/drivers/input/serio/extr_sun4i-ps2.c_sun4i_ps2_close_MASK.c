
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_ps2data {int irq; scalar_t__ reg_base; } ;
struct serio {struct sun4i_ps2data* port_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_2)
{
 struct sun4i_ps2data *VAR_3 = VAR_2->port_data;
 u32 VAR_4;


 VAR_4 = FUNC_0(VAR_3->reg_base + VAR_1);
 FUNC_2(VAR_4 & ~(VAR_0), VAR_3->reg_base + VAR_1);

 FUNC_1(VAR_3->irq);
}
