
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {scalar_t__ asic_type; int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_20,
       bool VAR_21)
{
 uint32_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;

 VAR_22 = VAR_23 = FUNC_0(VAR_15, 0, VAR_16);

 if (VAR_20->asic_type != VAR_2) {
  VAR_24 = VAR_25 = FUNC_0(VAR_15, 0, VAR_17);
  VAR_26 = VAR_27 = FUNC_0(VAR_15, 0, VAR_19);
 } else
  VAR_24 = VAR_25 = FUNC_0(VAR_15, 0, VAR_18);

 if (VAR_21 && (VAR_20->cg_flags & VAR_0)) {
  VAR_23 |= VAR_1;

  VAR_25 &= ~(VAR_7 |
             VAR_8 |
             VAR_3 |
             VAR_4 |
             VAR_6 |
             VAR_5);

  if (VAR_20->asic_type != VAR_2)
   VAR_27 &= ~(VAR_13 |
              VAR_14 |
              VAR_9 |
              VAR_10 |
              VAR_12 |
              VAR_11);
 } else {
  VAR_23 &= ~VAR_1;

  VAR_25 |= (VAR_7 |
     VAR_8 |
     VAR_3 |
     VAR_4 |
     VAR_6 |
     VAR_5);

  if (VAR_20->asic_type != VAR_2)
   VAR_27 |= (VAR_13 |
             VAR_14 |
             VAR_9 |
             VAR_10 |
             VAR_12 |
             VAR_11);
 }

 if (VAR_22 != VAR_23)
  FUNC_1(VAR_15, 0, VAR_16, VAR_23);

 if (VAR_24 != VAR_25) {
  if (VAR_20->asic_type != VAR_2)
   FUNC_1(VAR_15, 0, VAR_17, VAR_25);
  else
   FUNC_1(VAR_15, 0, VAR_18, VAR_25);
 }

 if (VAR_20->asic_type != VAR_2 && VAR_26 != VAR_27)
  FUNC_1(VAR_15, 0, VAR_19, VAR_27);
}
