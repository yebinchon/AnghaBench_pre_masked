
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction {struct binder_proc* to_proc; struct binder_buffer* buffer; } ;
struct binder_thread {int pid; struct binder_proc* proc; } ;
struct binder_proc {int pid; int alloc; } ;
struct binder_object {int dummy; } ;
struct binder_buffer_object {int flags; int parent_offset; int length; scalar_t__ buffer; int parent; } ;
struct binder_buffer {scalar_t__ user_data; } ;
typedef int binder_uintptr_t ;
typedef int binder_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct binder_buffer*,int,scalar_t__*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct binder_proc*,struct binder_buffer*,int,int,int,int,int) ;
 struct binder_buffer_object* FUNC_3 (struct binder_proc*,struct binder_buffer*,struct binder_object*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct binder_transaction *VAR_2,
          struct binder_thread *VAR_3,
          struct binder_buffer_object *VAR_4,
          binder_size_t VAR_5,
          binder_size_t VAR_6,
          binder_size_t VAR_7,
          binder_size_t VAR_8)
{
 struct binder_buffer_object *VAR_9;
 struct binder_buffer *VAR_10 = VAR_2->buffer;
 struct binder_proc *VAR_11 = VAR_3->proc;
 struct binder_proc *VAR_12 = VAR_2->to_proc;
 struct binder_object VAR_13;
 binder_size_t VAR_14;
 binder_size_t VAR_15;

 if (!(VAR_4->flags & VAR_0))
  return 0;

 VAR_9 = FUNC_3(VAR_12, VAR_10, &VAR_13, VAR_4->parent,
         VAR_5, &VAR_15,
         VAR_6);
 if (!VAR_9) {
  FUNC_1("%d:%d got transaction with invalid parent offset or type\n",
      VAR_11->pid, VAR_3->pid);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_12, VAR_10, VAR_5,
       VAR_15, VAR_4->parent_offset,
       VAR_7,
       VAR_8)) {
  FUNC_1("%d:%d got transaction with out-of-order buffer fixup\n",
      VAR_11->pid, VAR_3->pid);
  return -VAR_1;
 }

 if (VAR_9->length < sizeof(binder_uintptr_t) ||
     VAR_4->parent_offset > VAR_9->length - sizeof(binder_uintptr_t)) {

  FUNC_1("%d:%d got transaction with invalid parent offset\n",
      VAR_11->pid, VAR_3->pid);
  return -VAR_1;
 }
 VAR_14 = VAR_4->parent_offset +
   (uintptr_t)VAR_9->buffer - (uintptr_t)VAR_10->user_data;
 if (FUNC_0(&VAR_12->alloc, VAR_10, VAR_14,
     &VAR_4->buffer, sizeof(VAR_4->buffer))) {
  FUNC_1("%d:%d got transaction with invalid parent offset\n",
      VAR_11->pid, VAR_3->pid);
  return -VAR_1;
 }

 return 0;
}
