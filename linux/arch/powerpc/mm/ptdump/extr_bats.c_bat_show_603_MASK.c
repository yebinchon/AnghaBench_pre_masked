
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_6, int VAR_7, u32 VAR_8, u32 VAR_9, bool VAR_10)
{
 u32 VAR_11 = VAR_9 & 0xfffe0000;
 u32 VAR_12 = (VAR_9 >> 2) & 0x7ff;
 u32 VAR_13 = VAR_9 & 3;
 phys_addr_t VAR_14 = FUNC_0(VAR_8);
 u32 VAR_15 = (VAR_12 + 1) << 17;

 FUNC_1(VAR_6, "%d: ", VAR_7);
 if (VAR_13 == 0) {
  FUNC_2(VAR_6, "        -\n");
  return;
 }

 FUNC_1(VAR_6, "0x%08x-0x%08x ", VAR_11, VAR_11 + VAR_15 - 1);



 FUNC_1(VAR_6, "0x%08x ", VAR_14);


 if (VAR_13 == 1)
  FUNC_2(VAR_6, "User ");
 else if (VAR_13 == 2)
  FUNC_2(VAR_6, "Kernel ");
 else
  FUNC_2(VAR_6, "Kernel/User ");

 if (VAR_8 & VAR_1)
  FUNC_2(VAR_6, VAR_10 ? "RO " : "EXEC ");
 else if (VAR_8 & VAR_0)
  FUNC_2(VAR_6, VAR_10 ? "RW " : "EXEC ");
 else
  FUNC_2(VAR_6, VAR_10 ? "NA " : "NX   ");

 if (VAR_8 & VAR_5)
  FUNC_2(VAR_6, "write through ");
 if (VAR_8 & VAR_4)
  FUNC_2(VAR_6, "no cache ");
 if (VAR_8 & VAR_2)
  FUNC_2(VAR_6, "coherent ");
 if (VAR_8 & VAR_3)
  FUNC_2(VAR_6, "guarded ");
 FUNC_2(VAR_6, "\n");
}
