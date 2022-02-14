
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_plane {int dummy; } ;
struct komeda_plane {struct komeda_layer* layer; struct drm_plane base; } ;
struct komeda_component {int pipeline; int id; int name; } ;
struct komeda_layer {struct komeda_component base; int supported_rots; int layer_type; } ;
struct TYPE_2__ {struct komeda_dev* dev_private; } ;
struct komeda_kms_dev {TYPE_1__ base; } ;
struct komeda_dev {int fmt_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*,int) ;
 int FUNC_3 (struct drm_plane*,int,int,int ,int ) ;
 int FUNC_4 (struct drm_plane*,int ,int ) ;
 int FUNC_5 (struct drm_plane*,int ,int ,int) ;
 int FUNC_6 (struct drm_plane*,int *) ;
 int FUNC_7 (TYPE_1__*,struct drm_plane*,int ,int *,int *,int ,int ,int ,char*,int ) ;
 int FUNC_8 (struct komeda_kms_dev*,struct komeda_component*) ;
 int FUNC_9 (struct komeda_kms_dev*,int ) ;
 int * FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (struct drm_plane*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct komeda_kms_dev*,int ,struct drm_plane*) ;
 int VAR_13 ;
 struct komeda_plane* FUNC_14 (int,int ) ;

__attribute__((used)) static int FUNC_15(struct komeda_kms_dev *VAR_14,
       struct komeda_layer *VAR_15)
{
 struct komeda_dev *VAR_16 = VAR_14->base.dev_private;
 struct komeda_component *VAR_17 = &VAR_15->base;
 struct komeda_plane *VAR_18;
 struct drm_plane *VAR_19;
 u32 *VAR_20, VAR_21 = 0;
 int VAR_22;

 VAR_18 = FUNC_14(sizeof(*VAR_18), VAR_10);
 if (!VAR_18)
  return -VAR_9;

 VAR_19 = &VAR_18->base;
 VAR_18->layer = VAR_15;

 VAR_20 = FUNC_10(&VAR_16->fmt_tbl,
            VAR_15->layer_type, &VAR_21);

 VAR_22 = FUNC_7(&VAR_14->base, VAR_19,
   FUNC_9(VAR_14, VAR_17->pipeline),
   &VAR_11,
   VAR_20, VAR_21, VAR_13,
   FUNC_8(VAR_14, VAR_17),
   "%s", VAR_17->name);

 FUNC_12(VAR_20);

 if (VAR_22)
  goto cleanup;

 FUNC_6(VAR_19, &VAR_12);

 VAR_22 = FUNC_4(VAR_19, VAR_8,
       VAR_15->supported_rots);
 if (VAR_22)
  goto cleanup;

 VAR_22 = FUNC_1(VAR_19);
 if (VAR_22)
  goto cleanup;

 VAR_22 = FUNC_2(VAR_19,
   FUNC_0(VAR_6) |
   FUNC_0(VAR_7) |
   FUNC_0(VAR_5));
 if (VAR_22)
  goto cleanup;

 VAR_22 = FUNC_3(VAR_19,
   FUNC_0(VAR_1) |
   FUNC_0(VAR_2) |
   FUNC_0(VAR_0),
   FUNC_0(VAR_4) |
   FUNC_0(VAR_3),
   VAR_1,
   VAR_4);
 if (VAR_22)
  goto cleanup;

 VAR_22 = FUNC_5(VAR_19, VAR_15->base.id, 0, 8);
 if (VAR_22)
  goto cleanup;

 FUNC_13(VAR_14, VAR_17->pipeline, VAR_19);

 return 0;
cleanup:
 FUNC_11(VAR_19);
 return VAR_22;
}
