
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char*,char*,char*,char*,int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 char* VAR_2 ;

__attribute__((used)) static int
FUNC_2(char ** VAR_3, char * VAR_4, char * VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3,
     "GET %s%s/%s HTTP/1.1\r\n"
     "Host: %s\r\n"
     "User-Agent: %d\r\n"
     "%s"
     "%s"
     "\r\n",
     VAR_0 ? "http://" : "",
     VAR_0 ? VAR_5 : "",
     VAR_4, VAR_5, VAR_1,
     VAR_2 ? VAR_2 : "",
     VAR_6 ? "Connection: Close\r\n" : "Connection: Keep-Alive\r\n");
 if (VAR_7 == -1)
  FUNC_1(1, "asprintf");
 return(VAR_7);
}
