
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct binder_transaction_log_entry {int call_type; int debug_id_done; int return_error_line; int return_error_param; int return_error; int offsets_size; int data_size; int target_handle; int to_node; int context_name; int to_thread; int to_proc; int from_thread; int from_proc; int debug_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
     struct binder_transaction_log_entry *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->debug_id_done);




 FUNC_2();
 FUNC_1(VAR_0,
     "%d: %s from %d:%d to %d:%d context %s node %d handle %d size %d:%d ret %d/%d l=%d",
     VAR_1->debug_id, (VAR_1->call_type == 2) ? "reply" :
     ((VAR_1->call_type == 1) ? "async" : "call "), VAR_1->from_proc,
     VAR_1->from_thread, VAR_1->to_proc, VAR_1->to_thread, VAR_1->context_name,
     VAR_1->to_node, VAR_1->target_handle, VAR_1->data_size, VAR_1->offsets_size,
     VAR_1->return_error, VAR_1->return_error_param,
     VAR_1->return_error_line);




 FUNC_2();
 FUNC_1(VAR_0, VAR_2 && VAR_2 == FUNC_0(VAR_1->debug_id_done) ?
   "\n" : " (incomplete)\n");
}
