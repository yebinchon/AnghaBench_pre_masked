
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;

int FUNC_4(struct radeon_device *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct atom_clock_dividers VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_3(VAR_7, VAR_2,
        VAR_9, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
  if (FUNC_0(VAR_1) & VAR_5)
   break;
  FUNC_2(10);
 }
 if (VAR_12 == 100)
  return -VAR_6;

 FUNC_1(VAR_0, VAR_10.post_div, ~(VAR_3|VAR_4));

 for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
  if (FUNC_0(VAR_1) & VAR_5)
   break;
  FUNC_2(10);
 }
 if (VAR_12 == 100)
  return -VAR_6;

 return 0;
}
