
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {int sclk_low; } ;
struct atom_clock_dividers {scalar_t__ enable_post_div; int post_div; int fb_div; int ref_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (struct radeon_device*,int ,int) ;
 int FUNC_3 (struct radeon_device*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int ,int ) ;
 int FUNC_5 (struct radeon_device*,int ,int ) ;
 int FUNC_6 (struct radeon_device*,int ,int ) ;
 int FUNC_7 (struct radeon_device*,int ,int ) ;
 int FUNC_8 (struct radeon_device*,int ) ;
 int FUNC_9 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 struct igp_ps* FUNC_10 (struct radeon_ps*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_3,
         struct radeon_ps *VAR_4)
{
 struct atom_clock_dividers VAR_5;
 struct igp_ps *VAR_6 = FUNC_10(VAR_4);
 int VAR_7, VAR_8;

 VAR_8 = FUNC_9(VAR_3, VAR_0,
          VAR_6->sclk_low, 0, &VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_6(VAR_3, 0, VAR_5.ref_div);
 FUNC_4(VAR_3, 0, VAR_5.fb_div);
 FUNC_5(VAR_3, 0, VAR_5.post_div);

 if (VAR_5.enable_post_div)
  FUNC_2(VAR_3, 0, 1);
 else
  FUNC_2(VAR_3, 0, 0);

 FUNC_7(VAR_3, 0, VAR_2);
 FUNC_3(VAR_3, 0, 0);

 FUNC_1(VAR_3, 0, 1);
 for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++)
  FUNC_1(VAR_3, VAR_7, 0);

 FUNC_0(VAR_3, 0);
 FUNC_8(VAR_3, 0);

 return 0;
}
