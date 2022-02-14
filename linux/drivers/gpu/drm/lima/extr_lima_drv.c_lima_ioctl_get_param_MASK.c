
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_device {int pp_version; int gp_version; TYPE_1__* pipe; int id; } ;
struct drm_lima_get_param {int param; int value; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int num_processor; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;


 size_t VAR_4 ;
 struct lima_device* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_5, void *VAR_6, struct drm_file *VAR_7)
{
 struct drm_lima_get_param *VAR_8 = VAR_6;
 struct lima_device *VAR_9 = FUNC_0(VAR_5);

 if (VAR_8->pad)
  return -VAR_3;

 switch (VAR_8->param) {
 case 133:
  switch (VAR_9->id) {
  case 129:
   VAR_8->value = VAR_0;
   break;
  case 128:
   VAR_8->value = VAR_1;
   break;
  default:
   VAR_8->value = VAR_2;
   break;
  }
  break;

 case 131:
  VAR_8->value = VAR_9->pipe[VAR_4].num_processor;
  break;

 case 132:
  VAR_8->value = VAR_9->gp_version;
  break;

 case 130:
  VAR_8->value = VAR_9->pp_version;
  break;

 default:
  return -VAR_3;
 }

 return 0;
}
