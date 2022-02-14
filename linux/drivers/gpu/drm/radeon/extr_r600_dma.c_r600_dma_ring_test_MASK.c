
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
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int FUNC_2 (char*,scalar_t__,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_ring*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;

int FUNC_11(struct radeon_device *VAR_5,
         struct radeon_ring *VAR_6)
{
 unsigned VAR_7;
 int VAR_8;
 unsigned VAR_9;
 u32 VAR_10;
 u64 VAR_11;

 if (VAR_6->idx == VAR_3)
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_0;

 VAR_11 = VAR_5->wb.gpu_addr + VAR_9;

 VAR_10 = 0xCAFEDEAD;
 VAR_5->wb.wb[VAR_9/4] = FUNC_3(VAR_10);

 VAR_8 = FUNC_6(VAR_5, VAR_6, 4);
 if (VAR_8) {
  FUNC_1("radeon: dma failed to lock ring %d (%d).\n", VAR_6->idx, VAR_8);
  return VAR_8;
 }
 FUNC_8(VAR_6, FUNC_0(VAR_1, 0, 0, 1));
 FUNC_8(VAR_6, FUNC_5(VAR_11));
 FUNC_8(VAR_6, FUNC_10(VAR_11) & 0xff);
 FUNC_8(VAR_6, 0xDEADBEEF);
 FUNC_7(VAR_5, VAR_6, 0);

 for (VAR_7 = 0; VAR_7 < VAR_5->usec_timeout; VAR_7++) {
  VAR_10 = FUNC_4(VAR_5->wb.wb[VAR_9/4]);
  if (VAR_10 == 0xDEADBEEF)
   break;
  FUNC_9(1);
 }

 if (VAR_7 < VAR_5->usec_timeout) {
  FUNC_2("ring test on %d succeeded in %d usecs\n", VAR_6->idx, VAR_7);
 } else {
  FUNC_1("radeon: ring %d test failed (0x%08X)\n",
     VAR_6->idx, VAR_10);
  VAR_8 = -VAR_2;
 }
 return VAR_8;
}
