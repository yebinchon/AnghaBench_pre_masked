
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int) ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_28, bool VAR_29)
{
 uint32_t VAR_30, VAR_31, VAR_32;

 VAR_30 = FUNC_0(VAR_27);
 VAR_31 = FUNC_0(VAR_26);

 VAR_32 = VAR_25 |
       VAR_23 |
       VAR_24 |
       VAR_21 |
       VAR_22;

 if (VAR_29) {
  VAR_31 |= (VAR_12 |
   VAR_16 |
   VAR_7 |
   VAR_9 |
   VAR_4 |
   VAR_1 |
   VAR_8 |
   VAR_6 |
   VAR_3 |
   VAR_5 |
   VAR_18 |
   VAR_13 |
   VAR_15 |
   VAR_14 |
   VAR_17 |
   VAR_20 |
   VAR_2 |
   VAR_11);

  if (VAR_28->pg_flags & VAR_0)
   VAR_31 |= VAR_19;
  VAR_31 &= ~VAR_10;
  VAR_30 |= VAR_32;
 } else {
  VAR_31 = 0;
  VAR_30 = 0;
 }

 FUNC_1(VAR_27, VAR_30);
 FUNC_1(VAR_26, VAR_31);
}
