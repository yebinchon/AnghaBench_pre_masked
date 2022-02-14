
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addrpolicy {int addrmask; int addr; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_2, struct in6_addrpolicy *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 char *VAR_6, *VAR_7;
 struct addrinfo VAR_8, *VAR_9;

 if ((VAR_6 = FUNC_10(VAR_2)) == ((void*)0))
  FUNC_1(1, "strdup failed");

 if ((VAR_7 = FUNC_9(VAR_6, '/')) == ((void*)0)) {
  VAR_4 = -1;
  goto end;
 }
 *VAR_7 = '\0';

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_flags = VAR_1;
 VAR_8.ai_family = VAR_0;

 if ((VAR_4 = FUNC_5(VAR_6, ((void*)0), &VAR_8, &VAR_9)) != 0) {
  FUNC_11("getaddrinfo failed for %s: %s", VAR_6,
        FUNC_4(VAR_4));
  goto end;
 }
 FUNC_6(&VAR_3->addr, VAR_9->ai_addr, VAR_9->ai_addrlen);
 FUNC_3(VAR_9);
 VAR_5 = FUNC_0(VAR_7 + 1);
 if (VAR_5 < 0 || VAR_5 > 128) {
  FUNC_11("invalid prefix length: %d", VAR_5);
  VAR_4 = -1;
  goto end;
 }
 FUNC_8(&VAR_3->addrmask, VAR_5);

  end:
 FUNC_2(VAR_6);
 return(VAR_4);
}
