
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_pmu {int filter_match; int set_event_filter; int reset; int stop; int start; int clear_event_idx; int get_event_idx; int write_counter; int read_counter; int disable; int enable; int handle_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arm_pmu*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(struct arm_pmu *VAR_12)
{
 int VAR_13 = FUNC_0(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->handle_irq = VAR_5;
 VAR_12->enable = VAR_2;
 VAR_12->disable = VAR_1;
 VAR_12->read_counter = VAR_6;
 VAR_12->write_counter = VAR_11;
 VAR_12->get_event_idx = VAR_4;
 VAR_12->clear_event_idx = VAR_0;
 VAR_12->start = VAR_9;
 VAR_12->stop = VAR_10;
 VAR_12->reset = VAR_7;
 VAR_12->set_event_filter = VAR_8;
 VAR_12->filter_match = VAR_3;

 return 0;
}
