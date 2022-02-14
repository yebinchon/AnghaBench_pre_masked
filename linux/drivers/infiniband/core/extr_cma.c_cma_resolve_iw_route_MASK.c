
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
struct cma_work {int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cma_work*,struct rdma_id_private*) ;
 int VAR_2 ;
 struct cma_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_3)
{
 struct cma_work *VAR_4;

 VAR_4 = FUNC_1(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3);
 FUNC_2(VAR_2, &VAR_4->work);
 return 0;
}
