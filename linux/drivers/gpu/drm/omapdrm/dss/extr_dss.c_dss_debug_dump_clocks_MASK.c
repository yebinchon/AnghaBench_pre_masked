
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct dss_device* private; } ;
struct dss_device {int dispc; } ;


 int FUNC_0 (int ,struct seq_file*) ;
 int FUNC_1 (struct dss_device*,struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct dss_device *VAR_2 = VAR_0->private;

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->dispc, VAR_0);
 return 0;
}
