
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct descriptor_buffer {int buffer_bus; int used; struct descriptor* buffer; } ;
struct descriptor {int control; void* branch_address; } ;
struct context {int prev_z; struct descriptor* prev; TYPE_1__* ohci; struct descriptor_buffer* buffer_tail; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 struct descriptor* FUNC_2 (struct descriptor*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct context *VAR_3,
      struct descriptor *VAR_4, int VAR_5, int VAR_6)
{
 dma_addr_t VAR_7;
 struct descriptor_buffer *VAR_8 = VAR_3->buffer_tail;
 struct descriptor *VAR_9;

 VAR_7 = VAR_8->buffer_bus + (VAR_4 - VAR_8->buffer) * sizeof(*VAR_4);

 VAR_8->used += (VAR_5 + VAR_6) * sizeof(*VAR_4);

 FUNC_4();

 VAR_9 = FUNC_2(VAR_3->prev, VAR_3->prev_z);
 VAR_9->branch_address = FUNC_1(VAR_7 | VAR_5);
 if (FUNC_3(VAR_3->ohci->quirks & VAR_2) &&
     VAR_9 != VAR_3->prev &&
     (VAR_3->prev->control & FUNC_0(VAR_0)) ==
      FUNC_0(VAR_1)) {
  VAR_3->prev->branch_address = FUNC_1(VAR_7 | VAR_5);
 }

 VAR_3->prev = VAR_4;
 VAR_3->prev_z = VAR_5;
}
