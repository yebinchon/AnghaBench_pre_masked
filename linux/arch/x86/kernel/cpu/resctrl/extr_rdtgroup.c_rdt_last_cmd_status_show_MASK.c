
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct kernfs_open_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int,int ) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct kernfs_open_file *VAR_3,
        struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_2);
 VAR_6 = FUNC_2(&VAR_0);
 if (VAR_6)
  FUNC_3(VAR_4, "%.*s", VAR_6, VAR_1);
 else
  FUNC_4(VAR_4, "ok\n");
 FUNC_1(&VAR_2);
 return 0;
}
