
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct idr {int dummy; } ;
struct drm_mode_object {scalar_t__ type; int id; } ;
struct drm_file {int universal_planes; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {TYPE_4__* cursor; TYPE_2__* primary; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 struct drm_mode_object* FUNC_3 (struct drm_device*,struct drm_file*,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct drm_mode_object*) ;
 int FUNC_6 (struct idr*,int *,int,int,int ) ;
 struct drm_mode_object** FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct drm_mode_object**) ;
 struct drm_crtc* FUNC_9 (struct drm_mode_object*) ;
 int FUNC_10 (struct drm_device*,int,struct drm_mode_object**,int) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_7,
      struct drm_file *VAR_8,
      struct idr *VAR_9,
      int VAR_10,
      u32 *VAR_11)
{
 struct drm_mode_object **VAR_12;
 u32 VAR_13;
 int VAR_14;
 bool VAR_15 = FUNC_2(VAR_8->universal_planes);

 VAR_12 = FUNC_7(VAR_10, sizeof(struct drm_mode_object *),
     VAR_5);
 if (!VAR_12)
  return -VAR_4;



 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_12[VAR_13] = FUNC_3(VAR_7, VAR_8,
        VAR_11[VAR_13],
        VAR_0);
  if (!VAR_12[VAR_13]) {
   VAR_14 = -VAR_3;
   goto out_free_objects;
  }

  if (!FUNC_4(VAR_12[VAR_13]->type)) {
   FUNC_0("invalid object for lease\n");
   VAR_14 = -VAR_2;
   goto out_free_objects;
  }
 }

 VAR_14 = FUNC_10(VAR_7, VAR_10, VAR_12, VAR_15);
 if (VAR_14) {
  FUNC_1("lease validation failed\n");
  goto out_free_objects;
 }



 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  struct drm_mode_object *VAR_16 = VAR_12[VAR_13];
  u32 VAR_17 = VAR_12[VAR_13]->id;
  FUNC_1("Adding object %d to lease\n", VAR_17);
  VAR_14 = FUNC_6(VAR_9, &VAR_6 , VAR_17, VAR_17 + 1, VAR_5);
  if (VAR_14 < 0) {
   FUNC_1("Object %d cannot be inserted into leases (%d)\n",
     VAR_17, VAR_14);
   goto out_free_objects;
  }
  if (VAR_16->type == VAR_1 && !VAR_15) {
   struct drm_crtc *VAR_18 = FUNC_9(VAR_16);
   VAR_14 = FUNC_6(VAR_9, &VAR_6, VAR_18->primary->base.id, VAR_18->primary->base.id + 1, VAR_5);
   if (VAR_14 < 0) {
    FUNC_1("Object primary plane %d cannot be inserted into leases (%d)\n",
      VAR_17, VAR_14);
    goto out_free_objects;
   }
   if (VAR_18->cursor) {
    VAR_14 = FUNC_6(VAR_9, &VAR_6, VAR_18->cursor->base.id, VAR_18->cursor->base.id + 1, VAR_5);
    if (VAR_14 < 0) {
     FUNC_1("Object cursor plane %d cannot be inserted into leases (%d)\n",
       VAR_17, VAR_14);
     goto out_free_objects;
    }
   }
  }
 }

 VAR_14 = 0;
out_free_objects:
 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  if (VAR_12[VAR_13])
   FUNC_5(VAR_12[VAR_13]);
 }
 FUNC_8(VAR_12);
 return VAR_14;
}
