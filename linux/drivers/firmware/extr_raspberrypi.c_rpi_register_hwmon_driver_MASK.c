
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpi_firmware {int dummy; } ;
struct device {int dummy; } ;
typedef int packet ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int *,int ) ;
 int FUNC_1 (struct rpi_firmware*,int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct device *VAR_2, struct rpi_firmware *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = FUNC_1(VAR_3, VAR_0,
     &VAR_4, sizeof(VAR_4));

 if (VAR_5)
  return;

 VAR_1 = FUNC_0(VAR_2, "raspberrypi-hwmon",
        -1, ((void*)0), 0);
}
