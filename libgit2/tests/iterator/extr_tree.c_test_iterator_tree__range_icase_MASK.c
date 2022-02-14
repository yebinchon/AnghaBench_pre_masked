
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

void FUNC_2(void)
{
 VAR_0 = FUNC_1("testrepo");

 FUNC_0(VAR_0, "B", "C", 0, 0);
 FUNC_0(VAR_0, "B", "C", 1, 1);
 FUNC_0(VAR_0, "b", "c", 0, 1);
 FUNC_0(VAR_0, "b", "c", 1, 1);

 FUNC_0(VAR_0, "a", "z", 0, 3);
 FUNC_0(VAR_0, "a", "z", 1, 4);
 FUNC_0(VAR_0, "A", "Z", 0, 1);
 FUNC_0(VAR_0, "A", "Z", 1, 4);
 FUNC_0(VAR_0, "a", "Z", 0, 0);
 FUNC_0(VAR_0, "a", "Z", 1, 4);
 FUNC_0(VAR_0, "A", "z", 0, 4);
 FUNC_0(VAR_0, "A", "z", 1, 4);

 FUNC_0(VAR_0, "new.txt", "new.txt", 1, 1);
 FUNC_0(VAR_0, "new.txt", "new.txt", 0, 1);
 FUNC_0(VAR_0, "README", "README", 1, 1);
 FUNC_0(VAR_0, "README", "README", 0, 1);
}
