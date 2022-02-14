
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct fw_ohci {scalar_t__ misc_buffer_bus; struct descriptor* misc_buffer; TYPE_1__ card; } ;
struct descriptor {void* branch_address; void* data_address; void* control; void* req_count; } ;
struct ar_context {scalar_t__ descriptors_bus; struct descriptor* descriptors; int buffer; struct page** pages; int tasklet; struct fw_ohci* ohci; int regs; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct page**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ar_context*,unsigned int) ;
 int FUNC_4 (struct ar_context*) ;
 int VAR_12 ;
 int FUNC_5 (unsigned int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 int FUNC_12 (struct page**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct ar_context *VAR_13, struct fw_ohci *VAR_14,
      unsigned int VAR_15, u32 VAR_16)
{
 unsigned int VAR_17;
 dma_addr_t VAR_18;
 struct page *VAR_19[VAR_0 + VAR_1];
 struct descriptor *VAR_20;

 VAR_13->regs = VAR_16;
 VAR_13->ohci = VAR_14;
 FUNC_11(&VAR_13->tasklet, VAR_12, (unsigned long)VAR_13);

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_13->pages[VAR_17] = FUNC_2(VAR_8 | VAR_7);
  if (!VAR_13->pages[VAR_17])
   goto out_of_memory;
  VAR_18 = FUNC_8(VAR_14->card.device, VAR_13->pages[VAR_17],
     0, VAR_10, VAR_5);
  if (FUNC_9(VAR_14->card.device, VAR_18)) {
   FUNC_1(VAR_13->pages[VAR_17]);
   VAR_13->pages[VAR_17] = ((void*)0);
   goto out_of_memory;
  }
  FUNC_10(VAR_13->pages[VAR_17], VAR_18);
 }

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
  VAR_19[VAR_17] = VAR_13->pages[VAR_17];
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
  VAR_19[VAR_0 + VAR_17] = VAR_13->pages[VAR_17];
 VAR_13->buffer = FUNC_12(VAR_19, FUNC_0(VAR_19), VAR_11, VAR_9);
 if (!VAR_13->buffer)
  goto out_of_memory;

 VAR_13->descriptors = VAR_14->misc_buffer + VAR_15;
 VAR_13->descriptors_bus = VAR_14->misc_buffer_bus + VAR_15;

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_20 = &VAR_13->descriptors[VAR_17];
  VAR_20->req_count = FUNC_6(VAR_10);
  VAR_20->control = FUNC_6(VAR_3 |
      VAR_4 |
      VAR_2);
  VAR_20->data_address = FUNC_7(FUNC_3(VAR_13, VAR_17));
  VAR_20->branch_address = FUNC_7(VAR_13->descriptors_bus +
   FUNC_5(VAR_17) * sizeof(struct descriptor));
 }

 return 0;

out_of_memory:
 FUNC_4(VAR_13);

 return -VAR_6;
}
