
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ibdev {int * hfi1_ibdev_dbg; int hfi1_ibdev_link; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct hfi1_ibdev*) ;

void FUNC_3(struct hfi1_ibdev *VAR_1)
{
 if (!VAR_0)
  goto out;
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->hfi1_ibdev_link);
 FUNC_1(VAR_1->hfi1_ibdev_dbg);
out:
 VAR_1->hfi1_ibdev_dbg = ((void*)0);
}
