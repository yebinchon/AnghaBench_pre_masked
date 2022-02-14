
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int const id; } ;
struct dc_link {TYPE_4__ link_id; TYPE_2__* dc; TYPE_3__* link_enc; } ;
struct audio_support {int hdmi_audio_native; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum dc_detect_reason { ____Placeholder_dc_detect_reason } dc_detect_reason ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {TYPE_1__* res_pool; } ;
struct TYPE_5__ {struct audio_support audio_support; } ;




 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_link*) ;
 int FUNC_1 (int ,TYPE_4__) ;

__attribute__((used)) static enum signal_type FUNC_2(
 struct dc_link *VAR_3,
 enum dc_detect_reason VAR_4)
{
 enum signal_type VAR_5 = FUNC_1(
  VAR_3->link_enc->id, VAR_3->link_id);
 if (VAR_3->link_id.id == VAR_0) {

 }

 switch (VAR_3->link_id.id) {
 case 128: {


  struct audio_support *VAR_6 = &VAR_3->dc->res_pool->audio_support;

  if (!VAR_6->hdmi_audio_native)
   if (VAR_3->link_id.id == 128)
    VAR_5 = VAR_2;
 }
 break;
 case 129: {



  if (VAR_4 != VAR_1) {




   if (!FUNC_0(VAR_3))
    VAR_5 = VAR_2;
  }
 }
 break;
 default:
 break;
 }

 return VAR_5;
}
