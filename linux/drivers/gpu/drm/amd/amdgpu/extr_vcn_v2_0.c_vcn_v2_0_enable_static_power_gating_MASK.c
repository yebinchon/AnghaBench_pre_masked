
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
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_27)
{
 uint32_t VAR_28 = 0;
 int VAR_29;

 if (VAR_27->pg_flags & VAR_0) {

  VAR_28 = FUNC_0(VAR_23, 0, VAR_26);
  VAR_28 &= ~VAR_21;
  VAR_28 |= VAR_22;
  FUNC_2(VAR_23, 0, VAR_26, VAR_28);


  VAR_28 = (2 << VAR_7
   | 2 << VAR_10
   | 2 << VAR_4
   | 2 << VAR_2
   | 2 << VAR_1
   | 2 << VAR_5
   | 2 << VAR_6
   | 2 << VAR_8
   | 2 << VAR_9
   | 2 << VAR_3);

  FUNC_2(VAR_23, 0, VAR_24, VAR_28);

  VAR_28 = (2 << VAR_17
   | 2 << VAR_20
   | 2 << VAR_14
   | 2 << VAR_12
   | 2 << VAR_11
   | 2 << VAR_15
   | 2 << VAR_16
   | 2 << VAR_18
   | 2 << VAR_19
   | 2 << VAR_13);
  FUNC_1(VAR_23, 0, VAR_25, VAR_28, 0xFFFFF, VAR_29);
 }
}
