
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef int u32 ;
typedef size_t u16 ;
struct atpx_px_params {int flags; int valid_flags; } ;
struct TYPE_5__ {int i2c_mux_cntl; int disp_mux_cntl; int power_cntl; scalar_t__ px_params; } ;
struct amdgpu_atpx {int is_hybrid; int dgpu_req_power_for_displays; TYPE_2__ functions; int handle; } ;
typedef int output ;
struct TYPE_6__ {int quirks; int bridge_pm_usable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union acpi_object* FUNC_0 (int ,int ,int *) ;
 TYPE_3__ VAR_12 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (struct atpx_px_params*,scalar_t__,size_t) ;
 int FUNC_3 (struct atpx_px_params*,int ,int) ;
 size_t FUNC_4 (int,size_t) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_atpx *VAR_13)
{
 u32 VAR_14 = 0;

 if (VAR_13->functions.px_params) {
  union acpi_object *VAR_15;
  struct atpx_px_params VAR_16;
  size_t VAR_17;

  VAR_15 = FUNC_0(VAR_13->handle, VAR_6, ((void*)0));
  if (!VAR_15)
   return -VAR_11;

  FUNC_3(&VAR_16, 0, sizeof(VAR_16));

  VAR_17 = *(u16 *) VAR_15->buffer.pointer;
  if (VAR_17 < 10) {
   FUNC_5("ATPX buffer is too small: %zu\n", VAR_17);
   FUNC_1(VAR_15);
   return -VAR_10;
  }
  VAR_17 = FUNC_4(sizeof(VAR_16), VAR_17);

  FUNC_2(&VAR_16, VAR_15->buffer.pointer, VAR_17);

  VAR_14 = VAR_16.flags & VAR_16.valid_flags;

  FUNC_1(VAR_15);
 }


 if (VAR_14 & VAR_8) {
  VAR_13->functions.i2c_mux_cntl = 1;
  VAR_13->functions.disp_mux_cntl = 1;
 }

 if (VAR_14 & (VAR_1 |
     VAR_9 |
     VAR_2))
  VAR_13->functions.disp_mux_cntl = 1;



 if (VAR_14 & (VAR_5 |
     VAR_4))
  VAR_13->functions.power_cntl = 1;

 VAR_13->is_hybrid = 0;
 if (VAR_14 & VAR_7) {
  if (VAR_12.quirks & VAR_0) {
   FUNC_5("ATPX Hybrid Graphics, forcing to ATPX\n");
   VAR_13->functions.power_cntl = 1;
   VAR_13->is_hybrid = 0;
  } else {
   FUNC_5("ATPX Hybrid Graphics\n");




   VAR_13->functions.power_cntl = !VAR_12.bridge_pm_usable;
   VAR_13->is_hybrid = 1;
  }
 }

 VAR_13->dgpu_req_power_for_displays = 0;
 if (VAR_14 & VAR_3)
  VAR_13->dgpu_req_power_for_displays = 1;

 return 0;
}
