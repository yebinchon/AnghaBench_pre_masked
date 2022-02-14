
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u64 ;
typedef scalar_t__ u32 ;
struct flat_binder_object {int handle; scalar_t__ binder; } ;
struct binder_ref_data {int const desc; int debug_id; } ;
struct binder_proc {int alloc; int tsk; int pid; } ;
struct binder_object_header {int type; } ;
struct binder_object {struct binder_object_header hdr; } ;
struct binder_node {scalar_t__ ptr; int debug_id; } ;
struct binder_fd_array_object {int num_fds; scalar_t__ parent_offset; int parent; } ;
struct binder_buffer_object {scalar_t__ length; int buffer; } ;
struct binder_buffer {int debug_id; scalar_t__ offsets_size; int user_data; int data_size; struct binder_node* target_node; } ;
typedef int object_offset ;
typedef int fd ;
typedef scalar_t__ binder_size_t ;
struct TYPE_2__ {int group_leader; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;







 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__*,struct binder_buffer*,scalar_t__,int) ;
 int FUNC_3 (int ,char*,int ,int const,...) ;
 int FUNC_4 (struct binder_node*,int,int ) ;
 int FUNC_5 (struct binder_proc*,int ,int,struct binder_ref_data*) ;
 int FUNC_6 (scalar_t__) ;
 struct binder_node* FUNC_7 (struct binder_proc*,scalar_t__) ;
 size_t FUNC_8 (struct binder_proc*,struct binder_buffer*,scalar_t__,struct binder_object*) ;
 int FUNC_9 (struct binder_node*) ;
 struct binder_buffer_object* FUNC_10 (struct binder_proc*,struct binder_buffer*,struct binder_object*,int ,scalar_t__,int *,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_11 (char*,int,...) ;
 struct binder_fd_array_object* FUNC_12 (struct binder_object_header*) ;
 struct flat_binder_object* FUNC_13 (struct binder_object_header*) ;

__attribute__((used)) static void FUNC_14(struct binder_proc *VAR_3,
           struct binder_buffer *VAR_4,
           binder_size_t VAR_5,
           bool VAR_6)
{
 int VAR_7 = VAR_4->debug_id;
 binder_size_t VAR_8, VAR_9, VAR_10;

 FUNC_3(VAR_0,
       "%d buffer release %d, size %zd-%zd, failed at %llx\n",
       VAR_3->pid, VAR_4->debug_id,
       VAR_4->data_size, VAR_4->offsets_size,
       (unsigned long long)VAR_5);

 if (VAR_4->target_node)
  FUNC_4(VAR_4->target_node, 1, 0);

 VAR_8 = FUNC_0(VAR_4->data_size, sizeof(void *));
 VAR_10 = VAR_6 ? VAR_5 :
    VAR_8 + VAR_4->offsets_size;
 for (VAR_9 = VAR_8; VAR_9 < VAR_10;
      VAR_9 += sizeof(binder_size_t)) {
  struct binder_object_header *VAR_11;
  size_t VAR_12 = 0;
  struct binder_object VAR_13;
  binder_size_t VAR_14;

  if (!FUNC_2(&VAR_3->alloc, &VAR_14,
         VAR_4, VAR_9,
         sizeof(VAR_14)))
   VAR_12 = FUNC_8(VAR_3, VAR_4,
       VAR_14, &VAR_13);
  if (VAR_12 == 0) {
   FUNC_11("transaction release %d bad object at offset %lld, size %zd\n",
          VAR_7, (u64)VAR_14, VAR_4->data_size);
   continue;
  }
  VAR_11 = &VAR_13.hdr;
  switch (VAR_11->type) {
  case 134:
  case 129: {
   struct flat_binder_object *VAR_15;
   struct binder_node *VAR_16;

   VAR_15 = FUNC_13(VAR_11);
   VAR_16 = FUNC_7(VAR_3, VAR_15->binder);
   if (VAR_16 == ((void*)0)) {
    FUNC_11("transaction release %d bad node %016llx\n",
           VAR_7, (u64)VAR_15->binder);
    break;
   }
   FUNC_3(VAR_0,
         "        node %d u%016llx\n",
         VAR_16->debug_id, (u64)VAR_16->ptr);
   FUNC_4(VAR_16, VAR_11->type == 134,
     0);
   FUNC_9(VAR_16);
  } break;
  case 131:
  case 128: {
   struct flat_binder_object *VAR_17;
   struct binder_ref_data VAR_18;
   int VAR_19;

   VAR_17 = FUNC_13(VAR_11);
   VAR_19 = FUNC_5(VAR_3, VAR_17->handle,
    VAR_11->type == 131, &VAR_18);

   if (VAR_19) {
    FUNC_11("transaction release %d bad handle %d, ret = %d\n",
     VAR_7, VAR_17->handle, VAR_19);
    break;
   }
   FUNC_3(VAR_0,
         "        ref %d desc %d\n",
         VAR_18.debug_id, VAR_18.desc);
  } break;

  case 133: {
   FUNC_1(VAR_5 &&
    VAR_3->tsk == VAR_2->group_leader);
  } break;
  case 130:




   break;
  case 132: {
   struct binder_fd_array_object *VAR_20;
   struct binder_buffer_object *VAR_21;
   struct binder_object VAR_22;
   binder_size_t VAR_23;
   size_t VAR_24;
   binder_size_t VAR_25;
   binder_size_t VAR_26;

   if (VAR_3->tsk != VAR_2->group_leader) {





    continue;
   }

   VAR_26 = (VAR_9 - VAR_8) /
      sizeof(binder_size_t);
   VAR_20 = FUNC_12(VAR_11);
   VAR_21 = FUNC_10(VAR_3, VAR_4, &VAR_22,
           VAR_20->parent,
           VAR_8,
           ((void*)0),
           VAR_26);
   if (!VAR_21) {
    FUNC_11("transaction release %d bad parent offset\n",
           VAR_7);
    continue;
   }
   VAR_25 = sizeof(u32) * VAR_20->num_fds;
   if (VAR_20->num_fds >= VAR_1 / sizeof(u32)) {
    FUNC_11("transaction release %d invalid number of fds (%lld)\n",
           VAR_7, (u64)VAR_20->num_fds);
    continue;
   }
   if (VAR_25 > VAR_21->length ||
       VAR_20->parent_offset > VAR_21->length - VAR_25) {

    FUNC_11("transaction release %d not enough space for %lld fds in buffer\n",
           VAR_7, (u64)VAR_20->num_fds);
    continue;
   }







   VAR_23 =
       (VAR_21->buffer - (uintptr_t)VAR_4->user_data) +
       VAR_20->parent_offset;
   for (VAR_24 = 0; VAR_24 < VAR_20->num_fds;
        VAR_24++) {
    u32 VAR_27;
    int VAR_28;
    binder_size_t VAR_29 = VAR_23 +
     VAR_24 * sizeof(VAR_27);

    VAR_28 = FUNC_2(
      &VAR_3->alloc, &VAR_27, VAR_4,
      VAR_29, sizeof(VAR_27));
    FUNC_1(VAR_28);
    if (!VAR_28)
     FUNC_6(VAR_27);
   }
  } break;
  default:
   FUNC_11("transaction release %d bad object type %x\n",
    VAR_7, VAR_11->type);
   break;
  }
 }
}
