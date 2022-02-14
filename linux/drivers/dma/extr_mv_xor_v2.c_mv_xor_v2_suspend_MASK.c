
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv_xor_v2_device {scalar_t__ dma_base; } ;
typedef int pm_message_t ;


 scalar_t__ VAR_0 ;
 struct mv_xor_v2_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct mv_xor_v2_device *VAR_3 = FUNC_0(VAR_1);


 FUNC_1(0x1, VAR_3->dma_base + VAR_0);

 return 0;
}
