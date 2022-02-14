
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stripe ;
typedef int U32 ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, U32 VAR_1)
{
 char VAR_2[5];
 int VAR_3, VAR_4;

 VAR_3 = 0;
 FUNC_1("%s: ", VAR_0);
 for (VAR_4 = 0; VAR_1 != 0; VAR_4++, VAR_1 >>= 1)
  if (VAR_1 & 1) {
   FUNC_0(VAR_2, sizeof(VAR_2), 1 << VAR_4);
   if (VAR_3)
    FUNC_1(", ");
   FUNC_1("%s", VAR_2);
   VAR_3 = 1;
  }
 FUNC_1("\n");
}
