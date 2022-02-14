
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {int ucPostDiv; void* ulClock; } ;
struct TYPE_22__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_24__ {int ucPllRefDiv; TYPE_6__ ulClock; int ucPllCntlFlag; int ucPllPostDiv; TYPE_5__ ulFbDiv; } ;
struct TYPE_20__ {int ulComputeClockFlag; void* ulClockFreq; } ;
struct TYPE_21__ {TYPE_3__ ulClock; } ;
struct TYPE_19__ {void* ulClock; int ucPostDiv; } ;
struct TYPE_18__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_17__ {int ucCntlFlag; int ucRefDiv; TYPE_1__ ulFbDiv; int ucPostDiv; int ucInputFlag; void* ulClockParams; } ;
struct TYPE_14__ {int usFbDivFrac; int usFbDiv; } ;
struct TYPE_15__ {int ucCntlFlag; int ucRefDiv; TYPE_10__ ulFbDiv; int ucPostDiv; void* ulClockParams; } ;
struct TYPE_26__ {int ucAction; void* ulClock; int usFbDiv; int ucPostDiv; } ;
struct TYPE_25__ {int ucAction; int ucFbDiv; int ucPostDiv; void* ulClock; } ;
union get_clock_dividers {int fb_div; int enable_post_div; int ref_div; int vco_mode; int enable_dithen; int real_clock; TYPE_7__ v6_out; int post_divider; int flags; int post_div; void* frac_fb_div; void* whole_fb_div; TYPE_4__ v6_in; TYPE_2__ v4; TYPE_13__ v5; TYPE_11__ v3; TYPE_9__ v2; TYPE_8__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_16__ {int atom_context; } ;
struct radeon_device {TYPE_12__ mode_info; int family; } ;
struct atom_clock_dividers {int fb_div; int enable_post_div; int ref_div; int vco_mode; int enable_dithen; int real_clock; TYPE_7__ v6_out; int post_divider; int flags; int post_div; void* frac_fb_div; void* whole_fb_div; TYPE_4__ v6_in; TYPE_2__ v4; TYPE_13__ v5; TYPE_11__ v3; TYPE_9__ v2; TYPE_8__ v1; } ;
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
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int*,int*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (union get_clock_dividers*,int ,int) ;

int FUNC_7(struct radeon_device *VAR_10,
       u8 VAR_11,
       u32 VAR_12,
       bool VAR_13,
       struct atom_clock_dividers *VAR_14)
{
 union get_clock_dividers VAR_15;
 int VAR_16 = FUNC_0(VAR_6, VAR_8);
 u8 VAR_17, VAR_18;

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 FUNC_6(VAR_14, 0, sizeof(struct atom_clock_dividers));

 if (!FUNC_2(VAR_10->mode_info.atom_context, VAR_16, &VAR_17, &VAR_18))
  return -VAR_9;

 switch (VAR_18) {
 case 1:

  VAR_15.v1.ucAction = VAR_11;
  VAR_15.v1.ulClock = FUNC_3(VAR_12);

  FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

  VAR_14->post_div = VAR_15.v1.ucPostDiv;
  VAR_14->fb_div = VAR_15.v1.ucFbDiv;
  VAR_14->enable_post_div = 1;
  break;
 case 2:
 case 3:
 case 5:

  if (VAR_10->family <= VAR_4) {
   VAR_15.v2.ucAction = VAR_11;
   VAR_15.v2.ulClock = FUNC_3(VAR_12);

   FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

   VAR_14->post_div = VAR_15.v2.ucPostDiv;
   VAR_14->fb_div = FUNC_4(VAR_15.v2.usFbDiv);
   VAR_14->ref_div = VAR_15.v2.ucAction;
   if (VAR_10->family == VAR_4) {
    VAR_14->enable_post_div = (FUNC_5(VAR_15.v2.ulClock) & (1 << 24)) ?
     1 : 0;
    VAR_14->vco_mode = (FUNC_5(VAR_15.v2.ulClock) & (1 << 25)) ? 1 : 0;
   } else
    VAR_14->enable_post_div = (VAR_14->fb_div & 1) ? 1 : 0;
  } else {
   if (VAR_11 == VAR_7) {
    VAR_15.v3.ulClockParams = FUNC_3((VAR_11 << 24) | VAR_12);

    FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

    VAR_14->post_div = VAR_15.v3.ucPostDiv;
    VAR_14->enable_post_div = (VAR_15.v3.ucCntlFlag &
            VAR_2) ? 1 : 0;
    VAR_14->enable_dithen = (VAR_15.v3.ucCntlFlag &
          VAR_0) ? 0 : 1;
    VAR_14->whole_fb_div = FUNC_4(VAR_15.v3.ulFbDiv.usFbDiv);
    VAR_14->frac_fb_div = FUNC_4(VAR_15.v3.ulFbDiv.usFbDivFrac);
    VAR_14->ref_div = VAR_15.v3.ucRefDiv;
    VAR_14->vco_mode = (VAR_15.v3.ucCntlFlag &
            VAR_1) ? 1 : 0;
   } else {

    if (VAR_10->family >= VAR_5)
     return -VAR_9;
    VAR_15.v5.ulClockParams = FUNC_3((VAR_11 << 24) | VAR_12);
    if (VAR_13)
     VAR_15.v5.ucInputFlag = VAR_3;

    FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

    VAR_14->post_div = VAR_15.v5.ucPostDiv;
    VAR_14->enable_post_div = (VAR_15.v5.ucCntlFlag &
            VAR_2) ? 1 : 0;
    VAR_14->enable_dithen = (VAR_15.v5.ucCntlFlag &
          VAR_0) ? 0 : 1;
    VAR_14->whole_fb_div = FUNC_4(VAR_15.v5.ulFbDiv.usFbDiv);
    VAR_14->frac_fb_div = FUNC_4(VAR_15.v5.ulFbDiv.usFbDivFrac);
    VAR_14->ref_div = VAR_15.v5.ucRefDiv;
    VAR_14->vco_mode = (VAR_15.v5.ucCntlFlag &
            VAR_1) ? 1 : 0;
   }
  }
  break;
 case 4:

  VAR_15.v4.ulClock = FUNC_3(VAR_12);

  FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

  VAR_14->post_divider = VAR_14->post_div = VAR_15.v4.ucPostDiv;
  VAR_14->real_clock = FUNC_5(VAR_15.v4.ulClock);
  break;
 case 6:


  VAR_15.v6_in.ulClock.ulComputeClockFlag = VAR_11;
  VAR_15.v6_in.ulClock.ulClockFreq = FUNC_3(VAR_12);

  FUNC_1(VAR_10->mode_info.atom_context, VAR_16, (uint32_t *)&VAR_15);

  VAR_14->whole_fb_div = FUNC_4(VAR_15.v6_out.ulFbDiv.usFbDiv);
  VAR_14->frac_fb_div = FUNC_4(VAR_15.v6_out.ulFbDiv.usFbDivFrac);
  VAR_14->ref_div = VAR_15.v6_out.ucPllRefDiv;
  VAR_14->post_div = VAR_15.v6_out.ucPllPostDiv;
  VAR_14->flags = VAR_15.v6_out.ucPllCntlFlag;
  VAR_14->real_clock = FUNC_5(VAR_15.v6_out.ulClock.ulClock);
  VAR_14->post_divider = VAR_15.v6_out.ulClock.ucPostDiv;
  break;
 default:
  return -VAR_9;
 }
 return 0;
}
