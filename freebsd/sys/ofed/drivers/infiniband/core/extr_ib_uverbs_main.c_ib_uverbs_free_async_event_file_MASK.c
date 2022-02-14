
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {TYPE_1__* async_file; } ;
struct TYPE_2__ {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct ib_uverbs_file *VAR_1)
{
 FUNC_0(&VAR_1->async_file->ref, VAR_0);
 VAR_1->async_file = ((void*)0);
}
