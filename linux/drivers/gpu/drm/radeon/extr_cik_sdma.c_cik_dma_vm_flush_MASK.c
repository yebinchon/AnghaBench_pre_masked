
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct radeon_ring {int idx; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (struct radeon_ring*,int) ;

void FUNC_6(struct radeon_device *VAR_10, struct radeon_ring *VAR_11,
        unsigned VAR_12, uint64_t VAR_13)
{
 u32 VAR_14 = (FUNC_2(0) |
     FUNC_1(0));

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 if (VAR_12 < 8) {
  FUNC_5(VAR_11, (VAR_7 + (VAR_12 << 2)) >> 2);
 } else {
  FUNC_5(VAR_11, (VAR_8 + ((VAR_12 - 8) << 2)) >> 2);
 }
 FUNC_5(VAR_11, VAR_13 >> 12);


 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_6 >> 2);
 FUNC_5(VAR_11, FUNC_3(VAR_12));

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_4 >> 2);
 FUNC_5(VAR_11, 0);

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_5 >> 2);
 FUNC_5(VAR_11, 0);

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_2 >> 2);
 FUNC_5(VAR_11, 1);

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_3 >> 2);
 FUNC_5(VAR_11, 0);

 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_6 >> 2);
 FUNC_5(VAR_11, FUNC_3(0));


 FUNC_4(VAR_10, VAR_11->idx);


 FUNC_5(VAR_11, FUNC_0(VAR_1, 0, 0xf000));
 FUNC_5(VAR_11, VAR_9 >> 2);
 FUNC_5(VAR_11, 1 << VAR_12);

 FUNC_5(VAR_11, FUNC_0(VAR_0, 0, VAR_14));
 FUNC_5(VAR_11, VAR_9 >> 2);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, 0);
 FUNC_5(VAR_11, (0xfff << 16) | 10);
}
