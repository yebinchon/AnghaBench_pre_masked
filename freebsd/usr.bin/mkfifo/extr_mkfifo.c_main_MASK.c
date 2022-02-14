
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (void const*,int ) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_5, char *VAR_6[])
{
 const char *VAR_7 = ((void*)0);
 const void *VAR_8;
 mode_t VAR_9;
 int VAR_10, VAR_11;

 while ((VAR_10 = FUNC_4(VAR_5, VAR_6, "m:")) != -1)
  switch(VAR_10) {
  case 'm':
   VAR_2 = 1;
   VAR_7 = VAR_3;
   break;
  case '?':
  default:
   FUNC_8();
  }
 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;
 if (VAR_6[0] == ((void*)0))
  FUNC_8();

 if (VAR_2) {
  FUNC_7(0);
  VAR_1 = 0;
  if ((VAR_8 = FUNC_6(VAR_7)) == ((void*)0)) {
   if (VAR_1)
    FUNC_0(1, "setmode");
   FUNC_1(1, "invalid file mode: %s", VAR_7);
  }
  VAR_9 = FUNC_3(VAR_8, VAR_0);
 } else {
  VAR_9 = VAR_0;
 }

 for (VAR_11 = 0; *VAR_6 != ((void*)0); ++VAR_6)
  if (FUNC_5(*VAR_6, VAR_9) < 0) {
   FUNC_9("%s", *VAR_6);
   VAR_11 = 1;
  }
 FUNC_2(VAR_11);
}
