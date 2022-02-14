
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {struct nitrox_device* private; } ;
struct TYPE_2__ {int dropped; int completed; int posted; } ;
struct nitrox_device {TYPE_1__ stats; int idx; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct nitrox_device *VAR_2 = VAR_0->private;

 FUNC_1(VAR_0, "NITROX [%d] Request Statistics\n", VAR_2->idx);
 FUNC_1(VAR_0, "  Posted: %llu\n",
     (u64)FUNC_0(&VAR_2->stats.posted));
 FUNC_1(VAR_0, "  Completed: %llu\n",
     (u64)FUNC_0(&VAR_2->stats.completed));
 FUNC_1(VAR_0, "  Dropped: %llu\n",
     (u64)FUNC_0(&VAR_2->stats.dropped));

 return 0;
}
