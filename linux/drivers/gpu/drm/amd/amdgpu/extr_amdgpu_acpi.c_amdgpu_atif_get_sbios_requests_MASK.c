
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct atif_sbios_requests {int pending; } ;
struct amdgpu_atif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_1 (struct amdgpu_atif*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union acpi_object*) ;
 int FUNC_4 (struct atif_sbios_requests*,scalar_t__,size_t) ;
 int FUNC_5 (struct atif_sbios_requests*,int ,int) ;
 size_t FUNC_6 (int,size_t) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_atif *VAR_3,
       struct atif_sbios_requests *VAR_4)
{
 union acpi_object *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0,
    ((void*)0));
 if (!VAR_5)
  return -VAR_2;

 VAR_6 = *(u16 *)VAR_5->buffer.pointer;
 if (VAR_6 < 0xd) {
  VAR_7 = -VAR_1;
  goto out;
 }
 FUNC_5(VAR_4, 0, sizeof(*VAR_4));

 VAR_6 = FUNC_6(sizeof(*VAR_4), VAR_6);
 FUNC_4(VAR_4, VAR_5->buffer.pointer, VAR_6);
 FUNC_0("SBIOS pending requests: %#x\n", VAR_4->pending);

 VAR_7 = FUNC_2(VAR_4->pending);

out:
 FUNC_3(VAR_5);
 return VAR_7;
}
