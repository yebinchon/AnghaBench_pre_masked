
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* region; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ size; void* data; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;

__attribute__((used)) static size_t FUNC_4(struct intel_vgpu *VAR_3, char *VAR_4,
  size_t VAR_5, loff_t *VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = FUNC_0(*VAR_6) -
   VAR_1;
 void *VAR_9 = VAR_3->vdev.region[VAR_8].data;
 loff_t VAR_10 = *VAR_6 & VAR_2;

 if (VAR_10 >= VAR_3->vdev.region[VAR_8].size || VAR_7) {
  FUNC_1("invalid op or offset for Intel vgpu OpRegion\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_3(VAR_5, (size_t)(VAR_3->vdev.region[VAR_8].size - VAR_10));
 FUNC_2(VAR_4, VAR_9 + VAR_10, VAR_5);

 return VAR_5;
}
