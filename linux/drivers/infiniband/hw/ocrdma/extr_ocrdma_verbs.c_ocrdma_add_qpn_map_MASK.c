
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {size_t id; } ;
struct ocrdma_dev {struct ocrdma_qp** qp_tbl; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ocrdma_dev *VAR_2, struct ocrdma_qp *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_3->id < VAR_1 && VAR_2->qp_tbl[VAR_3->id] == ((void*)0)) {
  VAR_2->qp_tbl[VAR_3->id] = VAR_3;
  VAR_4 = 0;
 }
 return VAR_4;
}
