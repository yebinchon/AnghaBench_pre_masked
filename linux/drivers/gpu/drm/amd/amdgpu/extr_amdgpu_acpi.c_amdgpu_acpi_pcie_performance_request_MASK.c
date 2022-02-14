
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_4__ buffer; } ;
typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct atcs_pref_req_output {int ret_val; } ;
struct atcs_pref_req_input {int size; int client_id; int perf_req; int req_type; int flags; int valid_flags_mask; } ;
struct TYPE_5__ {int pcie_perf_req; } ;
struct amdgpu_atcs {TYPE_1__ functions; } ;
struct amdgpu_device {TYPE_3__* pdev; struct amdgpu_atcs atcs; } ;
struct acpi_buffer {int length; struct atcs_pref_req_input* pointer; } ;
typedef int atcs_output ;
typedef int acpi_handle ;
struct TYPE_7__ {int devfn; TYPE_2__* bus; int dev; } ;
struct TYPE_6__ {int number; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 union acpi_object* FUNC_3 (int ,int ,struct acpi_buffer*) ;
 int FUNC_4 (union acpi_object*) ;
 int FUNC_5 (struct atcs_pref_req_output*,scalar_t__,size_t) ;
 int FUNC_6 (struct atcs_pref_req_output*,int ,int) ;
 size_t FUNC_7 (int,size_t) ;
 int FUNC_8 (int) ;

int FUNC_9(struct amdgpu_device *VAR_7,
      u8 VAR_8, bool VAR_9)
{
 acpi_handle VAR_10;
 union acpi_object *VAR_11;
 struct amdgpu_atcs *VAR_12 = &VAR_7->atcs;
 struct atcs_pref_req_input VAR_13;
 struct atcs_pref_req_output VAR_14;
 struct acpi_buffer VAR_15;
 size_t VAR_16;
 u32 VAR_17 = 3;

 if (FUNC_2(VAR_7))
  return -VAR_5;


 VAR_10 = FUNC_0(&VAR_7->pdev->dev);
 if (!VAR_10)
  return -VAR_5;

 if (!VAR_12->functions.pcie_perf_req)
  return -VAR_5;

 VAR_13.size = sizeof(struct atcs_pref_req_input);

 VAR_13.client_id = VAR_7->pdev->devfn | (VAR_7->pdev->bus->number << 8);
 VAR_13.valid_flags_mask = VAR_3;
 VAR_13.flags = VAR_4;
 if (VAR_9)
  VAR_13.flags |= VAR_0;
 VAR_13.req_type = VAR_2;
 VAR_13.perf_req = VAR_8;

 VAR_15.length = sizeof(struct atcs_pref_req_input);
 VAR_15.pointer = &VAR_13;

 while (VAR_17--) {
  VAR_11 = FUNC_3(VAR_10, VAR_1, &VAR_15);
  if (!VAR_11)
   return -VAR_6;

  FUNC_6(&VAR_14, 0, sizeof(VAR_14));

  VAR_16 = *(u16 *) VAR_11->buffer.pointer;
  if (VAR_16 < 3) {
   FUNC_1("ATCS buffer is too small: %zu\n", VAR_16);
   FUNC_4(VAR_11);
   return -VAR_5;
  }
  VAR_16 = FUNC_7(sizeof(VAR_14), VAR_16);

  FUNC_5(&VAR_14, VAR_11->buffer.pointer, VAR_16);

  FUNC_4(VAR_11);

  switch (VAR_14.ret_val) {
  case 128:
  default:
   return -VAR_5;
  case 130:
   return 0;
  case 129:
   FUNC_8(10);
   break;
  }
 }

 return 0;
}
