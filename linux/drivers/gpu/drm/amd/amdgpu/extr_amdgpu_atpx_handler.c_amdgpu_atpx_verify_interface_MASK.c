
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct atpx_verify_interface {int function_bits; int version; } ;
struct amdgpu_atpx {int functions; int handle; } ;
typedef int output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (struct atpx_verify_interface*,scalar_t__,size_t) ;
 int FUNC_4 (struct atpx_verify_interface*,int ,int) ;
 size_t FUNC_5 (int,size_t) ;
 int FUNC_6 (char*,size_t,...) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_atpx *VAR_3)
{
 union acpi_object *VAR_4;
 struct atpx_verify_interface VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 VAR_4 = FUNC_0(VAR_3->handle, VAR_0, ((void*)0));
 if (!VAR_4)
  return -VAR_2;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = *(u16 *) VAR_4->buffer.pointer;
 if (VAR_6 < 8) {
  FUNC_6("ATPX buffer is too small: %zu\n", VAR_6);
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6 = FUNC_5(sizeof(VAR_5), VAR_6);

 FUNC_3(&VAR_5, VAR_4->buffer.pointer, VAR_6);


 FUNC_6("ATPX version %u, functions 0x%08x\n",
        VAR_5.version, VAR_5.function_bits);

 FUNC_1(&VAR_3->functions, VAR_5.function_bits);

out:
 FUNC_2(VAR_4);
 return VAR_7;
}
