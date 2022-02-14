
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msm_drm_private {int wq; } ;
struct drm_encoder {int crtc; TYPE_1__* dev; } ;
struct TYPE_4__ {int capabilities; } ;
struct dpu_encoder_virt {int rc_state; int idle_pc_supported; int rc_lock; int * frame_busy_mask; int delayed_off_work; int idle_timeout; TYPE_2__ disp_info; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,int ,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct drm_encoder*,int) ;
 int FUNC_6 (struct drm_encoder*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int ) ;
 struct dpu_encoder_virt* FUNC_13 (struct drm_encoder*) ;
 int FUNC_14 (int ,int,int ,int ,char*) ;

__attribute__((used)) static int FUNC_15(struct drm_encoder *VAR_6,
  u32 VAR_7)
{
 struct dpu_encoder_virt *VAR_8;
 struct msm_drm_private *VAR_9;
 bool VAR_10 = 0;

 if (!VAR_6 || !VAR_6->dev || !VAR_6->dev->dev_private ||
   !VAR_6->crtc) {
  FUNC_1("invalid parameters\n");
  return -VAR_4;
 }
 VAR_8 = FUNC_13(VAR_6);
 VAR_9 = VAR_6->dev->dev_private;
 VAR_10 = VAR_8->disp_info.capabilities &
      VAR_5;





 if (!VAR_8->idle_pc_supported &&
   (VAR_7 != 130 &&
   VAR_7 != 128 &&
   VAR_7 != 129))
  return 0;

 FUNC_14(FUNC_2(VAR_6), VAR_7, VAR_8->idle_pc_supported,
    VAR_8->rc_state, "begin");

 switch (VAR_7) {
 case 130:

  if (FUNC_7(&VAR_8->delayed_off_work))
   FUNC_0(VAR_8, "sw_event:%d, work cancelled\n",
     VAR_7);

  FUNC_10(&VAR_8->rc_lock);


  if (VAR_8->rc_state == VAR_2) {
   FUNC_3("id;%u, sw_event:%d, rc in ON state\n",
          FUNC_2(VAR_6), VAR_7);
   FUNC_11(&VAR_8->rc_lock);
   return 0;
  } else if (VAR_8->rc_state != VAR_1 &&
    VAR_8->rc_state != VAR_0) {
   FUNC_3("id;%u, sw_event:%d, rc in state %d\n",
          FUNC_2(VAR_6), VAR_7,
          VAR_8->rc_state);
   FUNC_11(&VAR_8->rc_lock);
   return -VAR_4;
  }

  if (VAR_10 && VAR_8->rc_state == VAR_0)
   FUNC_5(VAR_6, 1);
  else
   FUNC_6(VAR_6, 1);

  VAR_8->rc_state = VAR_2;

  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "kickoff");

  FUNC_11(&VAR_8->rc_lock);
  break;

 case 131:






  if (VAR_8->rc_state != VAR_2) {
   FUNC_3("id:%d, sw_event:%d,rc:%d-unexpected\n",
          FUNC_2(VAR_6), VAR_7,
          VAR_8->rc_state);
   return -VAR_4;
  }





  if (FUNC_8(VAR_6->crtc) > 1) {
   FUNC_3("id:%d skip schedule work\n",
          FUNC_2(VAR_6));
   return 0;
  }

  FUNC_12(VAR_9->wq, &VAR_8->delayed_off_work,
       FUNC_9(VAR_8->idle_timeout));

  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "frame done");
  break;

 case 129:

  if (FUNC_7(&VAR_8->delayed_off_work))
   FUNC_0(VAR_8, "sw_event:%d, work cancelled\n",
     VAR_7);

  FUNC_10(&VAR_8->rc_lock);

  if (VAR_10 &&
     VAR_8->rc_state == VAR_0) {
   FUNC_5(VAR_6, 1);
  }

  else if (VAR_8->rc_state == VAR_1 ||
    VAR_8->rc_state == VAR_0) {
   FUNC_3("id:%u, sw_event:%d, rc in %d state\n",
          FUNC_2(VAR_6), VAR_7,
          VAR_8->rc_state);
   FUNC_11(&VAR_8->rc_lock);
   return 0;
  }

  VAR_8->rc_state = VAR_3;

  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "pre stop");

  FUNC_11(&VAR_8->rc_lock);
  break;

 case 128:
  FUNC_10(&VAR_8->rc_lock);


  if (VAR_8->rc_state == VAR_1) {
   FUNC_3("id: %u, sw_event:%d, rc in OFF state\n",
          FUNC_2(VAR_6), VAR_7);
   FUNC_11(&VAR_8->rc_lock);
   return 0;
  } else if (VAR_8->rc_state == VAR_2) {
   FUNC_4("id: %u, sw_event:%d, rc in state %d\n",
      FUNC_2(VAR_6), VAR_7, VAR_8->rc_state);
   FUNC_11(&VAR_8->rc_lock);
   return -VAR_4;
  }





  if (VAR_8->rc_state == VAR_3)
   FUNC_6(VAR_6, 0);

  VAR_8->rc_state = VAR_1;

  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "stop");

  FUNC_11(&VAR_8->rc_lock);
  break;

 case 132:
  FUNC_10(&VAR_8->rc_lock);

  if (VAR_8->rc_state != VAR_2) {
   FUNC_4("id: %u, sw_event:%d, rc:%d !ON state\n",
      FUNC_2(VAR_6), VAR_7, VAR_8->rc_state);
   FUNC_11(&VAR_8->rc_lock);
   return 0;
  }





  if (VAR_8->frame_busy_mask[0]) {
   FUNC_4("id:%u, sw_event:%d, rc:%d frame pending\n",
      FUNC_2(VAR_6), VAR_7, VAR_8->rc_state);
   FUNC_11(&VAR_8->rc_lock);
   return 0;
  }

  if (VAR_10)
   FUNC_5(VAR_6, 0);
  else
   FUNC_6(VAR_6, 0);

  VAR_8->rc_state = VAR_0;

  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "idle");

  FUNC_11(&VAR_8->rc_lock);
  break;

 default:
  FUNC_4("id:%u, unexpected sw_event: %d\n", FUNC_2(VAR_6),
     VAR_7);
  FUNC_14(FUNC_2(VAR_6), VAR_7,
     VAR_8->idle_pc_supported, VAR_8->rc_state,
     "error");
  break;
 }

 FUNC_14(FUNC_2(VAR_6), VAR_7,
    VAR_8->idle_pc_supported, VAR_8->rc_state,
    "end");
 return 0;
}
