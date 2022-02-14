
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct intel_vgpu {int dummy; } ;
struct TYPE_2__ {int (* emulate_mmio_write ) (struct intel_vgpu*,scalar_t__,void*,unsigned int) ;int (* emulate_mmio_read ) (struct intel_vgpu*,scalar_t__,void*,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (struct intel_vgpu*,scalar_t__,void*,unsigned int) ;
 int FUNC_2 (struct intel_vgpu*,scalar_t__,void*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_1, int VAR_2, u64 VAR_3,
        void *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 u64 VAR_7 = FUNC_0(VAR_1, VAR_2);
 int VAR_8;

 if (VAR_6)
  VAR_8 = VAR_0->emulate_mmio_write(VAR_1,
     VAR_7 + VAR_3, VAR_4, VAR_5);
 else
  VAR_8 = VAR_0->emulate_mmio_read(VAR_1,
     VAR_7 + VAR_3, VAR_4, VAR_5);
 return VAR_8;
}
