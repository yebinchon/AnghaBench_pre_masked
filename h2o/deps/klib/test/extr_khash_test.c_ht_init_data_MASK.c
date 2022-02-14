
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long khint32_t ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char** VAR_3 ;
 char* FUNC_3 (char*) ;

void FUNC_4()
{
 int VAR_4;
 char VAR_5[256];
 khint32_t VAR_6 = 11;
 FUNC_1("--- generating data... ");
 VAR_2 = (unsigned*)FUNC_0(VAR_1, sizeof(unsigned));
 VAR_3 = (char**)FUNC_0(VAR_1, sizeof(char*));
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_2[VAR_4] = (unsigned)(VAR_1 * ((double)VAR_6 / VAR_0) / 4) * 271828183u;
  FUNC_2(VAR_5, "%x", VAR_2[VAR_4]);
  VAR_3[VAR_4] = FUNC_3(VAR_5);
  VAR_6 = 1664525L * VAR_6 + 1013904223L;
 }
 FUNC_1("done!\n");
}
