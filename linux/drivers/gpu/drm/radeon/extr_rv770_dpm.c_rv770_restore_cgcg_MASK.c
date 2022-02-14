
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct radeon_device *VAR_4)
{
 bool VAR_5 = 0, VAR_6 = 0;

 if (FUNC_0(VAR_1) & VAR_2)
  VAR_5 = 1;
 if (FUNC_0(VAR_3) & VAR_0)
  VAR_6 = 1;

 if (VAR_5 && !VAR_6)
  FUNC_1(VAR_3, VAR_0, ~VAR_0);
}
