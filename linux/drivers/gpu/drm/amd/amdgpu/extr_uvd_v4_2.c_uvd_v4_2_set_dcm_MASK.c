
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_12,
        bool VAR_13)
{
 u32 VAR_14, VAR_15;

 FUNC_2(VAR_9, VAR_0, 0);

 VAR_14 = FUNC_0(VAR_11);
 VAR_14 &= ~(VAR_6 | VAR_4);
 VAR_14 |= VAR_8 |
  (1 << VAR_5) |
  (4 << VAR_7);

 if (VAR_13) {
  VAR_14 &= ~0x7ffff800;
  VAR_15 = VAR_1 |
   VAR_2 |
   (7 << VAR_3);
 } else {
  VAR_14 |= 0x7ffff800;
  VAR_15 = 0;
 }

 FUNC_1(VAR_11, VAR_14);
 FUNC_3(VAR_10, VAR_15);
}
