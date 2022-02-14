
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int authenticated; TYPE_1__* master; } ;
struct drm_device {int master_mutex; } ;
struct drm_auth {int magic; } ;
struct TYPE_2__ {int magic_map; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct drm_file* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_auth *VAR_4 = VAR_2;
 struct drm_file *VAR_5;

 FUNC_0("%u\n", VAR_4->magic);

 FUNC_3(&VAR_1->master_mutex);
 VAR_5 = FUNC_1(&VAR_3->master->magic_map, VAR_4->magic);
 if (VAR_5) {
  VAR_5->authenticated = 1;
  FUNC_2(&VAR_3->master->magic_map, ((void*)0), VAR_4->magic);
 }
 FUNC_4(&VAR_1->master_mutex);

 return VAR_5 ? 0 : -VAR_0;
}
