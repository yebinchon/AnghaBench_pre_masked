
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct seq_file *VAR_2 = (struct seq_file *)VAR_1;
 unsigned int VAR_3, VAR_4, VAR_5;

 FUNC_3(VAR_2, "processor       : %d\n", FUNC_4());
 FUNC_3(VAR_2, "C-SKY CPU model : %s\n", VAR_0);


 VAR_3 = FUNC_0("cr13");
 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  FUNC_3(VAR_2, "product info[%d] : 0x%08x\n", VAR_5, VAR_3);

  VAR_4 = FUNC_0("cr13");


  if (VAR_3 == VAR_4)
   break;

  VAR_3 = VAR_4;


  if (!(VAR_4 >> 28)) {
   while ((FUNC_0("cr13") >> 28) != VAR_5);
   break;
  }
 }


 FUNC_3(VAR_2, "hint (CPU funcs): 0x%08x\n", FUNC_2());
 FUNC_3(VAR_2, "ccr  (L1C & MMU): 0x%08x\n", FUNC_0("cr18"));
 FUNC_3(VAR_2, "ccr2 (L2C)      : 0x%08x\n", FUNC_1());
 FUNC_3(VAR_2, "\n");
}
