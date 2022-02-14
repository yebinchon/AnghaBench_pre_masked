
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int map ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,unsigned char**) ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 unsigned char VAR_3[256];
 size_t VAR_4;

 if (FUNC_2(0, VAR_0, &VAR_3) == -1) {
  FUNC_3();
  FUNC_0(1, "getting screenmap");
 }
 for (VAR_4=0; VAR_4<sizeof(VAR_3); VAR_4++) {
  if (VAR_4 != 0 && VAR_4 % 16 == 0)
   FUNC_1(VAR_2, "\n");

  if (VAR_1 != 0)
   FUNC_1(VAR_2, " %02x", VAR_3[VAR_4]);
  else
   FUNC_1(VAR_2, " %03d", VAR_3[VAR_4]);
 }
 FUNC_1(VAR_2, "\n");

}
