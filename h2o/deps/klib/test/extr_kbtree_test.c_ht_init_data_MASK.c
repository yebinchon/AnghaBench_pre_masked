
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;
 char** VAR_2 ;
 char* FUNC_5 (char*) ;

void FUNC_6()
{
 int VAR_3;
 char VAR_4[256];
 FUNC_2("--- generating data... ");
 FUNC_4(11);
 VAR_1 = (unsigned*)FUNC_0(VAR_0, sizeof(unsigned));
 VAR_2 = (char**)FUNC_0(VAR_0, sizeof(char*));
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_1[VAR_3] = (unsigned)(VAR_0 * FUNC_1() / 4) * 271828183u;
  FUNC_3(VAR_4, "%x", VAR_1[VAR_3]);
  VAR_2[VAR_3] = FUNC_5(VAR_4);
 }
 FUNC_2("done!\n");
}
