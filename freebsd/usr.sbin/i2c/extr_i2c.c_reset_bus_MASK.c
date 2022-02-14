
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iiccmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (int,int ,struct iiccmd*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct iiccmd VAR_7, char *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_4);
 if (VAR_9 == -1) {
  FUNC_1(VAR_6, "Error opening I2C controller (%s) for "
      "resetting: %s\n", VAR_8, FUNC_5(VAR_5));
  return (VAR_1);
 }

 FUNC_4("Resetting I2C controller on %s: ", VAR_8);
 VAR_10 = FUNC_2(VAR_9, VAR_3, &VAR_7);
 FUNC_0 (VAR_9);

 if (VAR_10) {
  FUNC_4("error: %s\n", FUNC_5(VAR_5));
  return (VAR_0);
 } else {
  FUNC_4("OK\n");
  return (VAR_2);
 }
}
