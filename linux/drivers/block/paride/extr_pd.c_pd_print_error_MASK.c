
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int name; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct pd_unit *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1("%s: %s: status = 0x%x =", VAR_1->name, VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_3 & (1 << VAR_4))
   FUNC_1(" %s", VAR_0[VAR_4]);
 FUNC_1("\n");
}
