
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct set_crtc_using_dtd_timing_parameters {void* modemiscinfo; void* v_syncoffset; void* v_syncwidth; void* h_syncwidth; void* h_syncoffset; void* v_blanking_time; void* v_size; void* h_blanking_time; void* h_size; int crtc_id; int member_0; } ;
struct TYPE_4__ {scalar_t__ HSYNC_POSITIVE_POLARITY; scalar_t__ VSYNC_POSITIVE_POLARITY; scalar_t__ HORZ_COUNT_BY_TWO; scalar_t__ INTERLACE; } ;
struct bp_hw_crtc_timing_parameters {TYPE_2__ flags; scalar_t__ v_sync_width; scalar_t__ v_addressable; scalar_t__ v_sync_start; scalar_t__ h_sync_width; scalar_t__ h_addressable; scalar_t__ h_sync_start; scalar_t__ v_total; scalar_t__ h_total; int controller_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_3__ {scalar_t__ (* controller_id_to_atom ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct set_crtc_using_dtd_timing_parameters) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_6,
 struct bp_hw_crtc_timing_parameters *VAR_7)
{
 enum bp_result VAR_8 = VAR_3;
 struct set_crtc_using_dtd_timing_parameters VAR_9 = {0};
 uint8_t VAR_10;

 if (VAR_6->cmd_helper->controller_id_to_atom(
   VAR_7->controller_id, &VAR_10))
  VAR_9.crtc_id = VAR_10;


 VAR_9.h_size = FUNC_1((uint16_t)VAR_7->h_addressable);

 VAR_9.h_blanking_time =
   FUNC_1((uint16_t)(VAR_7->h_total -
     VAR_7->h_addressable));

 VAR_9.v_size = FUNC_1((uint16_t)VAR_7->v_addressable);

 VAR_9.v_blanking_time =
   FUNC_1((uint16_t)(VAR_7->v_total -
     VAR_7->v_addressable));




 VAR_9.h_syncoffset =
   FUNC_1((uint16_t)(VAR_7->h_sync_start -
     VAR_7->h_addressable));
 VAR_9.h_syncwidth = FUNC_1((uint16_t)VAR_7->h_sync_width);




 VAR_9.v_syncoffset =
   FUNC_1((uint16_t)(VAR_7->v_sync_start -
     VAR_7->v_addressable));
 VAR_9.v_syncwidth = FUNC_1((uint16_t)VAR_7->v_sync_width);






 if (VAR_7->flags.HSYNC_POSITIVE_POLARITY == 0)
  VAR_9.modemiscinfo =
    FUNC_1(FUNC_2(VAR_9.modemiscinfo) |
      VAR_0);

 if (VAR_7->flags.VSYNC_POSITIVE_POLARITY == 0)
  VAR_9.modemiscinfo =
    FUNC_1(FUNC_2(VAR_9.modemiscinfo) |
      VAR_2);

 if (VAR_7->flags.INTERLACE) {
  VAR_9.modemiscinfo =
    FUNC_1(FUNC_2(VAR_9.modemiscinfo) |
      VAR_1);
  {







   VAR_9.v_syncoffset =
    FUNC_1(FUNC_2(VAR_9.v_syncoffset) +
      1);

  }
 }

 if (VAR_7->flags.HORZ_COUNT_BY_TWO)
  VAR_9.modemiscinfo =
   FUNC_1(FUNC_2(VAR_9.modemiscinfo) |
     0x100);

 if (FUNC_0(VAR_5, VAR_9))
  VAR_8 = VAR_4;

 return VAR_8;
}
