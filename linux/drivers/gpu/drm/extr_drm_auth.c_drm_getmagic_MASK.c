
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int magic; TYPE_1__* master; } ;
struct drm_device {int master_mutex; } ;
struct drm_auth {int magic; } ;
struct TYPE_2__ {int magic_map; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct drm_file*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 struct drm_auth *VAR_4 = VAR_2;
 int VAR_5 = 0;

 FUNC_2(&VAR_1->master_mutex);
 if (!VAR_3->magic) {
  VAR_5 = FUNC_1(&VAR_3->master->magic_map, VAR_3,
    1, 0, VAR_0);
  if (VAR_5 >= 0)
   VAR_3->magic = VAR_5;
 }
 VAR_4->magic = VAR_3->magic;
 FUNC_3(&VAR_1->master_mutex);

 FUNC_0("%u\n", VAR_4->magic);

 return VAR_5 < 0 ? VAR_5 : 0;
}
