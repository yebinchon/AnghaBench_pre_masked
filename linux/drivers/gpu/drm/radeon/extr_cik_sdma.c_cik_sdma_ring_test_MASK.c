
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct radeon_ring {scalar_t__ idx; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; } ;
struct radeon_device {unsigned int usec_timeout; TYPE_1__ wb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (char*,scalar_t__,unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_ring*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;

int FUNC_11(struct radeon_device *VAR_6,
         struct radeon_ring *VAR_7)
{
 unsigned VAR_8;
 int VAR_9;
 unsigned VAR_10;
 u32 VAR_11;
 u64 VAR_12;

 if (VAR_7->idx == VAR_2)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_0;

 VAR_12 = VAR_6->wb.gpu_addr + VAR_10;

 VAR_11 = 0xCAFEDEAD;
 VAR_6->wb.wb[VAR_10/4] = FUNC_3(VAR_11);

 VAR_9 = FUNC_6(VAR_6, VAR_7, 5);
 if (VAR_9) {
  FUNC_0("radeon: dma failed to lock ring %d (%d).\n", VAR_7->idx, VAR_9);
  return VAR_9;
 }
 FUNC_8(VAR_7, FUNC_2(VAR_4, VAR_5, 0));
 FUNC_8(VAR_7, FUNC_5(VAR_12));
 FUNC_8(VAR_7, FUNC_10(VAR_12));
 FUNC_8(VAR_7, 1);
 FUNC_8(VAR_7, 0xDEADBEEF);
 FUNC_7(VAR_6, VAR_7, 0);

 for (VAR_8 = 0; VAR_8 < VAR_6->usec_timeout; VAR_8++) {
  VAR_11 = FUNC_4(VAR_6->wb.wb[VAR_10/4]);
  if (VAR_11 == 0xDEADBEEF)
   break;
  FUNC_9(1);
 }

 if (VAR_8 < VAR_6->usec_timeout) {
  FUNC_1("ring test on %d succeeded in %d usecs\n", VAR_7->idx, VAR_8);
 } else {
  FUNC_0("radeon: ring %d test failed (0x%08X)\n",
     VAR_7->idx, VAR_11);
  VAR_9 = -VAR_1;
 }
 return VAR_9;
}
