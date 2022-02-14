
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2, VAR_3, VAR_4;
 FUNC_0("PMC                                               Abbreviation\n");
 FUNC_0("--------------------------------------------------------------\n");
 for(VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  VAR_3 = FUNC_0("%s", VAR_1[VAR_2]);
  for(VAR_4=VAR_3; VAR_4<52; VAR_4++) {
   FUNC_0(" ");
  }
  FUNC_0("%%%d\n", VAR_2);
 }
}
