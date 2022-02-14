
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int) ;
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
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_18)
{
 uint32_t VAR_19 = 0;
 int VAR_20;

 if (VAR_18->pg_flags & VAR_0) {
  VAR_19 = (1 << VAR_7
   | 1 << VAR_11
   | 2 << VAR_4
   | 2 << VAR_2
   | 2 << VAR_1
   | 2 << VAR_5
   | 2 << VAR_6
   | 2 << VAR_9
   | 2 << VAR_10
   | 2 << VAR_3);

  FUNC_2(VAR_14, 0, VAR_15, VAR_19);
  FUNC_1(VAR_14, 0, VAR_16,
   VAR_12, 0xFFFFF, VAR_20);
 } else {
  VAR_19 = (1 << VAR_7
   | 1 << VAR_11
   | 1 << VAR_4
   | 1 << VAR_2
   | 1 << VAR_1
   | 1 << VAR_5
   | 1 << VAR_6
   | 1 << VAR_9
   | 1 << VAR_10
   | 1 << VAR_3);
  FUNC_2(VAR_14, 0, VAR_15, VAR_19);
  FUNC_1(VAR_14, 0, VAR_16, 0, 0xFFFFF, VAR_20);
 }




 VAR_19 = FUNC_0(VAR_14, 0, VAR_17);
 VAR_19 &= ~0x103;
 if (VAR_18->pg_flags & VAR_0)
  VAR_19 |= VAR_8 |
   VAR_13;

 FUNC_2(VAR_14, 0, VAR_17, VAR_19);
}
