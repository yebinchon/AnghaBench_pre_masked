
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {struct drm_connector* private; } ;
struct TYPE_10__ {int mutex; int connection_mutex; } ;
struct drm_device {TYPE_5__ mode_config; } ;
struct drm_crtc {int mutex; int * state; } ;
struct TYPE_9__ {unsigned int bpc; } ;
struct drm_connector {TYPE_4__ display_info; TYPE_1__* state; struct drm_device* dev; } ;
struct dm_crtc_state {TYPE_3__* stream; } ;
struct TYPE_7__ {int display_color_depth; } ;
struct TYPE_8__ {TYPE_2__ timing; } ;
struct TYPE_6__ {struct drm_crtc* crtc; } ;







 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct seq_file*,char*,unsigned int) ;
 struct dm_crtc_state* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_1->private;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_crtc *VAR_5 = ((void*)0);
 struct dm_crtc_state *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;
 unsigned int VAR_8;

 FUNC_2(&VAR_4->mode_config.mutex);
 FUNC_0(&VAR_4->mode_config.connection_mutex, ((void*)0));

 if (VAR_3->state == ((void*)0))
  goto unlock;

 VAR_5 = VAR_3->state->crtc;
 if (VAR_5 == ((void*)0))
  goto unlock;

 FUNC_0(&VAR_5->mutex, ((void*)0));
 if (VAR_5->state == ((void*)0))
  goto unlock;

 VAR_6 = FUNC_5(VAR_5->state);
 if (VAR_6->stream == ((void*)0))
  goto unlock;

 switch (VAR_6->stream->timing.display_color_depth) {
 case 129:
  VAR_8 = 6;
  break;
 case 128:
  VAR_8 = 8;
  break;
 case 132:
  VAR_8 = 10;
  break;
 case 131:
  VAR_8 = 12;
  break;
 case 130:
  VAR_8 = 16;
  break;
 default:
  goto unlock;
 }

 FUNC_4(VAR_1, "Current: %u\n", VAR_8);
 FUNC_4(VAR_1, "Maximum: %u\n", VAR_3->display_info.bpc);
 VAR_7 = 0;

unlock:
 if (VAR_5)
  FUNC_1(&VAR_5->mutex);

 FUNC_1(&VAR_4->mode_config.connection_mutex);
 FUNC_3(&VAR_4->mode_config.mutex);

 return VAR_7;
}
