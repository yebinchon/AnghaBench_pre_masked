
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* ptr; } ;
struct radeon_cs_parser {int cs_flags; TYPE_1__ ib; } ;
struct radeon_cs_packet {int dummy; } ;
struct radeon_bo_list {int tiling_flags; scalar_t__ gpu_offset; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_2 (struct radeon_cs_parser*,struct radeon_bo_list**,int ) ;
 int FUNC_3 (struct radeon_cs_parser*,unsigned int) ;

int FUNC_4(struct radeon_cs_parser *VAR_7,
       struct radeon_cs_packet *VAR_8,
       unsigned VAR_9,
       unsigned VAR_10)
{
 int VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13;
 struct radeon_bo_list *VAR_14;
 u32 VAR_15;

 VAR_11 = FUNC_2(VAR_7, &VAR_14, 0);
 if (VAR_11) {
  FUNC_0("No reloc for ib[%d]=0x%04X\n",
     VAR_9, VAR_10);
  FUNC_1(VAR_7, VAR_8);
  return VAR_11;
 }

 VAR_15 = FUNC_3(VAR_7, VAR_9);
 VAR_13 = VAR_15 & 0x003fffff;
 VAR_13 += (((u32)VAR_14->gpu_offset) >> 10);

 if (!(VAR_7->cs_flags & VAR_1)) {
  if (VAR_14->tiling_flags & VAR_5)
   VAR_12 |= VAR_2;
  if (VAR_14->tiling_flags & VAR_6) {
   if (VAR_10 == VAR_4) {
    FUNC_0("Cannot src blit from microtiled surface\n");
    FUNC_1(VAR_7, VAR_8);
    return -VAR_0;
   }
   VAR_12 |= VAR_3;
  }

  VAR_13 |= VAR_12;
  VAR_7->ib.ptr[VAR_9] = (VAR_15 & 0x3fc00000) | VAR_13;
 } else
  VAR_7->ib.ptr[VAR_9] = (VAR_15 & 0xffc00000) | VAR_13;
 return 0;
}
