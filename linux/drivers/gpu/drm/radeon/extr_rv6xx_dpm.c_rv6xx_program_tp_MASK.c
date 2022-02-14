
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ) ;
 int FUNC_1 (struct radeon_device*,int,int ,int ) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_4, VAR_5, VAR_3[VAR_5], VAR_2[VAR_5]);

 FUNC_0(VAR_4, VAR_1);
}
