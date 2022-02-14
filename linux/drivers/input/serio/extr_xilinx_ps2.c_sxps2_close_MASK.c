
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xps2data {int irq; scalar_t__ base_address; } ;
struct serio {struct xps2data* port_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct xps2data*) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_2)
{
 struct xps2data *VAR_3 = VAR_2->port_data;


 FUNC_1(VAR_3->base_address + VAR_0, 0x00);
 FUNC_1(VAR_3->base_address + VAR_1, 0x00);
 FUNC_0(VAR_3->irq, VAR_3);
}
