
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,char*,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 FUNC_2();
 VAR_2 = FUNC_3("empty_standard_repo");
 FUNC_1(FUNC_6(VAR_2), "dummy-marker.txt");

 FUNC_4(&VAR_0, "./empty");

 FUNC_0(FUNC_5(&VAR_3, "./empty_standard_repo", "./empty", &VAR_1));
}
