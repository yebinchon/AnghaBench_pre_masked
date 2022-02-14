
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(u_int VAR_1, u_int VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_2), VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_0("[%d]", VAR_1);
 else {
  FUNC_0("%s", VAR_3);
  if (VAR_0)
   FUNC_0("[%d]", VAR_1);
 }
}
