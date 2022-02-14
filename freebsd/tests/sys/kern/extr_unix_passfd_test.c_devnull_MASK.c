
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1("/dev/null", VAR_0);
 FUNC_0(VAR_3 != -1, "open failed: %s", FUNC_2(VAR_1));
 *VAR_2 = VAR_3;
}
