
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, u64 VAR_1)
{
 int VAR_2,VAR_3;
 static const char *VAR_4[]={ "", "K", "M", "G", "T" };

 for (VAR_2=0, VAR_3=0; VAR_2 < 64; VAR_2++ , VAR_3=VAR_2/10) {
  if (VAR_1 & 0x1)
   FUNC_0(VAR_0, "%d%s ", 1 << (VAR_2-VAR_3*10), VAR_4[VAR_3]);
  VAR_1 >>= 1;
 }
}
