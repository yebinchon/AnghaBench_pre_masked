
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_firmware {int chan; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct rpi_firmware* FUNC_2 (struct platform_device*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct rpi_firmware *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);
 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
 FUNC_0(VAR_3->chan);

 return 0;
}
