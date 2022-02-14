
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct mvebu_mbus_state {scalar_t__ sdramwins_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct mvebu_mbus_state *VAR_6,
     struct seq_file *VAR_7, void *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  u32 VAR_10 = FUNC_2(VAR_6->sdramwins_base + FUNC_0(VAR_9));
  u32 VAR_11 = FUNC_2(VAR_6->sdramwins_base + FUNC_1(VAR_9));
  u64 VAR_12;
  u32 VAR_13;

  if (!(VAR_11 & VAR_4)) {
   FUNC_3(VAR_7, "[%d] disabled\n", VAR_9);
   continue;
  }

  VAR_12 = ((u64)VAR_10 & VAR_0) << 32;
  VAR_12 |= VAR_10 & VAR_1;
  VAR_13 = (VAR_11 | ~VAR_5);

  FUNC_3(VAR_7, "[%d] %016llx - %016llx : cs%d\n",
      VAR_9, (unsigned long long)VAR_12,
      (unsigned long long)VAR_12 + VAR_13 + 1,
      (VAR_11 & VAR_2) >> VAR_3);
 }

 return 0;
}
