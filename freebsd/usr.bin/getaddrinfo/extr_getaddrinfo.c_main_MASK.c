
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; char* ai_canonname; scalar_t__ ai_protocol; scalar_t__ ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,scalar_t__*) ;
 int FUNC_8 (char*,scalar_t__*) ;
 int FUNC_9 (struct addrinfo*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*,char) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;

int
FUNC_15(int VAR_7, char **VAR_8)
{
 static const struct addrinfo VAR_9;
 struct addrinfo VAR_10 = VAR_9;
 struct addrinfo *VAR_11;
 const char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15;

 FUNC_11(VAR_8[0]);

 VAR_10.ai_family = VAR_0;
 VAR_10.ai_socktype = 0;
 VAR_10.ai_protocol = 0;
 VAR_10.ai_flags = 0;

 while ((VAR_14 = FUNC_5(VAR_7, VAR_8, "cf:nNp:Ps:t:")) != -1) {
  switch (VAR_14) {
  case 'c':
   VAR_10.ai_flags |= VAR_1;
   break;

  case 'f':
   if (!FUNC_6(VAR_5, &VAR_10.ai_family)) {
    FUNC_14("invalid address family: %s", VAR_5);
    FUNC_13();
   }
   break;

  case 'n':
   VAR_10.ai_flags |= VAR_2;
   break;

  case 'N':
   VAR_10.ai_flags |= VAR_3;
   break;

  case 's':
   VAR_13 = VAR_5;
   break;

  case 'p':
   if (!FUNC_7(VAR_5, &VAR_10.ai_protocol)) {
    FUNC_14("invalid protocol: %s", VAR_5);
    FUNC_13();
   }
   break;

  case 'P':
   VAR_10.ai_flags |= VAR_4;
   break;

  case 't':
   if (!FUNC_8(VAR_5, &VAR_10.ai_socktype)) {
    FUNC_14("invalid socket type: %s", VAR_5);
    FUNC_13();
   }
   break;

  case '?':
  default:
   FUNC_13();
  }
 }

 VAR_7 -= VAR_6;
 VAR_8 += VAR_6;

 if (!((VAR_7 == 1) || ((VAR_7 == 0) && (VAR_10.ai_flags & VAR_4))))
  FUNC_13();
 if (VAR_7 == 1)
  VAR_12 = VAR_8[0];

 if (VAR_13 != ((void*)0)) {
  char *VAR_16;

  if ((VAR_16 = FUNC_12(VAR_13, '/')) != ((void*)0)) {
   if (VAR_10.ai_protocol != 0) {
    FUNC_14("protocol already specified");
    FUNC_13();
   }
   *VAR_16 = '\0';
   VAR_16++;

   if (!FUNC_7(VAR_16, &VAR_10.ai_protocol)) {
    FUNC_14("invalid protocol: %s", VAR_16);
    FUNC_13();
   }
  }
 }

 VAR_15 = FUNC_4(VAR_12, VAR_13, &VAR_10, &VAR_11);
 if (VAR_15)
  FUNC_1(1, "%s", FUNC_3(VAR_15));

 if ((VAR_10.ai_flags & VAR_1) && (VAR_11 != ((void*)0))) {
  if (FUNC_10("canonname %s\n", VAR_11->ai_canonname) < 0)
   FUNC_0(1, "printf");
 }

 FUNC_9(VAR_11);

 FUNC_2(VAR_11);

 return 0;
}
