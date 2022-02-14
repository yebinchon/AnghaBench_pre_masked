
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fw_device {scalar_t__* config_rom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_device*,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct fw_device *VAR_2, int VAR_3,
        bool *VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6, &VAR_5);
  if (VAR_7 != VAR_1)
   return VAR_7;

  if (VAR_6 == 0 && VAR_5 == 0)

   return VAR_0;

  if (VAR_5 != VAR_2->config_rom[VAR_6]) {
   *VAR_4 = 1;
   return VAR_1;
  }
 }

 *VAR_4 = 0;
 return VAR_1;
}
