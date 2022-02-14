
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_sec; } ;


 int FUNC_0 (char**,char*,char*,...) ;
 char* FUNC_1 (char*) ;
 int * VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int * VAR_4 ;
 char* VAR_5 ;
 char* FUNC_5 (int *,char) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 char* FUNC_8 (char**,char*) ;
 long FUNC_9 (char*,char**,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 long VAR_12;

 VAR_0 = FUNC_4("HTTP_PROXY");
 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_4("http_proxy");
 if (VAR_0 != ((void*)0)) {
  if (FUNC_7(VAR_0, "http://", 7) == 0)
   VAR_0 += 7;
  VAR_9 = FUNC_5(VAR_0, '/');
  if (VAR_9 != ((void*)0))
   *VAR_9 = 0;
  VAR_9 = FUNC_5(VAR_0, ':');
  if (VAR_9 != ((void*)0)) {
   *VAR_9 = 0;
   VAR_5 = VAR_9 + 1;
  } else
   VAR_5 = "3128";
 }

 VAR_1 = FUNC_4("HTTP_PROXY_AUTH");
 if ((VAR_0 != ((void*)0)) &&
     (VAR_1 != ((void*)0)) &&
     (FUNC_6(VAR_1, "basic:" , 6) == 0)) {

  (void) FUNC_8(&VAR_1, ":");


  (void) FUNC_8(&VAR_1, ":");


  VAR_10 = FUNC_8(&VAR_1, ":");
  VAR_11 = VAR_1;
 }

 if ((VAR_10 != ((void*)0)) && (VAR_11 != ((void*)0))) {
  FUNC_0(&VAR_7, "%s:%s",
      VAR_10, VAR_11);
  if (VAR_7 == ((void*)0))
   FUNC_2(1, "asprintf");

  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 == ((void*)0))
   FUNC_2(1, "malloc");

  FUNC_0(&VAR_4, "Proxy-Authorization: Basic %s\r\n",
      VAR_8);
  if (VAR_4 == ((void*)0))
   FUNC_2(1, "asprintf");

  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
 } else
  VAR_4 = ((void*)0);

 VAR_3 = FUNC_4("HTTP_USER_AGENT");
 if (VAR_3 == ((void*)0))
  VAR_3 = "phttpget/0.1";

 VAR_2 = FUNC_4("HTTP_TIMEOUT");
 if (VAR_2 != ((void*)0)) {
  VAR_12 = FUNC_9(VAR_2, &VAR_9, 10);
  if ((*VAR_2 == '\0') || (*VAR_9 != '\0') ||
      (VAR_12 < 0))
   FUNC_10("HTTP_TIMEOUT (%s) is not a positive integer",
       VAR_2);
  else
   VAR_6.tv_sec = VAR_12;
 }
}
