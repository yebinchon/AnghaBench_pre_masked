
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct ioc_cgrp {int dfl_weight; } ;
struct blkcg {int dummy; } ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct blkcg*,int ,int *,int ,int) ;
 struct ioc_cgrp* FUNC_1 (struct blkcg*) ;
 struct blkcg* FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct seq_file*) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 struct blkcg *VAR_4 = FUNC_2(FUNC_4(VAR_2));
 struct ioc_cgrp *VAR_5 = FUNC_1(VAR_4);

 FUNC_5(VAR_2, "default %u\n", VAR_5->dfl_weight);
 FUNC_0(VAR_2, VAR_4, VAR_1,
     &VAR_0, FUNC_3(VAR_2)->private, 0);
 return 0;
}
