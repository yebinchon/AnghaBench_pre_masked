
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct screen_info {int lfb_height; int lfb_base; int ext_lfb_base; int pages; int lfb_size; int lfb_linelength; int capabilities; void* lfb_width; int orig_video_isVGA; } ;
struct efi_pixel_bitmask {int dummy; } ;
struct efi_graphics_output_protocol_64 {int dummy; } ;
struct efi_graphics_output_mode_info {int pixel_format; int pixels_per_scan_line; struct efi_pixel_bitmask pixel_information; void* vertical_resolution; void* horizontal_resolution; } ;
typedef int efi_system_table_t ;
typedef int efi_status_t ;
typedef int efi_handle_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct efi_graphics_output_protocol_64*,struct efi_graphics_output_mode_info**,unsigned long*,int*) ;
 int FUNC_1 (int ,int ,int *,void**) ;
 int VAR_7 ;
 int FUNC_2 (struct screen_info*,int,struct efi_pixel_bitmask,int) ;

__attribute__((used)) static efi_status_t
FUNC_3(efi_system_table_t *VAR_8, struct screen_info *VAR_9,
     efi_guid_t *VAR_10, unsigned long VAR_11, void **VAR_12)
{
 struct efi_graphics_output_protocol_64 *VAR_13, *VAR_14;
 unsigned long VAR_15;
 u16 VAR_16, VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u64 VAR_20;
 struct efi_pixel_bitmask VAR_21;
 int VAR_22;
 efi_status_t VAR_23 = VAR_1;
 u64 *VAR_24 = (u64 *)(unsigned long)VAR_12;
 int VAR_25;

 VAR_14 = ((void*)0);
 VAR_13 = ((void*)0);

 VAR_15 = VAR_11 / sizeof(u64);
 for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++) {
  struct efi_graphics_output_mode_info *VAR_26 = ((void*)0);
  efi_guid_t VAR_27 = VAR_0;
  bool VAR_28 = 0;
  void *VAR_29 = ((void*)0);
  efi_handle_t VAR_30 = (efi_handle_t)(unsigned long)VAR_24[VAR_25];
  u64 VAR_31;

  VAR_23 = FUNC_1(VAR_7, VAR_30,
     VAR_10, (void **)&VAR_13);
  if (VAR_23 != VAR_2)
   continue;

  VAR_23 = FUNC_1(VAR_7, VAR_30,
     &VAR_27, &VAR_29);
  if (VAR_23 == VAR_2)
   VAR_28 = 1;

  VAR_23 = FUNC_0(VAR_8, VAR_13, &VAR_26, &VAR_11,
           &VAR_31);
  if (VAR_23 == VAR_2 && (!VAR_14 || VAR_28) &&
      VAR_26->pixel_format != VAR_3) {







   VAR_16 = VAR_26->horizontal_resolution;
   VAR_17 = VAR_26->vertical_resolution;
   VAR_22 = VAR_26->pixel_format;
   VAR_21 = VAR_26->pixel_information;
   VAR_18 = VAR_26->pixels_per_scan_line;
   VAR_20 = VAR_31;





   VAR_14 = VAR_13;
   if (VAR_28)
    break;
  }
 }


 if (!VAR_14)
  goto out;


 VAR_9->orig_video_isVGA = VAR_6;

 VAR_9->lfb_width = VAR_16;
 VAR_9->lfb_height = VAR_17;
 VAR_9->lfb_base = VAR_20;

 VAR_19 = (u64)(unsigned long)VAR_20 >> 32;
 if (VAR_19) {
  VAR_9->capabilities |= VAR_4;
  VAR_9->ext_lfb_base = VAR_19;
 }

 VAR_9->pages = 1;

 FUNC_2(VAR_9, VAR_18, VAR_21, VAR_22);

 VAR_9->lfb_size = VAR_9->lfb_linelength * VAR_9->lfb_height;

 VAR_9->capabilities |= VAR_5;
out:
 return VAR_23;
}
