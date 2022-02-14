
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zip_state {int dummy; } ;
struct zip_operation {unsigned int input_len; unsigned int output_len; int const* output; int * input; } ;
struct zip_kernel_ctx {struct zip_operation zip_comp; } ;
struct zip_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zip_state*) ;
 struct zip_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int FUNC_3 (struct zip_operation*,struct zip_state*,struct zip_device*) ;
 struct zip_device* FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const u8 *VAR_3, unsigned int VAR_4,
   u8 *VAR_5, unsigned int *VAR_6,
   struct zip_kernel_ctx *VAR_7)
{
 struct zip_operation *VAR_8 = ((void*)0);
 struct zip_state *VAR_9;
 struct zip_device *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_7 || !VAR_3 || !VAR_5 || !VAR_6)
  return -VAR_1;

 VAR_10 = FUNC_4(FUNC_5());
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = &VAR_7->zip_comp;

 VAR_8->input_len = VAR_4;
 VAR_8->output_len = *VAR_6;
 FUNC_2(VAR_8->input, VAR_3, VAR_4);

 VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_10);

 if (!VAR_11) {
  *VAR_6 = VAR_8->output_len;
  FUNC_2(VAR_5, VAR_8->output, *VAR_6);
 }
 FUNC_0(VAR_9);
 return VAR_11;
}
