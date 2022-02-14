
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snmp_toolinfo {int * passwd; int filelist; int flags; int * mappings; scalar_t__ objects; } ;
struct TYPE_4__ {int * sec_name; int priv_proto; int auth_proto; } ;
struct TYPE_5__ {int version; TYPE_1__ user; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snmp_toolinfo*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct snmp_toolinfo*,char*,int *,int ) ;
 char* VAR_9 ;
 char* FUNC_3 (char*) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (struct snmp_toolinfo*,int ,int) ;
 char* VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,size_t) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(struct snmp_toolinfo *VAR_12)
{
 char *VAR_13;
 size_t VAR_14;

 FUNC_5(VAR_12, 0, sizeof(struct snmp_toolinfo));
 VAR_12->objects = 0;
 VAR_12->mappings = ((void*)0);
 VAR_12->flags = VAR_5;
 FUNC_1(&VAR_12->filelist);
 FUNC_6(&VAR_11);
 FUNC_0(VAR_12, VAR_4);

 if (FUNC_2(VAR_12, VAR_9, &VAR_0, 0) < 0)
  FUNC_11("Error adding file %s to list", VAR_9);

 if (FUNC_2(VAR_12, VAR_10, &VAR_0, 0) < 0)
  FUNC_11("Error adding file %s to list", VAR_10);


 if ((VAR_13 = FUNC_3("SNMPAUTH")) != ((void*)0)) {
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 == FUNC_9("md5") && FUNC_7(VAR_13, "md5") == 0)
   VAR_11.user.auth_proto = VAR_2;
  else if (VAR_14 == FUNC_9("sha")&& FUNC_7(VAR_13, "sha") == 0)
   VAR_11.user.auth_proto = VAR_3;
  else if (VAR_14 != 0)
   FUNC_11("Bad authentication type - %s in SNMPAUTH", VAR_13);
 }

 if ((VAR_13 = FUNC_3("SNMPPRIV")) != ((void*)0)) {
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 == FUNC_9("des") && FUNC_7(VAR_13, "des") == 0)
   VAR_11.user.priv_proto = VAR_7;
  else if (VAR_14 == FUNC_9("aes")&& FUNC_7(VAR_13, "aes") == 0)
   VAR_11.user.priv_proto = VAR_6;
  else if (VAR_14 != 0)
   FUNC_11("Bad privacy type - %s in SNMPPRIV", VAR_13);
 }

 if ((VAR_13 = FUNC_3("SNMPUSER")) != ((void*)0)) {
  if ((VAR_14 = FUNC_9(VAR_13)) > sizeof(VAR_11.user.sec_name)) {
   FUNC_11("Username too long - %s in SNMPUSER", VAR_13);
   return (-1);
  }
  if (VAR_14 > 0) {
   FUNC_8(VAR_11.user.sec_name, VAR_13,
       sizeof(VAR_11.user.sec_name));
   VAR_11.version = VAR_8;
  }
 }

 if ((VAR_13 = FUNC_3("SNMPPASSWD")) != ((void*)0)) {
  if ((VAR_14 = FUNC_9(VAR_13)) > VAR_1)
   VAR_14 = VAR_1 - 1;
  if ((VAR_12->passwd = FUNC_4(VAR_14 + 1)) == ((void*)0)) {
   FUNC_10("malloc() failed");
   return (-1);
  }
  if (VAR_14 > 0)
   FUNC_8(VAR_12->passwd, VAR_13, VAR_14 + 1);
 }

 return (0);
}
