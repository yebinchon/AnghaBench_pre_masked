
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
struct TYPE_2__ {int desc; struct drm_plane drm_plane; int status; } ;
struct sti_hqvdp {TYPE_1__ plane; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sti_hqvdp* FUNC_2 (struct device*) ;
 int FUNC_3 (struct drm_plane*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct sti_hqvdp*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static struct drm_plane *FUNC_7(struct drm_device *VAR_5,
       struct device *VAR_6, int VAR_7)
{
 struct sti_hqvdp *VAR_8 = FUNC_2(VAR_6);
 int VAR_9;

 VAR_8->plane.desc = VAR_7;
 VAR_8->plane.status = VAR_1;

 FUNC_5(VAR_8);

 VAR_9 = FUNC_4(VAR_5, &VAR_8->plane.drm_plane, 1,
           &VAR_4,
           VAR_2,
           FUNC_0(VAR_2),
           ((void*)0), VAR_0, ((void*)0));
 if (VAR_9) {
  FUNC_1("Failed to initialize universal plane\n");
  return ((void*)0);
 }

 FUNC_3(&VAR_8->plane.drm_plane, &VAR_3);

 FUNC_6(&VAR_8->plane, VAR_0);

 return &VAR_8->plane.drm_plane;
}
