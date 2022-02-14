
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct vmw_shader {void* num_output_sig; void* num_input_sig; int type; void* size; } ;
struct vmw_resource {int hw_destroy; int backup_offset; int backup; void* backup_size; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
typedef int SVGA3dShaderType ;


 int FUNC_0 (struct vmw_resource*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_buffer_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmw_shader* FUNC_3 (struct vmw_resource*) ;
 int FUNC_4 (struct vmw_private*,struct vmw_resource*,int,void (*) (struct vmw_resource*),int *) ;

__attribute__((used)) static int FUNC_5(struct vmw_private *VAR_2,
         struct vmw_resource *VAR_3,
         uint32_t VAR_4,
         uint64_t VAR_5,
         SVGA3dShaderType VAR_6,
         uint8_t VAR_7,
         uint8_t VAR_8,
         struct vmw_buffer_object *VAR_9,
         void (*VAR_10) (struct vmw_resource *VAR_11))
{
 struct vmw_shader *VAR_12 = FUNC_3(VAR_3);
 int VAR_13;

 VAR_13 = FUNC_4(VAR_2, VAR_3, 1, VAR_10,
    &VAR_0);

 if (FUNC_1(VAR_13 != 0)) {
  if (VAR_10)
   VAR_10(VAR_3);
  else
   FUNC_0(VAR_3);
  return VAR_13;
 }

 VAR_3->backup_size = VAR_4;
 if (VAR_9) {
  VAR_3->backup = FUNC_2(VAR_9);
  VAR_3->backup_offset = VAR_5;
 }
 VAR_12->size = VAR_4;
 VAR_12->type = VAR_6;
 VAR_12->num_input_sig = VAR_7;
 VAR_12->num_output_sig = VAR_8;

 VAR_3->hw_destroy = VAR_1;
 return 0;
}
