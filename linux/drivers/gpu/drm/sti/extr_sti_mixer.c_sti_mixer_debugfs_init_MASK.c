
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mixer {int id; } ;
struct drm_minor {int debugfs_root; } ;
struct drm_info_list {struct sti_mixer* data; } ;


 int FUNC_0 (struct drm_info_list*) ;
 int VAR_0 ;


 int FUNC_1 (struct drm_info_list*,int,int ,struct drm_minor*) ;
 struct drm_info_list* VAR_1 ;
 struct drm_info_list* VAR_2 ;

int FUNC_2(struct sti_mixer *VAR_3, struct drm_minor *VAR_4)
{
 unsigned int VAR_5;
 struct drm_info_list *VAR_6;
 int VAR_7;

 switch (VAR_3->id) {
 case 128:
  VAR_6 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
  break;
 case 129:
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  VAR_6[VAR_5].data = VAR_3;

 return FUNC_1(VAR_6,
     VAR_7,
     VAR_4->debugfs_root, VAR_4);
}
