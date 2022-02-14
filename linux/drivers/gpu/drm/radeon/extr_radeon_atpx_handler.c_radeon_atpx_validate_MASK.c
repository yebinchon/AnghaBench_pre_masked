
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
struct TYPE_5__ {int i2c_mux_cntl; int disp_mux_cntl; int power_cntl; scalar_t__ px_params; } ;
struct radeon_atpx {int is_hybrid; TYPE_2__ functions; int handle; } ;
struct atpx_px_params {int flags; int valid_flags; } ;
typedef int output ;
struct TYPE_6__ {int bridge_pm_usable; } ;


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
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct atpx_px_params*,scalar_t__,size_t) ;
 int FUNC_2 (struct atpx_px_params*,int ,int) ;
 size_t FUNC_3 (int,size_t) ;
 int FUNC_4 (char*,...) ;
 union acpi_object* FUNC_5 (int ,int ,int *) ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static int FUNC_6(struct radeon_atpx *VAR_11)
{
 u32 VAR_12 = 0;

 if (VAR_11->functions.px_params) {
  union acpi_object *VAR_13;
  struct atpx_px_params VAR_14;
  size_t VAR_15;

  VAR_13 = FUNC_5(VAR_11->handle, VAR_4, ((void*)0));
  if (!VAR_13)
   return -VAR_9;

  FUNC_2(&VAR_14, 0, sizeof(VAR_14));

  VAR_15 = *(u16 *) VAR_13->buffer.pointer;
  if (VAR_15 < 10) {
   FUNC_4("ATPX buffer is too small: %zu\n", VAR_15);
   FUNC_0(VAR_13);
   return -VAR_8;
  }
  VAR_15 = FUNC_3(sizeof(VAR_14), VAR_15);

  FUNC_1(&VAR_14, VAR_13->buffer.pointer, VAR_15);

  VAR_12 = VAR_14.flags & VAR_14.valid_flags;

  FUNC_0(VAR_13);
 }


 if (VAR_12 & VAR_6) {
  VAR_11->functions.i2c_mux_cntl = 1;
  VAR_11->functions.disp_mux_cntl = 1;
 }

 if (VAR_12 & (VAR_0 |
     VAR_7 |
     VAR_1))
  VAR_11->functions.disp_mux_cntl = 1;


 if (VAR_12 & (VAR_3 |
     VAR_2))
  VAR_11->functions.power_cntl = 1;

 VAR_11->is_hybrid = 0;
 if (VAR_12 & VAR_5) {
  FUNC_4("ATPX Hybrid Graphics\n");




  VAR_11->functions.power_cntl = !VAR_10.bridge_pm_usable;
  VAR_11->is_hybrid = 1;
 }

 return 0;
}
