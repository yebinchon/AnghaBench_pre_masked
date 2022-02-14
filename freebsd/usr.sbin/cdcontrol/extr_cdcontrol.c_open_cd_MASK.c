
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 char VAR_8[VAR_2];
 const char *VAR_9;

 if (VAR_7 > -1)
  return (1);

 if (VAR_5) {
     if (*VAR_5 == '/') {
      FUNC_2 (VAR_8, VAR_2, "%s", VAR_5);
     } else {
      FUNC_2 (VAR_8, VAR_2, "%s%s", VAR_4, VAR_5);
     }
     VAR_7 = FUNC_1 (VAR_9 = VAR_8, VAR_3);
 } else {
     VAR_7 = FUNC_1(VAR_9 = "/dev/cdrom", VAR_3);
     if (VAR_7 < 0 && VAR_6 == VAR_0)
  VAR_7 = FUNC_1(VAR_9 = "/dev/cd0", VAR_3);
 }

 if (VAR_7 < 0) {
  if (VAR_6 == VAR_1) {



   FUNC_3("no disc in drive %s", VAR_9);
   return (0);
  }
  FUNC_0(1, "%s", VAR_9);
 }
 return (1);
}
