
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* devname; int dev; } ;
typedef TYPE_1__ devid_nmlist_t ;
typedef int ddi_devid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ,int ,TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int,char**) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,...) ;

int
FUNC_11(int VAR_3, char *VAR_4[])
{
 int VAR_5;
 ddi_devid_t VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;






 if (VAR_3 == 1) {
  (void) FUNC_10("%s <devicepath> [search path]\n",
      VAR_4[0]);
  FUNC_7(1);
 }
 VAR_9 = VAR_4[1];

 if ((VAR_5 = FUNC_8(VAR_9, VAR_2|VAR_1)) < 0) {
  FUNC_9(VAR_9);
  FUNC_7(1);
 }
 if (FUNC_3(VAR_5, &VAR_6) != 0) {
  FUNC_9("devid_get");
  FUNC_7(1);
 }
 if (FUNC_4(VAR_5, &VAR_7) != 0) {
  FUNC_9("devid_get_minor_name");
  FUNC_7(1);
 }
 if ((VAR_8 = FUNC_5(VAR_6, VAR_7)) == 0) {
  FUNC_9("devid_str_encode");
  FUNC_7(1);
 }

 (void) FUNC_10("devid %s\n", VAR_8);

 FUNC_6(VAR_8);
 FUNC_6(VAR_7);
 FUNC_1(VAR_6);

 return (0);
}
