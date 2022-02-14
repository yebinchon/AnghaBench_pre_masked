
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_cs_parser {int dummy; } ;
struct radeon_cs_packet {int idx; } ;
struct radeon_bo {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct radeon_bo*) ;
 scalar_t__ FUNC_2 (struct radeon_cs_parser*,unsigned int) ;

int FUNC_3(struct radeon_cs_parser *VAR_1,
      struct radeon_cs_packet *VAR_2,
      struct radeon_bo *VAR_3)
{
 unsigned VAR_4;
 u32 VAR_5;
 VAR_4 = VAR_2->idx + 1;
 VAR_5 = FUNC_2(VAR_1, VAR_4 + 2);
 if ((VAR_5 + 1) > FUNC_1(VAR_3)) {
  FUNC_0("[drm] Buffer too small for PACKET3 INDX_BUFFER "
     "(need %u have %lu) !\n",
     VAR_5 + 1,
     FUNC_1(VAR_3));
  return -VAR_0;
 }
 return 0;
}
