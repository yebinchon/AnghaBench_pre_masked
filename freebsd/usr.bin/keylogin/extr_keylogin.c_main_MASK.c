
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_netstarg {scalar_t__* st_priv_key; int st_netname; scalar_t__* st_pub_key; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;
 scalar_t__ FUNC_5 (struct key_netstarg*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

int
FUNC_7(void)
{
 char VAR_2[VAR_0 + 1];
 struct key_netstarg VAR_3;

 if (!FUNC_2(VAR_2)) {
  FUNC_1(VAR_1, "netname lookup failed -- make sure the ");
  FUNC_1(VAR_1, "system domain name is set.\n");
  FUNC_0(1);
 }

 if (! FUNC_4(VAR_2, (char *)&(VAR_3.st_priv_key),
    FUNC_3("Password:"))) {
  FUNC_1(VAR_1, "Can't find %s's secret key\n", VAR_2);
  FUNC_0(1);
 }
 if (VAR_3.st_priv_key[0] == 0) {
  FUNC_1(VAR_1, "Password incorrect for %s\n", VAR_2);
  FUNC_0(1);
 }

 VAR_3.st_pub_key[0] = 0;
 VAR_3.st_netname = FUNC_6(VAR_2);

 if (FUNC_5(&VAR_3) < 0) {
  FUNC_1(VAR_1, "Could not set %s's secret key\n", VAR_2);
  FUNC_1(VAR_1, "Maybe the keyserver is down?\n");
  FUNC_0(1);
 }
 FUNC_0(0);

}
