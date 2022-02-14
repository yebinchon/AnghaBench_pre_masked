
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; int flags; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int VAR_26 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int ,int ) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_device *VAR_31,
            bool VAR_32)
{
 uint32_t VAR_33, VAR_34;

 FUNC_3(VAR_31);


 if (VAR_32 && (VAR_31->cg_flags & VAR_3)) {
  if (VAR_31->cg_flags & VAR_4) {
   if (VAR_31->cg_flags & VAR_5)

    FUNC_2(VAR_24, VAR_23, 1);

   if (VAR_31->cg_flags & VAR_2)
    FUNC_2(VAR_17, VAR_16, 1);
  }


  VAR_33 = VAR_34 = FUNC_0(VAR_29);
  if (VAR_31->flags & VAR_6)
   VAR_34 &= ~(VAR_19 |
      VAR_22 |
      VAR_21);
  else
   VAR_34 &= ~(VAR_19 |
      VAR_22 |
      VAR_21 |
      VAR_20);

  if (VAR_33 != VAR_34)
   FUNC_1(VAR_29, VAR_34);


  FUNC_6(VAR_31);


  FUNC_5(VAR_31, VAR_7, VAR_15);

  if (VAR_31->cg_flags & VAR_0) {

   VAR_33 = VAR_34 = FUNC_0(VAR_27);
   VAR_34 &= ~(VAR_13);
   VAR_34 |= (0x2 << VAR_14);
   VAR_34 |= VAR_12;
   VAR_34 &= ~VAR_11;
   if ((VAR_31->cg_flags & VAR_4) &&
       (VAR_31->cg_flags & VAR_1))
    VAR_34 &= ~VAR_8;
   VAR_34 |= VAR_9;
   VAR_34 |= (0x96 << VAR_10);
   if (VAR_33 != VAR_34)
    FUNC_1(VAR_27, VAR_34);
  }
  FUNC_7(50);


  FUNC_6(VAR_31);
 } else {

  VAR_33 = VAR_34 = FUNC_0(VAR_29);
  VAR_34 |= (VAR_19 |
    VAR_22 |
    VAR_21 |
    VAR_20);
  if (VAR_33 != VAR_34)
   FUNC_1(VAR_29, VAR_34);


  VAR_34 = FUNC_0(VAR_30);
  if (VAR_34 & VAR_25) {
   VAR_34 &= ~VAR_25;
   FUNC_1(VAR_30, VAR_34);
  }


  VAR_34 = FUNC_0(VAR_28);
  if (VAR_34 & VAR_18) {
   VAR_34 &= ~VAR_18;
   FUNC_1(VAR_28, VAR_34);
  }


  VAR_33 = VAR_34 = FUNC_0(VAR_27);
  VAR_34 |= (VAR_11 |
    VAR_8);
  if (VAR_33 != VAR_34)
   FUNC_1(VAR_27, VAR_34);


  FUNC_6(VAR_31);


  FUNC_5(VAR_31, VAR_7, VAR_26);

  FUNC_7(50);


  FUNC_6(VAR_31);
 }

 FUNC_4(VAR_31);
}
