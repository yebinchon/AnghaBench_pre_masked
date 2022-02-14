
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {int branch_address; scalar_t__ transfer_status; int res_count; } ;
struct ar_context {size_t last_buffer_index; int regs; int ohci; struct descriptor* descriptors; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct ar_context *VAR_2, unsigned int VAR_3)
{
 struct descriptor *VAR_4;

 VAR_4 = &VAR_2->descriptors[VAR_3];
 VAR_4->branch_address &= FUNC_2(~0xf);
 VAR_4->res_count = FUNC_1(VAR_1);
 VAR_4->transfer_status = 0;

 FUNC_4();
 VAR_4 = &VAR_2->descriptors[VAR_2->last_buffer_index];
 VAR_4->branch_address |= FUNC_2(1);

 VAR_2->last_buffer_index = VAR_3;

 FUNC_3(VAR_2->ohci, FUNC_0(VAR_2->regs), VAR_0);
}
