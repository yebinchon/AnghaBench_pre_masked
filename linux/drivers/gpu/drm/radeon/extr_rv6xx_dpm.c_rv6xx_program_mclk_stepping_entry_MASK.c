
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {scalar_t__ enable_post_div; int post_div; int fb_div; int ref_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 int FUNC_1 (struct radeon_device*,int ,int) ;
 int FUNC_2 (struct radeon_device*,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int ) ;
 int FUNC_4 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 struct atom_clock_dividers VAR_5;

 if (FUNC_0(VAR_2, VAR_0, VAR_4, 0, &VAR_5))
     return -VAR_1;


 FUNC_4(VAR_2, VAR_3, VAR_5.ref_div);
 FUNC_2(VAR_2, VAR_3, VAR_5.fb_div);
 FUNC_3(VAR_2, VAR_3, VAR_5.post_div);

 if (VAR_5.enable_post_div)
  FUNC_1(VAR_2, VAR_3, 1);
 else
  FUNC_1(VAR_2, VAR_3, 0);

 return 0;
}
