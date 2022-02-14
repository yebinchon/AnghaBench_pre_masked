
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int size; int buf; } ;
typedef TYPE_1__ drm_via_cmdbuffer_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (struct drm_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 drm_via_cmdbuffer_t *VAR_3 = VAR_1;
 int VAR_4;

 FUNC_1(VAR_0, VAR_2);

 FUNC_0("buf %p size %lu\n", VAR_3->buf, VAR_3->size);

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 return VAR_4;
}
