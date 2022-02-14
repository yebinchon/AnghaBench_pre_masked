
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_divider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_5, u32 VAR_6,
        u32 VAR_7, u32 VAR_8)
{
 int VAR_9, VAR_10;
 struct atom_clock_dividers VAR_11;
 uint32_t VAR_12;

 VAR_9 = FUNC_3(VAR_5, VAR_0,
        VAR_6, 0, &VAR_11);
 if (VAR_9)
  return VAR_9;

 VAR_12 = FUNC_0(VAR_7);
 VAR_12 &= ~(VAR_1|VAR_2);
 VAR_12 |= VAR_11.post_divider;
 FUNC_1(VAR_7, VAR_12);

 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  if (FUNC_0(VAR_8) & VAR_3)
   break;
  FUNC_2(10);
 }
 if (VAR_10 == 100)
  return -VAR_4;

 return 0;
}
