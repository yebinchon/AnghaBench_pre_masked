
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct drbd_thread_timing_details {scalar_t__ cb_nr; int cb_addr; int line; int caller_fn; scalar_t__ start_jif; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0,
 const struct drbd_thread_timing_details *VAR_1,
 unsigned long VAR_2)
{
 struct drbd_thread_timing_details VAR_3;


 do {
  VAR_3 = *VAR_1;
 } while (VAR_3.cb_nr != VAR_1->cb_nr);
 if (!VAR_3.cb_addr)
  return;
 FUNC_1(VAR_0, "%u\t%d\t%s:%u\t%ps\n",
   VAR_3.cb_nr,
   FUNC_0(VAR_2 - VAR_3.start_jif),
   VAR_3.caller_fn, VAR_3.line,
   VAR_3.cb_addr);
}
