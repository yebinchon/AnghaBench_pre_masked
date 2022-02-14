
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct sun4i_layer {int plane; struct sun4i_backend* backend; } ;
struct sun4i_backend {int frontend; } ;
struct drm_device {int dev; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 struct sun4i_layer* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 struct sun4i_layer* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct drm_device*,int *,int ,int *,int const*,unsigned int,int const*,int,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static struct sun4i_layer *FUNC_9(struct drm_device *VAR_8,
      struct sun4i_backend *VAR_9,
      enum drm_plane_type VAR_10)
{
 const uint64_t *VAR_11 = VAR_7;
 const uint32_t *VAR_12 = VAR_6;
 unsigned int VAR_13 = FUNC_0(VAR_6);
 struct sun4i_layer *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_4(VAR_8->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_1(-VAR_0);

 VAR_14->backend = VAR_9;

 if (FUNC_2(VAR_9->frontend)) {
  VAR_12 = VAR_3;
  VAR_13 = FUNC_0(VAR_3);
  VAR_11 = ((void*)0);
 }


 VAR_15 = FUNC_8(VAR_8, &VAR_14->plane, 0,
           &VAR_4,
           VAR_12, VAR_13,
           VAR_11, VAR_10, ((void*)0));
 if (VAR_15) {
  FUNC_3(VAR_8->dev, "Couldn't initialize layer\n");
  return FUNC_1(VAR_15);
 }

 FUNC_7(&VAR_14->plane,
        &VAR_5);

 FUNC_5(&VAR_14->plane);
 FUNC_6(&VAR_14->plane, 0, 0,
           VAR_2 - 1);

 return VAR_14;
}
