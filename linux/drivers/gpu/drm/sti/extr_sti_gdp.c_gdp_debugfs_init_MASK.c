
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc; } ;
struct sti_gdp {TYPE_1__ plane; } ;
struct drm_minor {int debugfs_root; } ;
struct drm_info_list {struct sti_gdp* data; } ;


 int FUNC_0 (struct drm_info_list*) ;
 int VAR_0 ;




 int FUNC_1 (struct drm_info_list*,int,int ,struct drm_minor*) ;
 struct drm_info_list* VAR_1 ;
 struct drm_info_list* VAR_2 ;
 struct drm_info_list* VAR_3 ;
 struct drm_info_list* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct sti_gdp *VAR_5, struct drm_minor *VAR_6)
{
 unsigned int VAR_7;
 struct drm_info_list *VAR_8;
 int VAR_9;

 switch (VAR_5->plane.desc) {
 case 131:
  VAR_8 = VAR_1;
  VAR_9 = FUNC_0(VAR_1);
  break;
 case 130:
  VAR_8 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
  break;
 case 129:
  VAR_8 = VAR_3;
  VAR_9 = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_8 = VAR_4;
  VAR_9 = FUNC_0(VAR_4);
  break;
 default:
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  VAR_8[VAR_7].data = VAR_5;

 return FUNC_1(VAR_8,
     VAR_9,
     VAR_6->debugfs_root, VAR_6);
}
