
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3bus_devinfo {uintptr_t bus; uintptr_t dev; uintptr_t bustype; uintptr_t devtype; uintptr_t busidx; uintptr_t devidx; } ;
typedef int device_t ;


 int VAR_0 ;






 struct ps3bus_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct ps3bus_devinfo *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 133:
  *VAR_4 = VAR_5->bus;
  break;
 case 130:
  *VAR_4 = VAR_5->dev;
  break;
 case 131:
  *VAR_4 = VAR_5->bustype;
  break;
 case 128:
  *VAR_4 = VAR_5->devtype;
  break;
 case 132:
  *VAR_4 = VAR_5->busidx;
  break;
 case 129:
  *VAR_4 = VAR_5->devidx;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
