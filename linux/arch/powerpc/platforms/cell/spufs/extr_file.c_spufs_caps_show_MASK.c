
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int flags; } ;
struct seq_file {struct spu_context* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 struct spu_context *VAR_4 = VAR_2->private;

 if (!(VAR_4->flags & VAR_1))
  FUNC_0(VAR_2, "sched\n");
 if (!(VAR_4->flags & VAR_0))
  FUNC_0(VAR_2, "step\n");
 return 0;
}
