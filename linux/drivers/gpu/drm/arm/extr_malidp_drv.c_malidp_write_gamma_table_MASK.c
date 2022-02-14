
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u32 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {scalar_t__ coeffs_base; } ;
struct TYPE_4__ {TYPE_1__ map; } ;


 int const FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct malidp_hw_device*,int const,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct malidp_hw_device *VAR_3,
         u32 VAR_4[VAR_0])
{
 int VAR_5;

 const u32 VAR_6 = FUNC_0(18, 16);





 FUNC_1(VAR_3, VAR_6,
   VAR_3->hw->map.coeffs_base + VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  FUNC_1(VAR_3, VAR_4[VAR_5],
    VAR_3->hw->map.coeffs_base +
    VAR_2);
}
