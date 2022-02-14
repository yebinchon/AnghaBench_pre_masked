
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_6, struct radeon_ring *VAR_7,
       unsigned VAR_8, uint64_t VAR_9)

{
 FUNC_1(VAR_7, FUNC_0(VAR_1, 0, 0, 0, 0));
 if (VAR_8 < 8) {
  FUNC_1(VAR_7, (0xf << 16) | ((VAR_3 + (VAR_8 << 2)) >> 2));
 } else {
  FUNC_1(VAR_7, (0xf << 16) | ((VAR_4 + ((VAR_8 - 8) << 2)) >> 2));
 }
 FUNC_1(VAR_7, VAR_9 >> 12);


 FUNC_1(VAR_7, FUNC_0(VAR_1, 0, 0, 0, 0));
 FUNC_1(VAR_7, (0xf << 16) | (VAR_2 >> 2));
 FUNC_1(VAR_7, 1);


 FUNC_1(VAR_7, FUNC_0(VAR_1, 0, 0, 0, 0));
 FUNC_1(VAR_7, (0xf << 16) | (VAR_5 >> 2));
 FUNC_1(VAR_7, 1 << VAR_8);


 FUNC_1(VAR_7, FUNC_0(VAR_0, 0, 0, 0, 0));
 FUNC_1(VAR_7, VAR_5);
 FUNC_1(VAR_7, 0xff << 16);
 FUNC_1(VAR_7, 1 << VAR_8);
 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_7, (0 << 28) | 0x20);
}
