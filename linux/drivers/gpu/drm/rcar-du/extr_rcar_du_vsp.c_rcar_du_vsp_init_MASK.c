
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_vsp_plane {unsigned int index; int plane; struct rcar_du_vsp* vsp; } ;
struct rcar_du_vsp {int num_planes; struct rcar_du_vsp_plane* planes; int * vsp; struct rcar_du_device* dev; } ;
struct rcar_du_device {int ddev; int dev; TYPE_1__* info; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rcar_du_vsp_plane* FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,unsigned int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,unsigned int,int *,int ,int ,int *,int,int *) ;
 unsigned int FUNC_6 (unsigned int) ;
 struct platform_device* FUNC_7 (struct device_node*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct rcar_du_vsp *VAR_8, struct device_node *VAR_9,
       unsigned int VAR_10)
{
 struct rcar_du_device *VAR_11 = VAR_8->dev;
 struct platform_device *VAR_12;
 unsigned int VAR_13 = FUNC_6(VAR_10);
 unsigned int VAR_14;
 int VAR_15;


 VAR_12 = FUNC_7(VAR_9);
 if (!VAR_12)
  return -VAR_3;

 VAR_8->vsp = &VAR_12->dev;

 VAR_15 = FUNC_8(VAR_8->vsp);
 if (VAR_15 < 0)
  return VAR_15;





 VAR_8->num_planes = VAR_11->info->gen >= 3 ? 5 : 4;

 VAR_8->planes = FUNC_1(VAR_11->dev, VAR_8->num_planes,
       sizeof(*VAR_8->planes), VAR_4);
 if (!VAR_8->planes)
  return -VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_8->num_planes; ++VAR_14) {
  enum drm_plane_type VAR_16 = VAR_14 < VAR_13
      ? VAR_1
      : VAR_0;
  struct rcar_du_vsp_plane *VAR_17 = &VAR_8->planes[VAR_14];

  VAR_17->vsp = VAR_8;
  VAR_17->index = VAR_14;

  VAR_15 = FUNC_5(VAR_11->ddev, &VAR_17->plane, VAR_10,
            &VAR_6,
            VAR_5,
            FUNC_0(VAR_5),
            ((void*)0), VAR_16, ((void*)0));
  if (VAR_15 < 0)
   return VAR_15;

  FUNC_4(&VAR_17->plane,
         &VAR_7);

  if (VAR_16 == VAR_1)
   continue;

  FUNC_2(&VAR_17->plane);
  FUNC_3(&VAR_17->plane, 1, 1,
            VAR_8->num_planes - 1);
 }

 return 0;
}
