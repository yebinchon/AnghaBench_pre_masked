
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_19,
           bool VAR_20)
{
 uint32_t VAR_21;

 if (VAR_20 && (VAR_19->cg_flags & VAR_0)) {
  VAR_21 = FUNC_0(VAR_14);
  VAR_21 |= VAR_5;
  FUNC_1(VAR_14, VAR_21);

  VAR_21 = FUNC_0(VAR_15);
  VAR_21 |= VAR_6;
  FUNC_1(VAR_15, VAR_21);

  VAR_21 = FUNC_0(VAR_16);
  VAR_21 |= VAR_7;
  FUNC_1(VAR_16, VAR_21);

  VAR_21 = FUNC_0(VAR_17);
  VAR_21 |= VAR_8;
  FUNC_1(VAR_17, VAR_21);

  VAR_21 = FUNC_0(VAR_10);
  VAR_21 |= VAR_1;
  FUNC_1(VAR_10, VAR_21);

  VAR_21 = FUNC_0(VAR_13);
  VAR_21 |= VAR_4;
  FUNC_1(VAR_13, VAR_21);

  VAR_21 = FUNC_0(VAR_11);
  VAR_21 |= VAR_2;
  FUNC_1(VAR_11, VAR_21);

  VAR_21 = FUNC_0(VAR_12);
  VAR_21 |= VAR_3;
  FUNC_1(VAR_12, VAR_21);

  VAR_21 = FUNC_0(VAR_18);
  VAR_21 |= VAR_9;
  FUNC_1(VAR_18, VAR_21);
 } else {
  VAR_21 = FUNC_0(VAR_14);
  VAR_21 &= ~VAR_5;
  FUNC_1(VAR_14, VAR_21);

  VAR_21 = FUNC_0(VAR_15);
  VAR_21 &= ~VAR_6;
  FUNC_1(VAR_15, VAR_21);

  VAR_21 = FUNC_0(VAR_16);
  VAR_21 &= ~VAR_7;
  FUNC_1(VAR_16, VAR_21);

  VAR_21 = FUNC_0(VAR_17);
  VAR_21 &= ~VAR_8;
  FUNC_1(VAR_17, VAR_21);

  VAR_21 = FUNC_0(VAR_10);
  VAR_21 &= ~VAR_1;
  FUNC_1(VAR_10, VAR_21);

  VAR_21 = FUNC_0(VAR_13);
  VAR_21 &= ~VAR_4;
  FUNC_1(VAR_13, VAR_21);

  VAR_21 = FUNC_0(VAR_11);
  VAR_21 &= ~VAR_2;
  FUNC_1(VAR_11, VAR_21);

  VAR_21 = FUNC_0(VAR_12);
  VAR_21 &= ~VAR_3;
  FUNC_1(VAR_12, VAR_21);

  VAR_21 = FUNC_0(VAR_18);
  VAR_21 &= ~VAR_9;
  FUNC_1(VAR_18, VAR_21);
 }
}
