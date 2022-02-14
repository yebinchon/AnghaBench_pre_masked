
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; int fadump_enabled; } ;
struct TYPE_4__ {int (* fadump_region_show ) (TYPE_2__*,struct seq_file*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,struct seq_file*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 if (!VAR_1.fadump_enabled)
  return 0;

 FUNC_0(&VAR_0);
 VAR_1.ops->fadump_region_show(&VAR_1, VAR_2);
 FUNC_1(&VAR_0);
 return 0;
}
