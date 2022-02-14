
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_handler_data {unsigned int dev_ino; int dev_handle; } ;



__attribute__((used)) static void FUNC_0(struct irq_handler_data *VAR_0,
    u32 VAR_1, unsigned int VAR_2)
{
 VAR_0->dev_handle = VAR_1;
 VAR_0->dev_ino = VAR_2;
}
