
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {int irq_handler_data; int irq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct si_sm_io*) ;

__attribute__((used)) static void FUNC_2(struct si_sm_io *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->irq, VAR_0->irq_handler_data);
}
