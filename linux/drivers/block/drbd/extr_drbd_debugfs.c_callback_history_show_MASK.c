
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drbd_connection* private; } ;
struct drbd_connection {int r_timing_details; int r_cb_nr; int w_timing_details; int w_cb_nr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct drbd_connection *VAR_3 = VAR_1->private;
 unsigned long VAR_4 = VAR_0;


 FUNC_1(VAR_1, "v: %u\n\n", 0);

 FUNC_2(VAR_1, "n\tage\tcallsite\tfn\n");
 FUNC_0(VAR_1, "worker", VAR_3->w_cb_nr, VAR_3->w_timing_details, VAR_4);
 FUNC_0(VAR_1, "receiver", VAR_3->r_cb_nr, VAR_3->r_timing_details, VAR_4);
 return 0;
}
