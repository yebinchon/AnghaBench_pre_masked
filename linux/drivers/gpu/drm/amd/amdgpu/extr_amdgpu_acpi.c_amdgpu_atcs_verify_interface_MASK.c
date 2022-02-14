
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct atcs_verify_interface {int function_bits; int version; } ;
struct amdgpu_atcs {int functions; } ;
typedef int output ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (union acpi_object*) ;
 int FUNC_5 (struct atcs_verify_interface*,scalar_t__,size_t) ;
 int FUNC_6 (struct atcs_verify_interface*,int ,int) ;
 size_t FUNC_7 (int,size_t) ;

__attribute__((used)) static int FUNC_8(acpi_handle VAR_3,
     struct amdgpu_atcs *VAR_4)
{
 union acpi_object *VAR_5;
 struct atcs_verify_interface VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_2(VAR_3, VAR_0, ((void*)0));
 if (!VAR_5)
  return -VAR_2;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));

 VAR_7 = *(u16 *) VAR_5->buffer.pointer;
 if (VAR_7 < 8) {
  FUNC_1("ATCS buffer is too small: %zu\n", VAR_7);
  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_7 = FUNC_7(sizeof(VAR_6), VAR_7);

 FUNC_5(&VAR_6, VAR_5->buffer.pointer, VAR_7);


 FUNC_0("ATCS version %u\n", VAR_6.version);

 FUNC_3(&VAR_4->functions, VAR_6.function_bits);

out:
 FUNC_4(VAR_5);
 return VAR_8;
}
