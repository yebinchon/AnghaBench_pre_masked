
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpi_firmware {int dummy; } ;
struct raspberrypi_firmware_prop {int val; int disable_turbo; int id; } ;
typedef int msg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpi_firmware*,int,struct raspberrypi_firmware_prop*,int) ;

__attribute__((used)) static int FUNC_3(struct rpi_firmware *VAR_0, u32 VAR_1,
          u32 VAR_2, u32 *VAR_3)
{
 struct raspberrypi_firmware_prop VAR_4 = {
  .id = FUNC_0(VAR_2),
  .val = FUNC_0(*VAR_3),
  .disable_turbo = FUNC_0(1),
 };
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  return VAR_5;

 *VAR_3 = FUNC_1(VAR_4.val);

 return 0;
}
