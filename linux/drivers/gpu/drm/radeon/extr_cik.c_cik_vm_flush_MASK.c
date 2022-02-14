
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_ring {scalar_t__ idx; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct radeon_device*,scalar_t__) ;
 int FUNC_8 (struct radeon_ring*,int) ;

void FUNC_9(struct radeon_device *VAR_10, struct radeon_ring *VAR_11,
    unsigned VAR_12, uint64_t VAR_13)
{
 int VAR_14 = (VAR_11->idx == VAR_3);

 FUNC_8(VAR_11, FUNC_0(VAR_2, 3));
 FUNC_8(VAR_11, (FUNC_6(VAR_14) |
     FUNC_5(0)));
 if (VAR_12 < 8) {
  FUNC_8(VAR_11,
      (VAR_7 + (VAR_12 << 2)) >> 2);
 } else {
  FUNC_8(VAR_11,
      (VAR_8 + ((VAR_12 - 8) << 2)) >> 2);
 }
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, VAR_13 >> 12);


 FUNC_8(VAR_11, FUNC_0(VAR_2, 3));
 FUNC_8(VAR_11, (FUNC_6(VAR_14) |
     FUNC_5(0)));
 FUNC_8(VAR_11, VAR_6 >> 2);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, FUNC_1(VAR_12));

 FUNC_8(VAR_11, FUNC_0(VAR_2, 6));
 FUNC_8(VAR_11, (FUNC_6(VAR_14) |
     FUNC_5(0)));
 FUNC_8(VAR_11, VAR_4 >> 2);
 FUNC_8(VAR_11, 0);

 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, VAR_5);
 FUNC_8(VAR_11, 1);
 FUNC_8(VAR_11, 0);

 FUNC_8(VAR_11, FUNC_0(VAR_2, 3));
 FUNC_8(VAR_11, (FUNC_6(VAR_14) |
     FUNC_5(0)));
 FUNC_8(VAR_11, VAR_6 >> 2);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, FUNC_1(0));


 FUNC_7(VAR_10, VAR_11->idx);


 FUNC_8(VAR_11, FUNC_0(VAR_2, 3));
 FUNC_8(VAR_11, (FUNC_6(VAR_14) |
     FUNC_5(0)));
 FUNC_8(VAR_11, VAR_9 >> 2);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, 1 << VAR_12);


 FUNC_8(VAR_11, FUNC_0(VAR_1, 5));
 FUNC_8(VAR_11, (FUNC_4(0) |
     FUNC_3(0) |
     FUNC_2(0)));
 FUNC_8(VAR_11, VAR_9 >> 2);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, 0);
 FUNC_8(VAR_11, 0x20);


 if (VAR_14) {

  FUNC_8(VAR_11, FUNC_0(VAR_0, 0));
  FUNC_8(VAR_11, 0x0);
 }
}
