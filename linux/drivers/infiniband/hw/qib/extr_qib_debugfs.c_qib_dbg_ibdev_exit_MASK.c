
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ibdev {int * qib_ibdev_dbg; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void FUNC_1(struct qib_ibdev *VAR_1)
{
 if (!VAR_0)
  goto out;
 FUNC_0(VAR_1->qib_ibdev_dbg);
out:
 VAR_1->qib_ibdev_dbg = ((void*)0);
}
