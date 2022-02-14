
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_firmware {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct rpi_firmware* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct rpi_firmware*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 struct rpi_firmware *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return;

 FUNC_1(VAR_2, VAR_0, ((void*)0), 0);
}
