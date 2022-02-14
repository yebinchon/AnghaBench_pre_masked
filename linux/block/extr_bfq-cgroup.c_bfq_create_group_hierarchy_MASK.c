
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * service_tree; } ;
struct bfq_group {TYPE_1__ sched_data; } ;
struct bfq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfq_group* FUNC_0 (int,int,int) ;

struct bfq_group *FUNC_1(struct bfq_data *VAR_4, int VAR_5)
{
 struct bfq_group *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2 | VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6->sched_data.service_tree[VAR_7] = VAR_1;

 return VAR_6;
}
