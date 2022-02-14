
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
struct TYPE_6__ {TYPE_2__ clkr; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, &VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0.clkr.hw.clk,
         &VAR_1);
}
