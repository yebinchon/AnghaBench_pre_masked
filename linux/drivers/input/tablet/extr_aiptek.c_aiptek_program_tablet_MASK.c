
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ coordinateMode; } ;
struct TYPE_3__ {int modelCode; int odmCode; int firmwareCode; } ;
struct aiptek {scalar_t__ eventCount; int diagnostic; TYPE_2__ curSetting; int inputdev; TYPE_1__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aiptek*,int,int) ;
 int FUNC_1 (struct aiptek*,int,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct aiptek *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5, 0x18, 0x04)) < 0)
  return VAR_6;


 if ((VAR_6 = FUNC_1(VAR_5, 0x02, 0x00)) < 0)
  return VAR_6;
 VAR_5->features.modelCode = VAR_6 & 0xff;


 if ((VAR_6 = FUNC_1(VAR_5, 0x03, 0x00)) < 0)
  return VAR_6;
 VAR_5->features.odmCode = VAR_6;


 if ((VAR_6 = FUNC_1(VAR_5, 0x04, 0x00)) < 0)
  return VAR_6;
 VAR_5->features.firmwareCode = VAR_6;


 if ((VAR_6 = FUNC_1(VAR_5, 0x01, 0x00)) < 0)
  return VAR_6;
 FUNC_2(VAR_5->inputdev, VAR_1, 0, VAR_6 - 1, 0, 0);


 if ((VAR_6 = FUNC_1(VAR_5, 0x01, 0x01)) < 0)
  return VAR_6;
 FUNC_2(VAR_5->inputdev, VAR_2, 0, VAR_6 - 1, 0, 0);


 if ((VAR_6 = FUNC_1(VAR_5, 0x08, 0x00)) < 0)
  return VAR_6;
 FUNC_2(VAR_5->inputdev, VAR_0, 0, VAR_6 - 1, 0, 0);




 if (VAR_5->curSetting.coordinateMode ==
     VAR_3) {

  if ((VAR_6 = FUNC_0(VAR_5, 0x10, 0x01)) < 0) {
   return VAR_6;
  }
 } else {

  if ((VAR_6 = FUNC_0(VAR_5, 0x10, 0x00)) < 0) {
   return VAR_6;
  }
 }


 if ((VAR_6 = FUNC_0(VAR_5, 0x11, 0x02)) < 0)
  return VAR_6;







 if ((VAR_6 = FUNC_0(VAR_5, 0x12, 0xff)) < 0)
  return VAR_6;



 VAR_5->diagnostic = VAR_4;
 VAR_5->eventCount = 0;

 return 0;
}
