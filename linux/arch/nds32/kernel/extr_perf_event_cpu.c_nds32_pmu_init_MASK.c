
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nds32_pmu {int max_period; int reset; int stop; int start; int get_event_idx; int write_counter; int read_counter; int disable; int enable; int handle_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct nds32_pmu *VAR_9)
{
 VAR_9->handle_irq = VAR_3;
 VAR_9->enable = VAR_1;
 VAR_9->disable = VAR_0;
 VAR_9->read_counter = VAR_4;
 VAR_9->write_counter = VAR_8;
 VAR_9->get_event_idx = VAR_2;
 VAR_9->start = VAR_6;
 VAR_9->stop = VAR_7;
 VAR_9->reset = VAR_5;
 VAR_9->max_period = 0xFFFFFFFF;
}
