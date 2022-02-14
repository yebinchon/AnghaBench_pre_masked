
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int topo ;
struct drm_i915_query_topology_info {scalar_t__ flags; int max_slices; int max_subslices; int max_eus_per_subslice; int subslice_offset; int subslice_stride; int eu_offset; int eu_stride; } ;
struct sseu_dev_info {int max_subslices; int max_eus_per_subslice; int max_slices; struct drm_i915_query_topology_info* eu_mask; struct drm_i915_query_topology_info* subslice_mask; struct drm_i915_query_topology_info slice_mask; } ;
struct drm_i915_query_item {scalar_t__ flags; scalar_t__ data_ptr; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct sseu_dev_info sseu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (int ,struct drm_i915_query_topology_info*,int) ;
 int FUNC_4 (struct drm_i915_query_topology_info*,int,int,struct drm_i915_query_item*) ;
 int FUNC_5 (struct drm_i915_query_topology_info*,int ,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_3,
          struct drm_i915_query_item *VAR_4)
{
 const struct sseu_dev_info *VAR_5 = &FUNC_2(VAR_3)->sseu;
 struct drm_i915_query_topology_info VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11 = FUNC_1(VAR_5->max_subslices);
 u8 VAR_12 = FUNC_1(VAR_5->max_eus_per_subslice);
 int VAR_13;

 if (VAR_4->flags != 0)
  return -VAR_1;

 if (VAR_5->max_slices == 0)
  return -VAR_2;

 FUNC_0(sizeof(u8) != sizeof(VAR_5->slice_mask));

 VAR_7 = sizeof(VAR_5->slice_mask);
 VAR_8 = VAR_5->max_slices * VAR_11;
 VAR_9 = VAR_5->max_slices * VAR_5->max_subslices * VAR_12;
 VAR_10 = sizeof(VAR_6) + VAR_7 + VAR_8 +
         VAR_9;

 VAR_13 = FUNC_4(&VAR_6, sizeof(VAR_6), VAR_10,
         VAR_4);
 if (VAR_13 != 0)
  return VAR_13;

 if (VAR_6.flags != 0)
  return -VAR_1;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.max_slices = VAR_5->max_slices;
 VAR_6.max_subslices = VAR_5->max_subslices;
 VAR_6.max_eus_per_subslice = VAR_5->max_eus_per_subslice;

 VAR_6.subslice_offset = VAR_7;
 VAR_6.subslice_stride = VAR_11;
 VAR_6.eu_offset = VAR_7 + VAR_8;
 VAR_6.eu_stride = VAR_12;

 if (FUNC_3(FUNC_6(VAR_4->data_ptr),
      &VAR_6, sizeof(VAR_6)))
  return -VAR_0;

 if (FUNC_3(FUNC_6(VAR_4->data_ptr + sizeof(VAR_6)),
      &VAR_5->slice_mask, VAR_7))
  return -VAR_0;

 if (FUNC_3(FUNC_6(VAR_4->data_ptr +
        sizeof(VAR_6) + VAR_7),
      VAR_5->subslice_mask, VAR_8))
  return -VAR_0;

 if (FUNC_3(FUNC_6(VAR_4->data_ptr +
        sizeof(VAR_6) +
        VAR_7 + VAR_8),
      VAR_5->eu_mask, VAR_9))
  return -VAR_0;

 return VAR_10;
}
