
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cq {int work; int comp_wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0->comp_wq, &VAR_0->work);
}
