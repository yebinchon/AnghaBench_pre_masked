
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (struct bcma_device*,int ,int) ;
 int FUNC_2 (struct bcma_bus*,char*) ;
 struct bcma_device* FUNC_3 (struct bcma_bus*,int ) ;

__attribute__((used)) static void FUNC_4(struct bcma_bus *VAR_7)
{
 struct bcma_device *VAR_8, *VAR_9, *VAR_10;




 if (VAR_7->chipinfo.id != VAR_0 &&
     VAR_7->chipinfo.id != VAR_1)
  return;

 VAR_8 = FUNC_3(VAR_7, VAR_3);
 VAR_9 = FUNC_3(VAR_7, VAR_4);
 VAR_10 = FUNC_3(VAR_7, VAR_2);
 if (VAR_8 && VAR_9 && VAR_10 &&
     FUNC_0(VAR_8, VAR_5) == 0x08060504 &&
     FUNC_0(VAR_9, VAR_5) == 0x08060504 &&
     FUNC_0(VAR_10, VAR_6) == 0x88) {
  FUNC_1(VAR_8, VAR_5, 0x07060504);
  FUNC_1(VAR_9, VAR_5, 0x07060504);
  FUNC_1(VAR_10, VAR_6, 0x87);
  FUNC_2(VAR_7,
      "Moved i2s interrupt to oob line 7 instead of 8\n");
 }
}
