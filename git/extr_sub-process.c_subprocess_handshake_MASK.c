
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int dummy; } ;
struct subprocess_entry {struct child_process process; } ;
struct subprocess_capability {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct child_process*,struct subprocess_capability*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct child_process*,char const*,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct subprocess_entry *VAR_2,
    const char *VAR_3,
    int *VAR_4,
    int *VAR_5,
    struct subprocess_capability *VAR_6,
    unsigned int *VAR_7)
{
 int VAR_8;
 struct child_process *VAR_9 = &VAR_2->process;

 FUNC_3(VAR_0, VAR_1);

 VAR_8 = FUNC_1(VAR_9, VAR_3, VAR_4,
       VAR_5) ||
   FUNC_0(VAR_9, VAR_6,
     VAR_7);

 FUNC_2(VAR_0);
 return VAR_8;
}
