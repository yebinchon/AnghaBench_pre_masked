
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, struct sockaddr *VAR_3, struct sockaddr *VAR_4,
    int VAR_5, int VAR_6)
{
 const char *VAR_7;
 char VAR_8[128];
 int VAR_9;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_6 < 0) {
  FUNC_1(VAR_8, sizeof(VAR_8), "{:%s/%%s} ", VAR_2);
  FUNC_3(VAR_8, VAR_7);
  VAR_9 = 0;
 } else {
  if (VAR_0 != 0 || VAR_1) {
   FUNC_1(VAR_8, sizeof(VAR_8), "{[:%d}{:%s/%%s}{]:} ",
       -VAR_6, VAR_2);
   FUNC_3(VAR_8, VAR_7);
   VAR_9 = FUNC_2(VAR_7) - VAR_6;
   if (VAR_9 < 0)
    VAR_9 = 0;
  } else {
   FUNC_1(VAR_8, sizeof(VAR_8), "{[:%d}{:%s/%%-.*s}{]:} ",
       -VAR_6, VAR_2);
   FUNC_3(VAR_8, VAR_6, VAR_7);
   VAR_9 = 0;
  }
 }
 return (VAR_9);
}
