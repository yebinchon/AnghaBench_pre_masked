
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int,int) ;
 char* VAR_0 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_1, VAR_2;
 int VAR_3, VAR_4[2], VAR_5[2];

 VAR_0 = "complex_cycles";
 FUNC_2("%s\n", VAR_0);
 FUNC_3(&VAR_1, &VAR_2);
 FUNC_0(&VAR_3, VAR_4, VAR_5);
 FUNC_4(VAR_4[0], VAR_5[0]);
 FUNC_4(VAR_4[0], VAR_5[1]);
 FUNC_4(VAR_5[0], VAR_4[0]);
 FUNC_4(VAR_5[0], VAR_4[1]);
 FUNC_4(VAR_5[0], VAR_3);
 FUNC_4(VAR_4[0], VAR_3);
 FUNC_1(VAR_3, VAR_4[0], VAR_4[1], VAR_5[0], VAR_5[1]);
 FUNC_5(VAR_1, VAR_2);
}
