
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_ring {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_5, struct radeon_ring *VAR_6,
    unsigned VAR_7, uint64_t VAR_8)
{
 FUNC_1(VAR_6, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_6, (0xf << 16) | ((VAR_3 + (VAR_7 << 2)) >> 2));
 FUNC_1(VAR_6, VAR_8 >> 12);


 FUNC_1(VAR_6, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_6, (0xf << 16) | (VAR_2 >> 2));
 FUNC_1(VAR_6, 1);


 FUNC_1(VAR_6, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_6, (0xf << 16) | (VAR_4 >> 2));
 FUNC_1(VAR_6, 1 << VAR_7);


 FUNC_1(VAR_6, VAR_1);
 FUNC_1(VAR_6, (0xff << 20) | (VAR_4 >> 2));
 FUNC_1(VAR_6, 0);
 FUNC_1(VAR_6, 0);
}
