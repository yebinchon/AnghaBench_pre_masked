
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbcmd {unsigned char slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,struct smbcmd*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(void)
{
 unsigned char VAR_8;
 int VAR_9;


 struct smbcmd VAR_10;

 FUNC_1("Probing for devices on %s:\n", VAR_6);

 for (VAR_8 = VAR_3; VAR_8 < VAR_2; VAR_8 += 2) {
  VAR_10.slave = VAR_8;
  VAR_9 = 0;
  if (FUNC_0(VAR_7, VAR_5, &VAR_10) != -1)
   VAR_9 = 1;
  if (FUNC_0(VAR_7, VAR_4, &VAR_10) != -1)
   VAR_9 |= 2;
  if (VAR_9 != 0) {
   FUNC_1("Device @0x%02x: ", VAR_8);
   if (VAR_9 & 1)
    FUNC_2('r');
   if (VAR_9 & 2)
    FUNC_2('w');
   FUNC_2('\n');
  }
 }
}
