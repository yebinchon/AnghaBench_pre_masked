
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1 << 28);

 FUNC_1(VAR_0, "0x%01x0000000-0x%01xfffffff ", VAR_1, VAR_1);
 FUNC_1(VAR_0, "Kern key %d ", (VAR_2 >> 30) & 1);
 FUNC_1(VAR_0, "User key %d ", (VAR_2 >> 29) & 1);
 if (VAR_2 & 0x80000000) {
  FUNC_1(VAR_0, "Device 0x%03x", (VAR_2 >> 20) & 0x1ff);
  FUNC_1(VAR_0, "-0x%05x", VAR_2 & 0xfffff);
 } else {
  if (VAR_2 & 0x10000000)
   FUNC_2(VAR_0, "No Exec ");
  FUNC_1(VAR_0, "VSID 0x%06x", VAR_2 & 0xffffff);
 }
 FUNC_2(VAR_0, "\n");
}
