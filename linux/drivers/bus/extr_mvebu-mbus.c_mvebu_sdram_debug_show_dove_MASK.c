
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct mvebu_mbus_state {scalar_t__ sdramwins_base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct mvebu_mbus_state *VAR_0,
           struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  u32 VAR_4 = FUNC_1(VAR_0->sdramwins_base + FUNC_0(VAR_3));
  u64 VAR_5;
  u32 VAR_6;

  if (!(VAR_4 & 1)) {
   FUNC_2(VAR_1, "[%d] disabled\n", VAR_3);
   continue;
  }

  VAR_5 = VAR_4 & 0xff800000;
  VAR_6 = 0x100000 << (((VAR_4 & 0x000f0000) >> 16) - 4);

  FUNC_2(VAR_1, "[%d] %016llx - %016llx : cs%d\n",
      VAR_3, (unsigned long long)VAR_5,
      (unsigned long long)VAR_5 + VAR_6, VAR_3);
 }

 return 0;
}
