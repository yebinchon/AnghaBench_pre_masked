
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct file {int dummy; } ;
struct binder_txn_fd_fixup {int fixup_entry; int offset; struct file* file; } ;
struct binder_transaction {int flags; int fd_fixups; TYPE_2__* buffer; struct binder_proc* to_proc; } ;
struct binder_thread {int pid; struct binder_proc* proc; } ;
struct binder_proc {int tsk; int pid; } ;
typedef int binder_size_t ;
struct TYPE_4__ {TYPE_1__* target_node; } ;
struct TYPE_3__ {int accept_fds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,char*,...) ;
 struct file* FUNC_1 (int ) ;
 int FUNC_2 (struct file*) ;
 struct binder_txn_fd_fixup* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,struct file*) ;
 int FUNC_6 (struct binder_transaction*,int ,int ) ;

__attribute__((used)) static int FUNC_7(u32 VAR_5, binder_size_t VAR_6,
          struct binder_transaction *VAR_7,
          struct binder_thread *VAR_8,
          struct binder_transaction *VAR_9)
{
 struct binder_proc *VAR_10 = VAR_8->proc;
 struct binder_proc *VAR_11 = VAR_7->to_proc;
 struct binder_txn_fd_fixup *VAR_12;
 struct file *VAR_13;
 int VAR_14 = 0;
 bool VAR_15;

 if (VAR_9)
  VAR_15 = !!(VAR_9->flags & VAR_4);
 else
  VAR_15 = VAR_7->buffer->target_node->accept_fds;
 if (!VAR_15) {
  FUNC_0("%d:%d got %s with fd, %d, but target does not allow fds\n",
      VAR_10->pid, VAR_8->pid,
      VAR_9 ? "reply" : "transaction",
      VAR_5);
  VAR_14 = -VAR_2;
  goto err_fd_not_accepted;
 }

 VAR_13 = FUNC_1(VAR_5);
 if (!VAR_13) {
  FUNC_0("%d:%d got transaction with invalid fd, %d\n",
      VAR_10->pid, VAR_8->pid, VAR_5);
  VAR_14 = -VAR_0;
  goto err_fget;
 }
 VAR_14 = FUNC_5(VAR_10->tsk, VAR_11->tsk, VAR_13);
 if (VAR_14 < 0) {
  VAR_14 = -VAR_2;
  goto err_security;
 }






 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto err_alloc;
 }
 VAR_12->file = VAR_13;
 VAR_12->offset = VAR_6;
 FUNC_6(VAR_7, VAR_5, VAR_12->offset);
 FUNC_4(&VAR_12->fixup_entry, &VAR_7->fd_fixups);

 return VAR_14;

err_alloc:
err_security:
 FUNC_2(VAR_13);
err_fget:
err_fd_not_accepted:
 return VAR_14;
}
