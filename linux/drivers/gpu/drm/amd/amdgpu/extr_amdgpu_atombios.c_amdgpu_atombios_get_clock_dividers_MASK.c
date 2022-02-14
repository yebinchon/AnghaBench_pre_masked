
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int ucPostDiv; void* ulClock; } ;
struct TYPE_22__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_13__ {TYPE_10__ ulClock; int ucPllCntlFlag; int ucPllPostDiv; int ucPllRefDiv; TYPE_9__ ulFbDiv; } ;
struct TYPE_19__ {int ulComputeClockFlag; void* ulClockFreq; } ;
struct TYPE_20__ {TYPE_6__ ulClock; } ;
struct TYPE_18__ {void* ulClock; int ucPostDiv; } ;
struct TYPE_16__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_17__ {int ucCntlFlag; int ucRefDiv; TYPE_3__ ulFbDiv; int ucPostDiv; int ucInputFlag; void* ulClockParams; } ;
struct TYPE_14__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_15__ {int ucCntlFlag; int ucRefDiv; TYPE_1__ ulFbDiv; int ucPostDiv; void* ulClockParams; } ;
union get_clock_dividers {int enable_post_div; int enable_dithen; int vco_mode; TYPE_11__ v6_out; int post_divider; void* real_clock; int flags; int post_div; int ref_div; void* frac_fb_div; void* whole_fb_div; TYPE_7__ v6_in; TYPE_5__ v4; TYPE_4__ v5; TYPE_2__ v3; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct atom_clock_dividers {int enable_post_div; int enable_dithen; int vco_mode; TYPE_11__ v6_out; int post_divider; void* real_clock; int flags; int post_div; int ref_div; void* frac_fb_div; void* whole_fb_div; TYPE_7__ v6_in; TYPE_5__ v4; TYPE_4__ v5; TYPE_2__ v3; } ;
struct TYPE_21__ {int atom_context; } ;
struct amdgpu_device {TYPE_8__ mode_info; int asic_type; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int*,int*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (union get_clock_dividers*,int ,int) ;

int FUNC_7(struct amdgpu_device *VAR_9,
           u8 VAR_10,
           u32 VAR_11,
           bool VAR_12,
           struct atom_clock_dividers *VAR_13)
{
 union get_clock_dividers VAR_14;
 int VAR_15 = FUNC_0(VAR_5, VAR_7);
 u8 VAR_16, VAR_17;

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 FUNC_6(VAR_13, 0, sizeof(struct atom_clock_dividers));

 if (!FUNC_2(VAR_9->mode_info.atom_context, VAR_15, &VAR_16, &VAR_17))
  return -VAR_8;

 switch (VAR_17) {
 case 2:
 case 3:
 case 5:


  if (VAR_10 == VAR_6) {
   VAR_14.v3.ulClockParams = FUNC_3((VAR_10 << 24) | VAR_11);

   FUNC_1(VAR_9->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_14);

   VAR_13->post_div = VAR_14.v3.ucPostDiv;
   VAR_13->enable_post_div = (VAR_14.v3.ucCntlFlag &
           VAR_2) ? 1 : 0;
   VAR_13->enable_dithen = (VAR_14.v3.ucCntlFlag &
         VAR_0) ? 0 : 1;
   VAR_13->whole_fb_div = FUNC_4(VAR_14.v3.ulFbDiv.usFbDiv);
   VAR_13->frac_fb_div = FUNC_4(VAR_14.v3.ulFbDiv.usFbDivFrac);
   VAR_13->ref_div = VAR_14.v3.ucRefDiv;
   VAR_13->vco_mode = (VAR_14.v3.ucCntlFlag &
           VAR_1) ? 1 : 0;
  } else {

   if (VAR_9->asic_type >= VAR_4)
    return -VAR_8;
   VAR_14.v5.ulClockParams = FUNC_3((VAR_10 << 24) | VAR_11);
   if (VAR_12)
    VAR_14.v5.ucInputFlag = VAR_3;

   FUNC_1(VAR_9->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_14);

   VAR_13->post_div = VAR_14.v5.ucPostDiv;
   VAR_13->enable_post_div = (VAR_14.v5.ucCntlFlag &
           VAR_2) ? 1 : 0;
   VAR_13->enable_dithen = (VAR_14.v5.ucCntlFlag &
         VAR_0) ? 0 : 1;
   VAR_13->whole_fb_div = FUNC_4(VAR_14.v5.ulFbDiv.usFbDiv);
   VAR_13->frac_fb_div = FUNC_4(VAR_14.v5.ulFbDiv.usFbDivFrac);
   VAR_13->ref_div = VAR_14.v5.ucRefDiv;
   VAR_13->vco_mode = (VAR_14.v5.ucCntlFlag &
           VAR_1) ? 1 : 0;
  }
  break;
 case 4:

  VAR_14.v4.ulClock = FUNC_3(VAR_11);

  FUNC_1(VAR_9->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_14);

  VAR_13->post_divider = VAR_13->post_div = VAR_14.v4.ucPostDiv;
  VAR_13->real_clock = FUNC_5(VAR_14.v4.ulClock);
  break;
 case 6:


  VAR_14.v6_in.ulClock.ulComputeClockFlag = VAR_10;
  VAR_14.v6_in.ulClock.ulClockFreq = FUNC_3(VAR_11);

  FUNC_1(VAR_9->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_14);

  VAR_13->whole_fb_div = FUNC_4(VAR_14.v6_out.ulFbDiv.usFbDiv);
  VAR_13->frac_fb_div = FUNC_4(VAR_14.v6_out.ulFbDiv.usFbDivFrac);
  VAR_13->ref_div = VAR_14.v6_out.ucPllRefDiv;
  VAR_13->post_div = VAR_14.v6_out.ucPllPostDiv;
  VAR_13->flags = VAR_14.v6_out.ucPllCntlFlag;
  VAR_13->real_clock = FUNC_5(VAR_14.v6_out.ulClock.ulClock);
  VAR_13->post_divider = VAR_14.v6_out.ulClock.ucPostDiv;
  break;
 default:
  return -VAR_8;
 }
 return 0;
}
