
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q_length; int q_max; } ;
union mfi_statrequest {int ms_item; TYPE_1__ ms_qstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (union mfi_statrequest*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,union mfi_statrequest*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_3, char **VAR_4)
{
 union mfi_statrequest VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (VAR_3 != 2)
  FUNC_7();

 VAR_6 = FUNC_4("/dev/mfi0", VAR_1);
 if (VAR_6 == -1) {
  FUNC_5("couldn't open mfi0: %s\n", FUNC_6(VAR_2));
  return (-1);
 }

 VAR_8 = FUNC_0(VAR_4[1]);
 FUNC_5("Getting stats for queue %d\n", VAR_8);
 FUNC_1(&VAR_5, sizeof(union mfi_statrequest));
 VAR_5.ms_item = VAR_8;
 VAR_7 = FUNC_3(VAR_6, VAR_0, &VAR_5);
 if (VAR_7 == -1) {
  FUNC_5("error on ioctl: %s\n", FUNC_6(VAR_2));
  return (-1);
 }

 FUNC_5("length= %d, max= %d\n",VAR_5.ms_qstat.q_length, VAR_5.ms_qstat.q_max);

 FUNC_2(VAR_6);
 return 0;
}
