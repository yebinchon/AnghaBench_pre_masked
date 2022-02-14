
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpt_vf {int * affinity_mask; int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct cpt_vf *VAR_0, int VAR_1)
{
 FUNC_1(FUNC_2(VAR_0->pdev, VAR_1), ((void*)0));
 FUNC_0(VAR_0->affinity_mask[VAR_1]);
}
