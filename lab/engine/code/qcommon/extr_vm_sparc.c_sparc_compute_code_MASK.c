
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* codeBase; unsigned int codeLength; scalar_t__ instructionPointers; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_6__ {unsigned int* CallThunk; unsigned int* iPointers; int dataLength; int codeLength; int * data; int ErrJump; int BlockCopy; int AsmCall; } ;
typedef TYPE_2__ vm_data_t ;
struct jump_insn {size_t jump_dest_insn; struct jump_insn* next; int jump_iname; scalar_t__ parent; } ;
struct func_info {int data_num; int * dst_last; struct dst_insn* dst_first; struct dst_insn* data_first; void** dst_by_i_count; struct jump_insn* jump_first; } ;
struct dst_insn {int length; int i_count; int count; struct dst_insn* jump; struct dst_insn* next; int * data; void* parent; int * code; } ;
struct data_hunk {int length; int i_count; int count; struct data_hunk* jump; struct data_hunk* next; int * data; void* parent; int * code; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ,int) ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (struct dst_insn*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (unsigned int*,int *,int) ;
 unsigned char* FUNC_6 (int *,unsigned int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_7(vm_t *VAR_11, struct func_info * const VAR_12)
{
 struct dst_insn *VAR_13 = VAR_12->dst_first;
 unsigned int *VAR_14, *VAR_15;
 unsigned char *VAR_16;
 unsigned int VAR_17;
 int VAR_18 = 0, VAR_19;
 struct data_hunk *VAR_20;
 struct jump_insn *VAR_21;
 vm_data_t *VAR_22;

 while (VAR_13) {
  VAR_18 += VAR_13->length;
  VAR_13 = VAR_13->next;
 }

 VAR_17 = (sizeof(vm_data_t) +
         (VAR_12->data_num * sizeof(unsigned int)) +
         (VAR_18 * sizeof(unsigned int)));

 VAR_16 = FUNC_6(((void*)0), VAR_17, VAR_5 | VAR_6,
        VAR_4 | VAR_2, -1, 0);
 if (VAR_16 == VAR_3)
  FUNC_1("Not enough memory");

 VAR_14 = VAR_15 = (unsigned int *)
  (VAR_16 + FUNC_3(VAR_22[VAR_12->data_num]));

 VAR_13 = VAR_12->dst_first;
 while (VAR_13) {
  int VAR_23 = VAR_13->i_count;

  if (VAR_23 != VAR_8) {
   if (!VAR_12->dst_by_i_count[VAR_23])
    VAR_12->dst_by_i_count[VAR_23] = (void *) VAR_14;
  }
  if (!VAR_13->jump) {
   FUNC_5(VAR_14, &VAR_13->code[0], VAR_13->length * sizeof(unsigned int));
   VAR_14 += VAR_13->length;
  } else {
   int VAR_24;

   VAR_13->jump->parent = (void *) VAR_14;

   for (VAR_24 = 0; VAR_24 < VAR_13->length; VAR_24++)
    VAR_14[VAR_24] = VAR_7;
   VAR_14 += VAR_13->length;
  }

  VAR_13 = VAR_13->next;
 }

 VAR_21 = VAR_12->jump_first;
 while (VAR_21) {
  unsigned int *VAR_25 = (void *) VAR_21->parent;
  unsigned int *VAR_26 = (void *) VAR_12->dst_by_i_count[VAR_21->jump_dest_insn];
  signed int VAR_27 = (VAR_26 - VAR_25);

  *VAR_25 = FUNC_2(VAR_21->jump_iname, VAR_27 << 2);

  VAR_21 = VAR_21->next;
 }

 VAR_11->codeBase = VAR_16;
 VAR_11->codeLength = VAR_17;

 VAR_22 = (vm_data_t *) VAR_16;
 VAR_22->CallThunk = VAR_15 + VAR_0;
 VAR_22->AsmCall = VAR_9;
 VAR_22->BlockCopy = VAR_10;
 VAR_22->iPointers = (unsigned int *) VAR_11->instructionPointers;
 VAR_22->dataLength = FUNC_3(VAR_22[VAR_12->data_num]);
 VAR_22->codeLength = (VAR_14 - VAR_15) * sizeof(unsigned int);
 VAR_22->ErrJump = VAR_1;
 VAR_20 = VAR_12->data_first;
 VAR_19 = 0;
 while (VAR_20) {
  struct data_hunk *VAR_28 = VAR_20->next;
  int VAR_29;

  for (VAR_29 = 0; VAR_29 < VAR_20->count; VAR_29++)
   VAR_22->data[VAR_19 + VAR_29] = VAR_20->data[VAR_29];

  VAR_19 += VAR_20->count;

  FUNC_4(VAR_20);

  VAR_20 = VAR_28;
 }
 VAR_12->data_first = ((void*)0);
 VAR_12->data_num = 0;

 VAR_13 = VAR_12->dst_first;
 while (VAR_13) {
  struct dst_insn *VAR_30 = VAR_13->next;
  if (VAR_13->jump)
   FUNC_4(VAR_13->jump);
  FUNC_4(VAR_13);
  VAR_13 = VAR_30;
 }
 VAR_12->dst_first = VAR_12->dst_last = ((void*)0);
}
