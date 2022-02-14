
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int disallowed_features; } ;
struct vega12_hwmgr {TYPE_2__ registry_data; TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ backend; } ;
struct amdgpu_device {int unique_id; } ;
struct TYPE_3__ {unsigned long long smu_feature_id; int smu_feature_bitmap; int allowed; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;
 unsigned long long VAR_27 ;
 unsigned long long VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 int VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static void FUNC_2(struct pp_hwmgr *VAR_61)
{
 struct vega12_hwmgr *VAR_62 = (struct vega12_hwmgr *)(VAR_61->backend);
 struct amdgpu_device *VAR_63 = VAR_61->adev;
 uint32_t VAR_64, VAR_65;
 int VAR_66;

 VAR_62->smu_features[VAR_37].smu_feature_id =
   VAR_7;
 VAR_62->smu_features[VAR_34].smu_feature_id =
   VAR_4;
 VAR_62->smu_features[VAR_39].smu_feature_id =
   VAR_9;
 VAR_62->smu_features[VAR_38].smu_feature_id =
   VAR_8;
 VAR_62->smu_features[VAR_40].smu_feature_id =
   VAR_10;
 VAR_62->smu_features[VAR_41].smu_feature_id =
   VAR_11;
 VAR_62->smu_features[VAR_56].smu_feature_id =
   VAR_26;
 VAR_62->smu_features[VAR_36].smu_feature_id =
   VAR_6;
 VAR_62->smu_features[VAR_35].smu_feature_id =
   VAR_5;
 VAR_62->smu_features[VAR_33].smu_feature_id =
   VAR_3;
 VAR_62->smu_features[VAR_43].smu_feature_id =
   VAR_13;
 VAR_62->smu_features[VAR_45].smu_feature_id =
   VAR_15;
 VAR_62->smu_features[VAR_44].smu_feature_id =
   VAR_14;
 VAR_62->smu_features[VAR_52].smu_feature_id =
   VAR_22;
 VAR_62->smu_features[VAR_54].smu_feature_id =
   VAR_24;
 VAR_62->smu_features[VAR_55].smu_feature_id =
   VAR_25;
 VAR_62->smu_features[VAR_50].smu_feature_id =
   VAR_20;
 VAR_62->smu_features[VAR_53].smu_feature_id =
   VAR_23;
 VAR_62->smu_features[VAR_42].smu_feature_id =
   VAR_12;
 VAR_62->smu_features[VAR_29].smu_feature_id =
   VAR_0;
 VAR_62->smu_features[VAR_57].smu_feature_id =
   VAR_27;
 VAR_62->smu_features[VAR_58].smu_feature_id =
   VAR_28;
 VAR_62->smu_features[VAR_48].smu_feature_id =
   VAR_17;
 VAR_62->smu_features[VAR_51].smu_feature_id =
   VAR_21;
 VAR_62->smu_features[VAR_46].smu_feature_id =
   VAR_16;
 VAR_62->smu_features[VAR_32].smu_feature_id = VAR_19;
 VAR_62->smu_features[VAR_49].smu_feature_id = VAR_18;
 VAR_62->smu_features[VAR_31].smu_feature_id = VAR_2;
 VAR_62->smu_features[VAR_30].smu_feature_id = VAR_1;

 for (VAR_66 = 0; VAR_66 < VAR_47; VAR_66++) {
  VAR_62->smu_features[VAR_66].smu_feature_bitmap =
   (uint64_t)(1ULL << VAR_62->smu_features[VAR_66].smu_feature_id);
  VAR_62->smu_features[VAR_66].allowed =
   ((VAR_62->registry_data.disallowed_features >> VAR_66) & 1) ?
   0 : 1;
 }


 FUNC_1(VAR_61, VAR_60);
 VAR_64 = FUNC_0(VAR_61);
 FUNC_1(VAR_61, VAR_59);
 VAR_65 = FUNC_0(VAR_61);

 VAR_63->unique_id = ((uint64_t)VAR_65 << 32) | VAR_64;
}
