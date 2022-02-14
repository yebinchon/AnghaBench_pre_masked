
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 VAR_0 = FUNC_3("empty_standard_repo");
 FUNC_2(FUNC_4(VAR_0), "dummy-marker.txt");

 FUNC_1("empty_standard_repo/before", "whatever\n");
 FUNC_1("empty_standard_repo/FIRST", "whatever\n");
 FUNC_1("empty_standard_repo/second", "whatever\n");
 FUNC_1("empty_standard_repo/THIRD", "whatever\n");
 FUNC_1("empty_standard_repo/zafter", "whatever\n");
 FUNC_1("empty_standard_repo/Zlast", "whatever\n");

 FUNC_0(VAR_0, "first", "third");
 FUNC_0(VAR_0, "FIRST", "THIRD");
 FUNC_0(VAR_0, "first", "THIRD");
 FUNC_0(VAR_0, "FIRST", "third");
 FUNC_0(VAR_0, "FirSt", "tHiRd");
}
