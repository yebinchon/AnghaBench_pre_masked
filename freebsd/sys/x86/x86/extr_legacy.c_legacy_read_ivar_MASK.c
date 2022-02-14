
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_device {uintptr_t lg_pcibus; uintptr_t lg_pcislot; uintptr_t lg_pcifunc; } ;
typedef int device_t ;


 struct legacy_device* FUNC_0 (int ) ;
 int VAR_0 ;





__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct legacy_device *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 130:
  *VAR_4 = 0;
  break;
 case 131:
  *VAR_4 = VAR_5->lg_pcibus;
  break;
 case 128:
  *VAR_4 = VAR_5->lg_pcislot;
  break;
 case 129:
  *VAR_4 = VAR_5->lg_pcifunc;
  break;
 default:
  return VAR_0;
 }
 return 0;
}
