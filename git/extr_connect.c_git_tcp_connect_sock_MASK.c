
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ) ;
 struct strbuf VAR_8 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,char*,char const*,...) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct addrinfo*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char**,char const**) ;
 int FUNC_12 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_13 (struct addrinfo*,int ,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_15 (struct strbuf*,char*,char*,int,char*,int ) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(char *VAR_11, int VAR_12)
{
 struct strbuf VAR_13 = VAR_8;
 int VAR_14 = -1;
 const char *VAR_15 = FUNC_0(VAR_5);
 struct addrinfo VAR_16, *VAR_17, *VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 FUNC_11(&VAR_11, &VAR_15);
 if (!*VAR_15)
  VAR_15 = "<none>";

 FUNC_13(&VAR_16, 0, sizeof(VAR_16));
 if (VAR_12 & VAR_2)
  VAR_16.ai_family = VAR_0;
 else if (VAR_12 & VAR_3)
  VAR_16.ai_family = VAR_1;
 VAR_16.ai_socktype = VAR_7;
 VAR_16.ai_protocol = VAR_6;

 if (VAR_12 & VAR_4)
  FUNC_7(VAR_10, FUNC_1("Looking up %s ... "), VAR_11);

 VAR_19 = FUNC_12(VAR_11, VAR_15, &VAR_16, &VAR_18);
 if (VAR_19)
  FUNC_5(FUNC_1("unable to look up %s (port %s) (%s)"), VAR_11, VAR_15, FUNC_10(VAR_19));

 if (VAR_12 & VAR_4)

  FUNC_7(VAR_10, FUNC_1("done.\nConnecting to %s (port %s) ... "), VAR_11, VAR_15);

 for (VAR_17 = VAR_18; VAR_18; VAR_18 = VAR_18->ai_next, VAR_20++) {
  VAR_14 = FUNC_14(VAR_18->ai_family,
    VAR_18->ai_socktype, VAR_18->ai_protocol);
  if ((VAR_14 < 0) ||
      (FUNC_4(VAR_14, VAR_18->ai_addr, VAR_18->ai_addrlen) < 0)) {
   FUNC_15(&VAR_13, "%s[%d: %s]: errno=%s\n",
        VAR_11, VAR_20, FUNC_2(VAR_18), FUNC_17(VAR_9));
   if (0 <= VAR_14)
    FUNC_3(VAR_14);
   VAR_14 = -1;
   continue;
  }
  if (VAR_12 & VAR_4)
   FUNC_7(VAR_10, "%s ", FUNC_2(VAR_18));
  break;
 }

 FUNC_9(VAR_17);

 if (VAR_14 < 0)
  FUNC_5(FUNC_1("unable to connect to %s:\n%s"), VAR_11, VAR_13.buf);

 FUNC_6(VAR_14);

 if (VAR_12 & VAR_4)

  FUNC_8(VAR_10, FUNC_1("done."));

 FUNC_16(&VAR_13);

 return VAR_14;
}
