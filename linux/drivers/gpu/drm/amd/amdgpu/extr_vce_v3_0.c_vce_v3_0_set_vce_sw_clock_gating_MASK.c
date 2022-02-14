
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8,
          bool VAR_9)
{
 u32 VAR_10;


 FUNC_2(VAR_8, 1);






 if (!VAR_9) {
  VAR_10 = FUNC_0(VAR_3);
  VAR_10 |= 0x1ff;
  VAR_10 &= ~0xef0000;
  FUNC_1(VAR_3, VAR_10);

  VAR_10 = FUNC_0(VAR_4);
  VAR_10 |= 0x3ff000;
  VAR_10 &= ~0xffc00000;
  FUNC_1(VAR_4, VAR_10);

  VAR_10 = FUNC_0(VAR_5);
  VAR_10 |= 0x2;
  VAR_10 &= ~0x00010000;
  FUNC_1(VAR_5, VAR_10);

  VAR_10 = FUNC_0(VAR_7);
  VAR_10 |= 0x37f;
  FUNC_1(VAR_7, VAR_10);

  VAR_10 = FUNC_0(VAR_6);
  VAR_10 |= VAR_2 |
   VAR_0 |
   VAR_1 |
   0x8;
  FUNC_1(VAR_6, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_3);
  VAR_10 &= ~0x80010;
  VAR_10 |= 0xe70008;
  FUNC_1(VAR_3, VAR_10);

  VAR_10 = FUNC_0(VAR_4);
  VAR_10 |= 0xffc00000;
  FUNC_1(VAR_4, VAR_10);

  VAR_10 = FUNC_0(VAR_5);
  VAR_10 |= 0x10000;
  FUNC_1(VAR_5, VAR_10);

  VAR_10 = FUNC_0(VAR_7);
  VAR_10 &= ~0x3ff;
  FUNC_1(VAR_7, VAR_10);

  VAR_10 = FUNC_0(VAR_6);
  VAR_10 &= ~(VAR_2 |
     VAR_0 |
     VAR_1 |
     0x8);
  FUNC_1(VAR_6, VAR_10);
 }
 FUNC_2(VAR_8, 0);
}
