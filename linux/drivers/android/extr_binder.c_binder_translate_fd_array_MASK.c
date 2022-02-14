
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct binder_transaction {TYPE_1__* buffer; struct binder_proc* to_proc; } ;
struct binder_thread {int pid; struct binder_proc* proc; } ;
struct binder_proc {int alloc; int pid; } ;
struct binder_fd_array_object {int num_fds; scalar_t__ parent_offset; } ;
struct binder_buffer_object {scalar_t__ length; uintptr_t buffer; } ;
typedef int fd ;
typedef scalar_t__ binder_size_t ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,struct binder_transaction*,struct binder_thread*,struct binder_transaction*) ;
 int FUNC_3 (char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_4(struct binder_fd_array_object *VAR_2,
         struct binder_buffer_object *VAR_3,
         struct binder_transaction *VAR_4,
         struct binder_thread *VAR_5,
         struct binder_transaction *VAR_6)
{
 binder_size_t VAR_7, VAR_8;
 binder_size_t VAR_9;
 struct binder_proc *VAR_10 = VAR_5->proc;
 struct binder_proc *VAR_11 = VAR_4->to_proc;

 VAR_8 = sizeof(u32) * VAR_2->num_fds;
 if (VAR_2->num_fds >= VAR_1 / sizeof(u32)) {
  FUNC_3("%d:%d got transaction with invalid number of fds (%lld)\n",
      VAR_10->pid, VAR_5->pid, (u64)VAR_2->num_fds);
  return -VAR_0;
 }
 if (VAR_8 > VAR_3->length ||
     VAR_2->parent_offset > VAR_3->length - VAR_8) {

  FUNC_3("%d:%d not enough space to store %lld fds in buffer\n",
      VAR_10->pid, VAR_5->pid, (u64)VAR_2->num_fds);
  return -VAR_0;
 }







 VAR_9 = (VAR_3->buffer - (uintptr_t)VAR_4->buffer->user_data) +
  VAR_2->parent_offset;
 if (!FUNC_0((unsigned long)VAR_9, sizeof(u32))) {
  FUNC_3("%d:%d parent offset not aligned correctly.\n",
      VAR_10->pid, VAR_5->pid);
  return -VAR_0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2->num_fds; VAR_7++) {
  u32 VAR_12;
  int VAR_13;
  binder_size_t VAR_14 = VAR_9 + VAR_7 * sizeof(VAR_12);

  VAR_13 = FUNC_1(&VAR_11->alloc,
          &VAR_12, VAR_4->buffer,
          VAR_14, sizeof(VAR_12));
  if (!VAR_13)
   VAR_13 = FUNC_2(VAR_12, VAR_14, VAR_4, VAR_5,
        VAR_6);
  if (VAR_13 < 0)
   return VAR_13;
 }
 return 0;
}
