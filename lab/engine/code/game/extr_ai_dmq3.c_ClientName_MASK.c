
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;

char *FUNC_5(int VAR_4, char *VAR_5, int VAR_6) {
 char VAR_7[VAR_2];

 if (VAR_4 < 0 || VAR_4 >= VAR_1) {
  FUNC_0(VAR_3, "ClientName: client out of range\n");
  return "[client out of range]";
 }
 FUNC_4(VAR_0+VAR_4, VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_5, FUNC_1(VAR_7, "n"), VAR_6-1);
 VAR_5[VAR_6-1] = '\0';
 FUNC_2( VAR_5 );
 return VAR_5;
}
