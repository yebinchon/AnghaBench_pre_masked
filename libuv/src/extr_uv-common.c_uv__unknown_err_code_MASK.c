
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static const char* FUNC_2(int VAR_0) {
  char VAR_1[32];
  char* VAR_2;

  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown system error %d", VAR_0);
  VAR_2 = FUNC_1(VAR_1);

  return VAR_2 != ((void*)0) ? VAR_2 : "Unknown system error";
}
