
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct atif_verify_interface {int function_bits; int notification_mask; int version; } ;
struct amdgpu_atif {int functions; int notifications; } ;
typedef int output ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_2 (struct amdgpu_atif*,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (union acpi_object*) ;
 int FUNC_6 (struct atif_verify_interface*,scalar_t__,size_t) ;
 int FUNC_7 (struct atif_verify_interface*,int ,int) ;
 size_t FUNC_8 (int,size_t) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_atif *VAR_3)
{
 union acpi_object *VAR_4;
 struct atif_verify_interface VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 VAR_4 = FUNC_2(VAR_3, VAR_0, ((void*)0));
 if (!VAR_4)
  return -VAR_2;

 FUNC_7(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = *(u16 *) VAR_4->buffer.pointer;
 if (VAR_6 < 12) {
  FUNC_1("ATIF buffer is too small: %zu\n", VAR_6);
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6 = FUNC_8(sizeof(VAR_5), VAR_6);

 FUNC_6(&VAR_5, VAR_4->buffer.pointer, VAR_6);


 FUNC_0("ATIF version %u\n", VAR_5.version);

 FUNC_4(&VAR_3->notifications, VAR_5.notification_mask);
 FUNC_3(&VAR_3->functions, VAR_5.function_bits);

out:
 FUNC_5(VAR_4);
 return VAR_7;
}
