
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int pid; scalar_t__ tx_win; int cop; int hvwc_map; } ;
struct seq_file {struct vas_window* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct vas_window *VAR_3 = VAR_1->private;

 FUNC_1(&VAR_0);


 if (!VAR_3->hvwc_map)
  goto unlock;

 FUNC_3(VAR_1, "Type: %s, %s\n", FUNC_0(VAR_3->cop),
     VAR_3->tx_win ? "Send" : "Receive");
 FUNC_3(VAR_1, "Pid : %d\n", VAR_3->pid);

unlock:
 FUNC_2(&VAR_0);
 return 0;
}
