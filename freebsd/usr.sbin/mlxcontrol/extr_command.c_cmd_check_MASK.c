
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_1, char *VAR_2[])
{
    int VAR_3, VAR_4, VAR_5;

    if (VAR_1 != 2)
 return(FUNC_0(VAR_1, VAR_2));

    if ((VAR_3 = FUNC_2(VAR_2[1])) == -1) {
 FUNC_6("'%s' is not a valid drive", VAR_2[1]);
    } else {


 if ((VAR_4 = FUNC_4(FUNC_1(VAR_3), 0)) < 0) {
     FUNC_5("can't open %s", FUNC_1(VAR_3));
 } else {

     if ((FUNC_3(VAR_4, VAR_0, &VAR_5)) < 0) {
  switch(VAR_5) {
  case 0x0002:
      FUNC_6("one or more of the SCSI disks on which the drive '%s' depends is DEAD", VAR_2[1]);
      break;
  case 0x0105:
      FUNC_6("drive %s is invalid, or not a drive which can be checked", VAR_2[1]);
      break;
  case 0x0106:
      FUNC_6("drive rebuild or consistency check is already in progress on this controller");
      break;
  default:
      FUNC_5("ioctl MLXD_CHECKASYNC");
  }
     }
 }
    }
    return(0);
}
