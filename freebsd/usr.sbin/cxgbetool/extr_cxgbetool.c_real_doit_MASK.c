
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long,void*) ;
 char* VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(unsigned long VAR_3, void *VAR_4, const char *VAR_5)
{
 static int VAR_6 = -1;
 int VAR_7 = 0;

 if (VAR_6 == -1) {
  char VAR_8[64];

  FUNC_2(VAR_8, sizeof(VAR_8), "/dev/%s", VAR_2);
  if ((VAR_6 = FUNC_1(VAR_8, VAR_0)) < 0) {
   FUNC_3("open(%s)", VAR_2);
   VAR_7 = VAR_1;
   return (VAR_7);
  }
 }

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4);
 if (VAR_7 < 0) {
  FUNC_3("%s", VAR_5);
  VAR_7 = VAR_1;
 }

 return (VAR_7);
}
