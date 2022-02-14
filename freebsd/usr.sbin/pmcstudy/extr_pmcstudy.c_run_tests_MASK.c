
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_3, VAR_4;
 FUNC_1("Running tests on %d PMC's this may take some time\n", VAR_1);
 FUNC_1("------------------------------------------------------------------------\n");
 for(VAR_3=0; VAR_3<VAR_1; VAR_3++) {
  VAR_4 = FUNC_1("%s", VAR_2[VAR_3]);
  FUNC_0(VAR_0);
  FUNC_2(VAR_2[VAR_3], VAR_4);
 }
}
