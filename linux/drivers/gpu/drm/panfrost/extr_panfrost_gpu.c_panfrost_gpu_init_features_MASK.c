
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct panfrost_model {char* name; int features; int issues; TYPE_1__* revs; int id; } ;
struct TYPE_4__ {int shader_present; int tiler_present; int l2_present; int stack_present; int revision; int id; int hw_features; int hw_issues; void* js_present; void* as_present; void* mmu_features; void* mem_features; void* tiler_features; void* core_features; void* l2_features; void* thread_tls_alloc; int nr_core_groups; void** js_features; void** texture_features; void* coherency_features; void* thread_max_barrier_sz; void* thread_max_workgroup_sz; void* max_threads; void* thread_features; } ;
struct panfrost_device {TYPE_2__ features; int dev; } ;
struct TYPE_3__ {int revision; int issues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,...) ;
 struct panfrost_model* VAR_23 ;
 void* FUNC_4 (struct panfrost_device*,int ) ;
 int VAR_24 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct panfrost_device*,int ) ;

__attribute__((used)) static void FUNC_8(struct panfrost_device *VAR_25)
{
 u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 const char *VAR_32 = "unknown";
 u64 VAR_33 = 0;
 u64 VAR_34 = VAR_24;
 const struct panfrost_model *VAR_35;
 int VAR_36;

 VAR_25->features.l2_features = FUNC_4(VAR_25, VAR_5);
 VAR_25->features.core_features = FUNC_4(VAR_25, VAR_2);
 VAR_25->features.tiler_features = FUNC_4(VAR_25, VAR_19);
 VAR_25->features.mem_features = FUNC_4(VAR_25, VAR_8);
 VAR_25->features.mmu_features = FUNC_4(VAR_25, VAR_9);
 VAR_25->features.thread_features = FUNC_4(VAR_25, VAR_14);
 VAR_25->features.max_threads = FUNC_4(VAR_25, VAR_16);
 VAR_25->features.thread_max_workgroup_sz = FUNC_4(VAR_25, VAR_17);
 VAR_25->features.thread_max_barrier_sz = FUNC_4(VAR_25, VAR_15);
 VAR_25->features.coherency_features = FUNC_4(VAR_25, VAR_1);
 for (VAR_36 = 0; VAR_36 < 4; VAR_36++)
  VAR_25->features.texture_features[VAR_36] = FUNC_4(VAR_25, FUNC_1(VAR_36));

 VAR_25->features.as_present = FUNC_4(VAR_25, VAR_0);

 VAR_25->features.js_present = FUNC_4(VAR_25, VAR_4);
 VAR_27 = FUNC_5(VAR_25->features.js_present);
 for (VAR_36 = 0; VAR_36 < VAR_27; VAR_36++)
  VAR_25->features.js_features[VAR_36] = FUNC_4(VAR_25, FUNC_0(VAR_36));

 VAR_25->features.shader_present = FUNC_4(VAR_25, VAR_11);
 VAR_25->features.shader_present |= (u64)FUNC_4(VAR_25, VAR_10) << 32;

 VAR_25->features.tiler_present = FUNC_4(VAR_25, VAR_21);
 VAR_25->features.tiler_present |= (u64)FUNC_4(VAR_25, VAR_20) << 32;

 VAR_25->features.l2_present = FUNC_4(VAR_25, VAR_7);
 VAR_25->features.l2_present |= (u64)FUNC_4(VAR_25, VAR_6) << 32;
 VAR_25->features.nr_core_groups = FUNC_6(VAR_25->features.l2_present);

 VAR_25->features.stack_present = FUNC_4(VAR_25, VAR_13);
 VAR_25->features.stack_present |= (u64)FUNC_4(VAR_25, VAR_12) << 32;

 VAR_25->features.thread_tls_alloc = FUNC_4(VAR_25, VAR_18);

 VAR_26 = FUNC_4(VAR_25, VAR_3);
 VAR_25->features.revision = VAR_26 & 0xffff;
 VAR_25->features.id = VAR_26 >> 16;




 if (VAR_25->features.id == 0x6956)
  VAR_25->features.id = 0x0600;

 VAR_28 = (VAR_25->features.revision >> 12) & 0xf;
 VAR_29 = (VAR_25->features.revision >> 4) & 0xff;
 VAR_30 = VAR_25->features.revision & 0xf;
 VAR_31 = VAR_25->features.revision;

 VAR_26 = VAR_25->features.id;

 for (VAR_35 = VAR_23; VAR_35->name; VAR_35++) {
  int VAR_37 = -1;

  if (!FUNC_7(VAR_25, VAR_35->id))
   continue;

  VAR_32 = VAR_35->name;
  VAR_33 = VAR_35->features;
  VAR_34 |= VAR_35->issues;
  for (VAR_36 = 0; VAR_36 < VAR_22; VAR_36++) {
   if (VAR_35->revs[VAR_36].revision == VAR_31) {
    VAR_37 = VAR_36;
    break;
   } else if (VAR_35->revs[VAR_36].revision == (VAR_31 & ~0xf))
    VAR_37 = VAR_36;
  }

  if (VAR_37 >= 0)
   VAR_34 |= VAR_35->revs[VAR_37].issues;

  break;
 }

 FUNC_2(VAR_25->features.hw_features, VAR_33);
 FUNC_2(VAR_25->features.hw_issues, VAR_34);

 FUNC_3(VAR_25->dev, "mali-%s id 0x%x major 0x%x minor 0x%x status 0x%x",
   VAR_32, VAR_26, VAR_28, VAR_29, VAR_30);
 FUNC_3(VAR_25->dev, "features: %64pb, issues: %64pb",
   VAR_25->features.hw_features,
   VAR_25->features.hw_issues);

 FUNC_3(VAR_25->dev, "Features: L2:0x%08x Shader:0x%08x Tiler:0x%08x Mem:0x%0x MMU:0x%08x AS:0x%x JS:0x%x",
   VAR_25->features.l2_features,
   VAR_25->features.core_features,
   VAR_25->features.tiler_features,
   VAR_25->features.mem_features,
   VAR_25->features.mmu_features,
   VAR_25->features.as_present,
   VAR_25->features.js_present);

 FUNC_3(VAR_25->dev, "shader_present=0x%0llx l2_present=0x%0llx",
   VAR_25->features.shader_present, VAR_25->features.l2_present);
}
