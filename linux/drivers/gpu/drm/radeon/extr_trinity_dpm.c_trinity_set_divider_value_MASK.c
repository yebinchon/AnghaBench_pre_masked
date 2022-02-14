
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_6,
          u32 VAR_7, u32 VAR_8)
{
 struct atom_clock_dividers VAR_9;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12 = VAR_7 * VAR_5;

 VAR_10 = FUNC_4(VAR_6, VAR_1,
          VAR_8, 0, &VAR_9);
 if (VAR_10)
  return;

 VAR_11 = FUNC_2(VAR_3 + VAR_12);
 VAR_11 &= ~VAR_0;
 VAR_11 |= FUNC_0(VAR_9.post_div);
 FUNC_3(VAR_3 + VAR_12, VAR_11);

 VAR_10 = FUNC_4(VAR_6, VAR_1,
          VAR_8/2, 0, &VAR_9);
 if (VAR_10)
  return;

 VAR_11 = FUNC_2(VAR_4 + VAR_12);
 VAR_11 &= ~VAR_2;
 VAR_11 |= FUNC_1(VAR_9.post_div);
 FUNC_3(VAR_4 + VAR_12, VAR_11);
}
