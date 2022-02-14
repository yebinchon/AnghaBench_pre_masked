
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct output {struct seq_file* ctx; int fn; } ;


 int FUNC_0 (int ,struct output*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct output VAR_3 = {
  .fn = VAR_0,
  .ctx = VAR_1
 };

 FUNC_0(VAR_1->private, &VAR_3, 0);

 return 0;
}
