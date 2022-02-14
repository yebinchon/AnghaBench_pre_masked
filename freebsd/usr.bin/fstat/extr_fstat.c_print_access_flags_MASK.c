
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 char VAR_3[3];

 VAR_3[0] = '\0';
 if (VAR_2 & VAR_0)
  FUNC_1(VAR_3, "r");
 if (VAR_2 & VAR_1)
  FUNC_1(VAR_3, "w");
 FUNC_0(" %2s", VAR_3);
}
