
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int idr; } ;
struct vc4_file {TYPE_1__ perfmon; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct vc4_file *VAR_1)
{
 FUNC_2(&VAR_1->perfmon.lock);
 FUNC_1(&VAR_1->perfmon.idr, VAR_0, ((void*)0));
 FUNC_0(&VAR_1->perfmon.idr);
 FUNC_3(&VAR_1->perfmon.lock);
}
