
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;

char *FUNC_5(int VAR_0, char *VAR_1, int VAR_2) {
 int VAR_3;
 char *VAR_4, *VAR_5, *VAR_6, VAR_7;
 char VAR_8[128] = {0};

 FUNC_0(VAR_0, VAR_8, sizeof(VAR_8));

 for (VAR_3 = 0; VAR_8[VAR_3]; VAR_3++) VAR_8[VAR_3] &= 127;

 for (VAR_6 = FUNC_4(VAR_8, " "); VAR_6; VAR_6 = FUNC_4(VAR_8, " ")) {
  FUNC_1(VAR_6, VAR_6+1, FUNC_2(VAR_6+1)+1);
 }

 VAR_4 = FUNC_4(VAR_8, "[");
 VAR_5 = FUNC_4(VAR_8, "]");
 if (VAR_4 && VAR_5) {
  if (VAR_5 > VAR_4) FUNC_1(VAR_4, VAR_5+1, FUNC_2(VAR_5+1)+1);
  else FUNC_1(VAR_5, VAR_4+1, FUNC_2(VAR_4+1)+1);
 }

 if ((VAR_8[0] == 'm' || VAR_8[0] == 'M') &&
   (VAR_8[1] == 'r' || VAR_8[1] == 'R')) {
  FUNC_1(VAR_8, VAR_8+2, FUNC_2(VAR_8+2)+1);
 }

 VAR_6 = VAR_8;
 while(*VAR_6) {
  VAR_7 = *VAR_6;
  if ((VAR_7 >= 'a' && VAR_7 <= 'z') ||
    (VAR_7 >= '0' && VAR_7 <= '9') || VAR_7 == '_') {
   VAR_6++;
  }
  else if (VAR_7 >= 'A' && VAR_7 <= 'Z') {
   *VAR_6 += 'a' - 'A';
   VAR_6++;
  }
  else {
   FUNC_1(VAR_6, VAR_6+1, FUNC_2(VAR_6 + 1)+1);
  }
 }
 FUNC_3(VAR_1, VAR_8, VAR_2-1);
 VAR_1[VAR_2-1] = '\0';
 return VAR_1;
}
