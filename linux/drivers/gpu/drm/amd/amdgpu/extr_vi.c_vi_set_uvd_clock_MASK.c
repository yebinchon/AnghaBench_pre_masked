
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct atom_clock_dividers {int post_divider; } ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ,int,struct atom_clock_dividers*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_6, u32 VAR_7,
   u32 VAR_8, u32 VAR_9)
{
 int VAR_10, VAR_11;
 struct atom_clock_dividers VAR_12;
 uint32_t VAR_13;

 VAR_10 = FUNC_2(VAR_6,
            VAR_4,
            VAR_7, 0, &VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_13 = FUNC_0(VAR_8);

 if (VAR_6->flags & VAR_0)
  VAR_13 &= ~VAR_2;
 else
  VAR_13 &= ~(VAR_1 |
    VAR_2);
 VAR_13 |= VAR_12.post_divider;
 FUNC_1(VAR_8, VAR_13);

 for (VAR_11 = 0; VAR_11 < 100; VAR_11++) {
  VAR_13 = FUNC_0(VAR_9);
  if (VAR_6->flags & VAR_0) {
   if (VAR_13 & 0x10000)
    break;
  } else {
   if (VAR_13 & VAR_3)
    break;
  }
  FUNC_3(10);
 }
 if (VAR_11 == 100)
  return -VAR_5;
 return 0;
}
