
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ debugfs_dir; int debugfs_stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,scalar_t__,TYPE_1__*,int *) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_3(void)
{
 if (!FUNC_2())
  return;

 if (!VAR_1.debugfs_dir)
  VAR_1.debugfs_dir = FUNC_0(VAR_0,
           ((void*)0));

 if (!VAR_1.debugfs_stats)

  FUNC_1("stats", 0400, VAR_1.debugfs_dir,
        &VAR_1, &VAR_2);
}
