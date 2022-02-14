
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_dev {int dummy; } ;
struct qedr_cq {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;


 int FUNC_0 (struct qedr_dev*,char*,struct qedr_cq*) ;
 struct qedr_cq* FUNC_1 (struct ib_cq*) ;
 struct qedr_dev* FUNC_2 (int ) ;

int FUNC_3(struct ib_cq *VAR_0, int VAR_1, struct ib_udata *VAR_2)
{
 struct qedr_dev *VAR_3 = FUNC_2(VAR_0->device);
 struct qedr_cq *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, "cq %p RESIZE NOT SUPPORTED\n", VAR_4);

 return 0;
}
