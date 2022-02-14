
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {unsigned int init_speed; unsigned int oper_speed; } ;



void FUNC_0(struct hci_uart *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 VAR_0->init_speed = VAR_1;
 VAR_0->oper_speed = VAR_2;
}
