
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_macio_softc {int rev; int max_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_macio_softc*,int) ;
 struct ata_macio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 const char *VAR_4 = FUNC_5(VAR_3);
 const char *VAR_5 = FUNC_4(VAR_3);
 struct ata_macio_softc *VAR_6;

 if (FUNC_6(VAR_4, "ata") != 0 &&
     FUNC_6(VAR_4, "ide") != 0)
  return (VAR_2);

 VAR_6 = FUNC_2(VAR_3);
 FUNC_1(VAR_6, sizeof(struct ata_macio_softc));

 if (FUNC_6(VAR_5,"ata-4") == 0) {
  FUNC_3(VAR_3,"Apple MacIO Ultra ATA Controller");
  VAR_6->rev = 4;
  VAR_6->max_mode = VAR_0;
 } else {
  FUNC_3(VAR_3,"Apple MacIO ATA Controller");
  VAR_6->rev = 3;
  VAR_6->max_mode = VAR_1;
 }

 return (FUNC_0(VAR_3));
}
