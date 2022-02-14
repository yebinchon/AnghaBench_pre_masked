
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_operation {void* input; void* output; } ;
struct zip_kernel_ctx {struct zip_operation zip_decomp; struct zip_operation zip_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct zip_operation*,int) ;

__attribute__((used)) static int FUNC_3(struct zip_kernel_ctx *VAR_3, int VAR_4)
{
 struct zip_operation *VAR_5 = &VAR_3->zip_comp;
 struct zip_operation *VAR_6 = &VAR_3->zip_decomp;

 FUNC_2(VAR_5, VAR_4);
 FUNC_2(VAR_6, VAR_4);

 VAR_5->input = FUNC_0(VAR_1);
 if (!VAR_5->input)
  return -VAR_0;

 VAR_5->output = FUNC_0(VAR_2);
 if (!VAR_5->output)
  goto err_comp_input;

 VAR_6->input = FUNC_0(VAR_1);
 if (!VAR_6->input)
  goto err_comp_output;

 VAR_6->output = FUNC_0(VAR_2);
 if (!VAR_6->output)
  goto err_decomp_input;

 return 0;

err_decomp_input:
 FUNC_1(VAR_6->input, VAR_1);

err_comp_output:
 FUNC_1(VAR_5->output, VAR_2);

err_comp_input:
 FUNC_1(VAR_5->input, VAR_1);

 return -VAR_0;
}
