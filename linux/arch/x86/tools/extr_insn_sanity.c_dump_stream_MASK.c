
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,struct insn*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(FILE *VAR_4, const char *VAR_5, unsigned long VAR_6,
   unsigned char *VAR_7, struct insn *VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_4, "%s:\n", VAR_5);

 FUNC_0(VAR_4, VAR_8);

 FUNC_1(VAR_4, "You can reproduce this with below command(s);\n");


 FUNC_1(VAR_4, " $ echo ");
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_1(VAR_4, " %02x", VAR_7[VAR_9]);
 FUNC_1(VAR_4, " | %s -i -\n", VAR_2);

 if (!VAR_1) {
  FUNC_1(VAR_4, "Or \n");

  FUNC_1(VAR_4, " $ %s -s 0x%x,%lu\n", VAR_2, VAR_3, VAR_6);
 }
}
