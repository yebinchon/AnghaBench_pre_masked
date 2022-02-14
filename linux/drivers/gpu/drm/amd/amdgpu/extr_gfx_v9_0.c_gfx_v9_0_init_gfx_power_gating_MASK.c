
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_21)
{
 uint32_t VAR_22 = 0;

 if (VAR_21->pg_flags & (VAR_1 |
         VAR_2 |
         VAR_0)) {

  VAR_22 = FUNC_0(FUNC_1(VAR_5, 0, VAR_16));
  VAR_22 &= ~VAR_3;
  VAR_22 |= (0x60 << VAR_4);
  FUNC_2(FUNC_1(VAR_5, 0, VAR_16), VAR_22);


  VAR_22 = 0;
  VAR_22 |= (0x10 << VAR_15);
  VAR_22 |= (0x10 << VAR_14);
  VAR_22 |= (0x10 << VAR_12);
  VAR_22 |= (0x40 << VAR_13);
  FUNC_2(FUNC_1(VAR_5, 0, VAR_18), VAR_22);

  VAR_22 = FUNC_0(FUNC_1(VAR_5, 0, VAR_19));
  VAR_22 &= ~VAR_8;
  VAR_22 |= (0x4 << VAR_9);
  FUNC_2(FUNC_1(VAR_5, 0, VAR_19), VAR_22);

  VAR_22 = FUNC_0(FUNC_1(VAR_5, 0, VAR_20));
  VAR_22 &= ~VAR_10;
  VAR_22 |= (0xff << VAR_11);
  FUNC_2(FUNC_1(VAR_5, 0, VAR_20), VAR_22);

  VAR_22 = FUNC_0(FUNC_1(VAR_5, 0, VAR_17));
  VAR_22 &= ~VAR_6;


  VAR_22 |= (0x55f0 << VAR_7);
  FUNC_2(FUNC_1(VAR_5, 0, VAR_17), VAR_22);

  FUNC_3(VAR_21, 1);
 }
}
