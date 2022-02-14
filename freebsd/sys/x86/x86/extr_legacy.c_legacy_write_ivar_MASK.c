
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_device {uintptr_t lg_pcibus; uintptr_t lg_pcislot; uintptr_t lg_pcifunc; } ;
typedef int device_t ;


 struct legacy_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct legacy_device *VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 130:
  return VAR_0;
 case 131:
  VAR_6->lg_pcibus = VAR_5;
  break;
 case 128:
  VAR_6->lg_pcislot = VAR_5;
  break;
 case 129:
  VAR_6->lg_pcifunc = VAR_5;
  break;
 default:
  return VAR_1;
 }
 return 0;
}
