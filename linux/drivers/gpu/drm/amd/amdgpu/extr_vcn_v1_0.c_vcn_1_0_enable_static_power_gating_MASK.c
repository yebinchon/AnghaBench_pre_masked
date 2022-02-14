
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int,int) ;
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
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_29)
{
 uint32_t VAR_30 = 0;
 int VAR_31;

 if (VAR_29->pg_flags & VAR_0) {

  VAR_30 = FUNC_0(VAR_25, 0, VAR_28);
  VAR_30 &= ~VAR_23;
  VAR_30 |= VAR_24;
  FUNC_2(VAR_25, 0, VAR_28, VAR_30);


  VAR_30 = (2 << VAR_7
   | 2 << VAR_10
   | 2 << VAR_4
   | 2 << VAR_2
   | 2 << VAR_1
   | 2 << VAR_5
   | 2 << VAR_6
   | 2 << VAR_8
   | 2 << VAR_9
   | 2 << VAR_3
   | 2 << VAR_11);

  FUNC_2(VAR_25, 0, VAR_26, VAR_30);

  VAR_30 = (2 << VAR_18
   | 2 << VAR_21
   | 2 << VAR_15
   | 2 << VAR_13
   | 2 << VAR_12
   | 2 << VAR_16
   | 2 << VAR_17
   | 2 << VAR_19
   | 2 << VAR_20
   | 2 << VAR_14
   | 2 << VAR_22);
  FUNC_1(VAR_25, 0, VAR_27, VAR_30, 0xFFFFFFFF, VAR_31);
 }
}
