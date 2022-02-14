
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct screen_info {int lfb_depth; int red_size; int red_pos; int green_size; int green_pos; int blue_size; int rsvd_size; int rsvd_pos; scalar_t__ blue_pos; void* lfb_height; void* lfb_width; int orig_video_isVGA; } ;
typedef int efi_uga_draw_protocol_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,...) ;
 scalar_t__ FUNC_1 (int ,int ,int *,void**,void**,void**,void**) ;
 scalar_t__ FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static efi_status_t
FUNC_3(struct screen_info *VAR_11, efi_guid_t *VAR_12, unsigned long VAR_13)
{
 efi_status_t VAR_14;
 u32 VAR_15, VAR_16;
 void **VAR_17 = ((void*)0);
 efi_uga_draw_protocol_t *VAR_18 = ((void*)0), *VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 VAR_14 = FUNC_0(VAR_5, VAR_0,
    VAR_13, (void **)&VAR_17);
 if (VAR_14 != VAR_3)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_10,
    VAR_1,
    VAR_12, ((void*)0), &VAR_13, VAR_17);
 if (VAR_14 != VAR_3)
  goto free_handle;

 VAR_16 = 0;
 VAR_15 = 0;

 VAR_19 = ((void*)0);
 VAR_20 = VAR_13 / (FUNC_2() ? sizeof(u64) : sizeof(u32));
 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  efi_guid_t VAR_22 = VAR_2;
  u32 VAR_23, VAR_24, VAR_25, VAR_26;
  void *VAR_27;
  unsigned long VAR_28 = FUNC_2() ? ((u64 *)VAR_17)[VAR_21]
            : ((u32 *)VAR_17)[VAR_21];

  VAR_14 = FUNC_0(VAR_9, VAR_28,
     VAR_12, (void **)&VAR_18);
  if (VAR_14 != VAR_3)
   continue;

  VAR_27 = ((void*)0);
  FUNC_0(VAR_9, VAR_28, &VAR_22, &VAR_27);

  VAR_14 = FUNC_1(VAR_6, VAR_8, VAR_18,
     &VAR_23, &VAR_24, &VAR_25, &VAR_26);
  if (VAR_14 == VAR_3 && (!VAR_19 || VAR_27)) {
   VAR_15 = VAR_23;
   VAR_16 = VAR_24;





   if (VAR_27)
    break;

   VAR_19 = VAR_18;
  }
 }

 if (!VAR_15 && !VAR_16)
  goto free_handle;


 VAR_11->orig_video_isVGA = VAR_4;

 VAR_11->lfb_depth = 32;
 VAR_11->lfb_width = VAR_15;
 VAR_11->lfb_height = VAR_16;

 VAR_11->red_size = 8;
 VAR_11->red_pos = 16;
 VAR_11->green_size = 8;
 VAR_11->green_pos = 8;
 VAR_11->blue_size = 8;
 VAR_11->blue_pos = 0;
 VAR_11->rsvd_size = 8;
 VAR_11->rsvd_pos = 24;

free_handle:
 FUNC_0(VAR_7, VAR_17);

 return VAR_14;
}
