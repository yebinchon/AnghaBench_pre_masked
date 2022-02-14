
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ has_uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_device*,int,int) ;
 int FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_6)
{

 FUNC_0(VAR_6, VAR_1, 1);

 if (VAR_6->has_uvd)
  FUNC_1(VAR_6);

 FUNC_0(VAR_6, (VAR_3 |
        VAR_4 |
        VAR_0 |
        VAR_5 |
        VAR_2), 1);
}
