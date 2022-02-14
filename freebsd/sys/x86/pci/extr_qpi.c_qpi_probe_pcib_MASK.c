
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qpi_device {int qd_pcibus; } ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (int *,struct qpi_device*) ;
 struct qpi_device* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int,int,int ,int ,int) ;
 int * FUNC_7 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8, int VAR_9)
{
 struct qpi_device *VAR_10;
 device_t VAR_11;
 uint32_t VAR_12;
 int VAR_13;





 if (FUNC_7(VAR_9, 0, 0) != ((void*)0))
  return (VAR_0);






 for (VAR_13 = 0; VAR_13 <= VAR_6; VAR_13++) {
  VAR_12 = FUNC_6(VAR_9, VAR_13, 0, VAR_5, 4);
  if (VAR_12 != 0xffffffff)
   break;
 }
 if (VAR_12 == 0xffffffff)
  return (VAR_1);

 if ((VAR_12 & 0xffff) != 0x8086) {
  if (VAR_7)
   FUNC_2(VAR_8,
       "Device at pci%d.%d.0 has non-Intel vendor 0x%x\n",
       VAR_9, VAR_13, VAR_12 & 0xffff);
  return (VAR_2);
 }

 VAR_11 = FUNC_0(VAR_8, 0, "pcib", -1);
 if (VAR_11 == ((void*)0))
  FUNC_5("%s: failed to add pci bus %d", FUNC_1(VAR_8),
      VAR_9);
 VAR_10 = FUNC_4(sizeof(struct qpi_device), VAR_3, VAR_4);
 VAR_10->qd_pcibus = VAR_9;
 FUNC_3(VAR_11, VAR_10);
 return (0);
}
