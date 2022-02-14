
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_3, int VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_6 & 0xfffe0000;
 u32 VAR_8 = (VAR_6 >> 2) & 3;
 u32 VAR_9 = VAR_6 & 3;
 phys_addr_t VAR_10 = FUNC_0(VAR_5);
 u32 VAR_11 = VAR_5 & 0x3ff;
 u32 VAR_12 = (VAR_11 + 1) << 17;

 FUNC_2(VAR_3, "%d: ", VAR_4);
 if (!(VAR_5 & 0x40)) {
  FUNC_3(VAR_3, "        -\n");
  return;
 }

 FUNC_2(VAR_3, "0x%08x-0x%08x ", VAR_7, VAR_7 + VAR_12 - 1);



 FUNC_2(VAR_3, "0x%08x ", VAR_10);


 FUNC_2(VAR_3, "Kernel %s User %s", FUNC_1(VAR_8 & 2, VAR_9), FUNC_1(VAR_8 & 1, VAR_9));

 if (VAR_5 & VAR_2)
  FUNC_3(VAR_3, "write through ");
 if (VAR_5 & VAR_1)
  FUNC_3(VAR_3, "no cache ");
 if (VAR_5 & VAR_0)
  FUNC_3(VAR_3, "coherent ");
 FUNC_3(VAR_3, "\n");
}
