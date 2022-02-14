
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct kernfs_root {int dummy; } ;
struct TYPE_3__ {scalar_t__ alloc_enabled; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, struct kernfs_root *VAR_5)
{
 if (VAR_3[VAR_1].alloc_enabled)
  FUNC_1(VAR_4, ",cdp");

 if (VAR_3[VAR_0].alloc_enabled)
  FUNC_1(VAR_4, ",cdpl2");

 if (FUNC_0(&VAR_3[VAR_2]))
  FUNC_1(VAR_4, ",mba_MBps");

 return 0;
}
