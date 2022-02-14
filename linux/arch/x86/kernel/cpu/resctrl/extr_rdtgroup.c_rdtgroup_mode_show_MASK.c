
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rdtgroup {int mode; } ;
struct kernfs_open_file {int kn; } ;


 int VAR_0 ;
 struct rdtgroup* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct kernfs_open_file *VAR_1,
         struct seq_file *VAR_2, void *VAR_3)
{
 struct rdtgroup *VAR_4;

 VAR_4 = FUNC_0(VAR_1->kn);
 if (!VAR_4) {
  FUNC_1(VAR_1->kn);
  return -VAR_0;
 }

 FUNC_3(VAR_2, "%s\n", FUNC_2(VAR_4->mode));

 FUNC_1(VAR_1->kn);
 return 0;
}
