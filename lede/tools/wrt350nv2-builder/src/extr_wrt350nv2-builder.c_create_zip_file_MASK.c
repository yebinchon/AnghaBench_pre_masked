
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,size_t,char*,char*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(char *VAR_2, char *VAR_3) {
 int VAR_4 = 0;

 char *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = 1000;
 VAR_5 = ((void*)0);
 do {

  if (!VAR_5) {
   VAR_5 = FUNC_3(VAR_6);
  }
  if (!VAR_5) {
   VAR_4 = 1;
   FUNC_4("create_zip_file: can not allocate %i bytes\n", (int) VAR_6);
   break;
  }


  VAR_7 = FUNC_5(VAR_5, VAR_6, "zip \"%s\" \"%s\"", VAR_2, VAR_3);
  if ((VAR_7 > -1) && (VAR_7 < VAR_6)) {
   break;
  }


  if (VAR_7 > -1) {
   VAR_6 = VAR_7 + 1;
  } else {
   VAR_6 *= 2;
  }
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
  FUNC_2(VAR_1, " extending buffer to %i bytes\n", VAR_6);
 } while (1);

 if (!VAR_4) {

  FUNC_2(VAR_0, "%s\n", VAR_5);
  VAR_7 = FUNC_6(VAR_5);
  if ((VAR_7 < 0) || (FUNC_0(VAR_7))) {
   VAR_4 = 1;
   FUNC_4("create_zip_file: can not execute %s bytes\n", VAR_5);
  }
 }

 return VAR_4;
}
