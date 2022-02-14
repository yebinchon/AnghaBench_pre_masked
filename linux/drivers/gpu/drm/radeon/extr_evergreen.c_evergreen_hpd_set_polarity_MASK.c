
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef enum radeon_hpd_id { ____Placeholder_radeon_hpd_id } radeon_hpd_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;

void FUNC_4(struct radeon_device *VAR_2,
    enum radeon_hpd_id VAR_3)
{
 bool VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (VAR_3 == VAR_1)
  return;

 if (VAR_4)
  FUNC_1(FUNC_0(VAR_3), ~VAR_0);
 else
  FUNC_2(FUNC_0(VAR_3), VAR_0);
}
