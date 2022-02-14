
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long address; scalar_t__ size; } ;
struct saved_context {int misc_enable_saved; int misc_enable; int cr4; int cr3; int cr2; int cr0; int efer; int usermode_gs_base; int kernelmode_gs_base; int fs_base; int es; int ds; int fs; int gs; int tr; TYPE_1__ gdt_desc; int idt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (struct saved_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct saved_context *VAR_10)
{



 FUNC_3();




 FUNC_12(&VAR_10->idt);







 VAR_10->gdt_desc.size = VAR_0 - 1;
 VAR_10->gdt_desc.address = (unsigned long)FUNC_2(FUNC_11());

 FUNC_13(VAR_10->tr);
 VAR_10->cr0 = FUNC_8();
 VAR_10->cr2 = FUNC_9();
 VAR_10->cr3 = FUNC_0();
 VAR_10->cr4 = FUNC_1();
 VAR_10->misc_enable_saved = !FUNC_7(VAR_4,
            &VAR_10->misc_enable);
 FUNC_4(VAR_10);
}
