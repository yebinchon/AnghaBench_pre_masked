
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_operation {int output; int input; } ;
struct zip_kernel_ctx {struct zip_operation zip_decomp; struct zip_operation zip_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct zip_kernel_ctx *VAR_2)
{
 struct zip_operation *VAR_3 = &VAR_2->zip_comp;
 struct zip_operation *VAR_4 = &VAR_2->zip_decomp;

 FUNC_0(VAR_3->input, VAR_0);
 FUNC_0(VAR_3->output, VAR_1);

 FUNC_0(VAR_4->input, VAR_0);
 FUNC_0(VAR_4->output, VAR_1);
}
