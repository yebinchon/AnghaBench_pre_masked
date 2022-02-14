
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone ;
struct url_stat {int dummy; } ;
struct url {char* scheme; char* host; int port; } ;
struct dns_srvinfo {struct dns_srvinfo* next; int port; int host; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const**) ;
 struct dns_srvinfo* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct url* FUNC_5 (char const*) ;
 int * FUNC_6 (struct url*,struct url_stat*,char*) ;
 scalar_t__ FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_18(const char *VAR_2, char *VAR_3)
{
 struct url *VAR_4;
 struct dns_srvinfo *VAR_5, *VAR_6;
 struct url_stat VAR_7;
 FILE *VAR_8;

 int VAR_9;
 int VAR_10, VAR_11;
 ssize_t VAR_12;
 char VAR_13[10240];
 char VAR_14[VAR_0 + 13];
 static const char *VAR_15 = ((void*)0);

 VAR_11 = 3;
 VAR_6 = VAR_5 = ((void*)0);
 VAR_8 = ((void*)0);

 if (VAR_15 == ((void*)0) && FUNC_1(VAR_1, &VAR_15)
     != 0) {
  FUNC_16("No MIRROR_TYPE defined");
  return (-1);
 }

 if ((VAR_9 = FUNC_8(VAR_3)) == -1) {
  FUNC_15("mkstemp()");
  return (-1);
 }

 VAR_10 = VAR_11;

 if ((VAR_4 = FUNC_5(VAR_2)) == ((void*)0)) {
  FUNC_15("fetchParseURL('%s')", VAR_2);
  return (-1);
 }

 while (VAR_8 == ((void*)0)) {
  if (VAR_10 == VAR_11) {
   if (FUNC_12(VAR_4->scheme, "file") != 0 &&
       FUNC_11(VAR_15, "srv") == 0) {
    FUNC_10(VAR_14, sizeof(VAR_14),
        "_%s._tcp.%s", VAR_4->scheme, VAR_4->host);
    VAR_5 = FUNC_2(VAR_14);
    VAR_6 = VAR_5;
   }
  }

  if (VAR_5 != ((void*)0)) {
   FUNC_13(VAR_4->host, VAR_6->host, sizeof(VAR_4->host));
   VAR_4->port = VAR_6->port;
  }

  VAR_8 = FUNC_6(VAR_4, &VAR_7, "");
  if (VAR_8 == ((void*)0)) {
   --VAR_10;
   if (VAR_10 <= 0)
    goto fetchfail;
   if (VAR_5 == ((void*)0)) {
    FUNC_9(1);
   } else {
    VAR_6 = VAR_6->next;
    if (VAR_6 == ((void*)0))
     VAR_6 = VAR_5;
   }
  }
 }

 while ((VAR_12 = FUNC_7(VAR_13, 1, sizeof(VAR_13), VAR_8)) > 0) {
  if (FUNC_17(VAR_9, VAR_13, VAR_12) != VAR_12) {
   FUNC_15("write()");
   goto fetchfail;
  }
 }

 if (VAR_12 != 0) {
  FUNC_15("An error occurred while fetching pkg(8)");
  goto fetchfail;
 }

 if (FUNC_4(VAR_8))
  goto fetchfail;

 goto cleanup;

fetchfail:
 if (VAR_9 != -1) {
  FUNC_0(VAR_9);
  VAR_9 = -1;
  FUNC_14(VAR_3);
 }

cleanup:
 if (VAR_8 != ((void*)0))
  FUNC_3(VAR_8);

 return VAR_9;
}
