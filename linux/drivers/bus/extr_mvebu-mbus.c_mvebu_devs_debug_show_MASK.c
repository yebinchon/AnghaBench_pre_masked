
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct mvebu_mbus_state {TYPE_1__* soc; } ;
struct TYPE_2__ {int num_wins; } ;


 int FUNC_0 (int) ;
 struct mvebu_mbus_state VAR_0 ;
 int FUNC_1 (struct mvebu_mbus_state*,int,int*,int*,int*,int *,int *,int*) ;
 scalar_t__ FUNC_2 (struct mvebu_mbus_state*,int) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvebu_mbus_state *VAR_3 = &VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->soc->num_wins; VAR_4++) {
  u64 VAR_5, VAR_6;
  u32 VAR_7;
  u8 VAR_8, VAR_9;
  int VAR_10;

  FUNC_1(VAR_3, VAR_4,
           &VAR_10, &VAR_5, &VAR_7,
           &VAR_8, &VAR_9, &VAR_6);

  if (!VAR_10) {
   FUNC_3(VAR_1, "[%02d] disabled\n", VAR_4);
   continue;
  }

  FUNC_3(VAR_1, "[%02d] %016llx - %016llx : %04x:%04x",
      VAR_4, (unsigned long long)VAR_5,
      (unsigned long long)(VAR_5 + VAR_7), VAR_8, VAR_9);

  if (!FUNC_0(VAR_7) ||
      ((VAR_5 & (u64)(VAR_7 - 1)) != 0))
   FUNC_4(VAR_1, " (Invalid base/size!!)");

  if (FUNC_2(VAR_3, VAR_4)) {
   FUNC_3(VAR_1, " (remap %016llx)\n",
       (unsigned long long)VAR_6);
  } else
   FUNC_3(VAR_1, "\n");
 }

 return 0;
}
