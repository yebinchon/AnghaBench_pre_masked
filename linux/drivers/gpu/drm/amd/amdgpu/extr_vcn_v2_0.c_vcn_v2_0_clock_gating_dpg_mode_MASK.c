
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_29,
  uint8_t VAR_30, uint8_t VAR_31)
{
 uint32_t VAR_32 = 0;


 if (VAR_29->cg_flags & VAR_0)
  VAR_32 = 1 << VAR_4;
 else
  VAR_32 = 0 << VAR_4;
 VAR_32 |= 1 << VAR_2;
 VAR_32 |= 4 << VAR_3;
 VAR_32 &= ~(VAR_22 |
   VAR_17 |
   VAR_19 |
   VAR_18 |
   VAR_21 |
   VAR_16 |
   VAR_20 |
   VAR_11 |
   VAR_14 |
   VAR_13 |
   VAR_7 |
   VAR_8 |
   VAR_5 |
   VAR_12 |
   VAR_10 |
   VAR_6 |
   VAR_9 |
   VAR_24 |
   VAR_23 |
   VAR_15);
 FUNC_1(FUNC_0(
  VAR_1, 0, VAR_25), VAR_32, VAR_30, VAR_31);


 FUNC_1(FUNC_0(
  VAR_1, 0, VAR_26), 0, VAR_30, VAR_31);


 FUNC_1(FUNC_0(
  VAR_1, 0, VAR_28), 1, VAR_30, VAR_31);


 FUNC_1(FUNC_0(
  VAR_1, 0, VAR_27), 0, VAR_30, VAR_31);
}
