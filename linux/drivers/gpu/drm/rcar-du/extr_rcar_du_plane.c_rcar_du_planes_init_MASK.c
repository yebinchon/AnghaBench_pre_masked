
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int base; } ;
struct rcar_du_plane {TYPE_2__ plane; struct rcar_du_group* group; } ;
struct rcar_du_group {int num_planes; int num_crtcs; int index; struct rcar_du_plane* planes; struct rcar_du_device* dev; } ;
struct TYPE_6__ {int colorkey; } ;
struct rcar_du_device {int num_crtcs; TYPE_1__ props; int ddev; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,TYPE_2__*,unsigned int,int *,int ,int ,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct rcar_du_group *VAR_6)
{
 struct rcar_du_device *VAR_7 = VAR_6->dev;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;





 VAR_6->num_planes = VAR_6->num_crtcs + 7;

 VAR_8 = ((1 << VAR_7->num_crtcs) - 1) & (3 << (2 * VAR_6->index));

 for (VAR_9 = 0; VAR_9 < VAR_6->num_planes; ++VAR_9) {
  enum drm_plane_type VAR_11 = VAR_9 < VAR_6->num_crtcs
      ? VAR_1
      : VAR_0;
  struct rcar_du_plane *VAR_12 = &VAR_6->planes[VAR_9];

  VAR_12->group = VAR_6;

  VAR_10 = FUNC_5(VAR_7->ddev, &VAR_12->plane, VAR_8,
            &VAR_4, VAR_3,
            FUNC_0(VAR_3),
            ((void*)0), VAR_11, ((void*)0));
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_4(&VAR_12->plane,
         &VAR_5);

  FUNC_2(&VAR_12->plane);

  if (VAR_11 == VAR_1)
   continue;

  FUNC_1(&VAR_12->plane.base,
        VAR_7->props.colorkey,
        VAR_2);
  FUNC_3(&VAR_12->plane, 1, 1, 7);
 }

 return 0;
}
