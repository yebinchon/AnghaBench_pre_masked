
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {scalar_t__ sclk_high; scalar_t__ sclk_low; } ;
struct atom_clock_dividers {scalar_t__ ref_div; scalar_t__ post_div; scalar_t__ fb_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__,int,struct atom_clock_dividers*) ;
 int FUNC_4 (struct radeon_device*,scalar_t__) ;
 struct igp_ps* FUNC_5 (struct radeon_ps*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_7,
       struct radeon_ps *VAR_8,
       struct radeon_ps *VAR_9)
{
 struct atom_clock_dividers VAR_10, VAR_11, VAR_12;
 struct igp_ps *VAR_13 = FUNC_5(VAR_8);
 struct igp_ps *VAR_14 = FUNC_5(VAR_9);
 int VAR_15;

 if ((VAR_13->sclk_high == VAR_14->sclk_high) &&
     (VAR_13->sclk_low == VAR_14->sclk_low))
  return 0;

 VAR_15 = FUNC_3(VAR_7, VAR_0,
          VAR_13->sclk_low, 0, &VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_3(VAR_7, VAR_0,
          VAR_13->sclk_high, 0, &VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_3(VAR_7, VAR_0,
          VAR_14->sclk_high, 0, &VAR_12);
 if (VAR_15)
  return VAR_15;

 if ((VAR_10.ref_div != VAR_11.ref_div) ||
     (VAR_10.post_div != VAR_11.post_div) ||
     (VAR_11.ref_div != VAR_12.ref_div) ||
     (VAR_11.post_div != VAR_12.post_div))
  return -VAR_1;

 FUNC_4(VAR_7, VAR_11.fb_div);

 if (VAR_11.fb_div > VAR_10.fb_div) {
  FUNC_2(VAR_3,
    FUNC_1(VAR_10.fb_div) |
    FUNC_0(VAR_11.fb_div),
    ~(VAR_6 | VAR_5));

  FUNC_2(VAR_4, 0, ~VAR_2);
 }

 return 0;
}
