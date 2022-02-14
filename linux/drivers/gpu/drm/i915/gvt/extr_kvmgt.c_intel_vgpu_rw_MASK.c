
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct mdev_device {int dummy; } ;
struct TYPE_7__ {unsigned int num_regions; TYPE_2__* region; } ;
struct intel_vgpu {TYPE_3__ vdev; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_8__ {int (* emulate_cfg_write ) (struct intel_vgpu*,int,char*,size_t) ;int (* emulate_cfg_read ) (struct intel_vgpu*,int,char*,size_t) ;} ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {size_t (* rw ) (struct intel_vgpu*,char*,size_t,int*,int) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;







 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;


 int FUNC_1 (char*,unsigned int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (struct intel_vgpu*,int,char*,size_t,int) ;
 int FUNC_3 (struct intel_vgpu*,int ,int,char*,size_t,int) ;
 struct intel_vgpu* FUNC_4 (struct mdev_device*) ;
 int FUNC_5 (struct intel_vgpu*,int,char*,size_t) ;
 int FUNC_6 (struct intel_vgpu*,int,char*,size_t) ;
 size_t FUNC_7 (struct intel_vgpu*,char*,size_t,int*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct mdev_device *VAR_5, char *VAR_6,
   size_t VAR_7, loff_t *VAR_8, bool VAR_9)
{
 struct intel_vgpu *VAR_10 = FUNC_4(VAR_5);
 unsigned int VAR_11 = FUNC_0(*VAR_8);
 u64 VAR_12 = *VAR_8 & VAR_3;
 int VAR_13 = -VAR_0;


 if (VAR_11 >= VAR_2 + VAR_10->vdev.num_regions) {
  FUNC_1("invalid index: %u\n", VAR_11);
  return -VAR_0;
 }

 switch (VAR_11) {
 case 130:
  if (VAR_9)
   VAR_13 = VAR_4->emulate_cfg_write(VAR_10, VAR_12,
      VAR_6, VAR_7);
  else
   VAR_13 = VAR_4->emulate_cfg_read(VAR_10, VAR_12,
      VAR_6, VAR_7);
  break;
 case 136:
  VAR_13 = FUNC_3(VAR_10, VAR_1, VAR_12,
     VAR_6, VAR_7, VAR_9);
  break;
 case 134:
  VAR_13 = FUNC_2(VAR_10, VAR_12, VAR_6, VAR_7, VAR_9);
  break;
 case 135:
 case 133:
 case 132:
 case 131:
 case 128:
 case 129:
  break;
 default:
  if (VAR_11 >= VAR_2 + VAR_10->vdev.num_regions)
   return -VAR_0;

  VAR_11 -= VAR_2;
  return VAR_10->vdev.region[VAR_11].ops->rw(VAR_10, VAR_6, VAR_7,
    VAR_8, VAR_9);
 }

 return VAR_13 == 0 ? VAR_7 : VAR_13;
}
