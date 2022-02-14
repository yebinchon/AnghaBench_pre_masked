
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cptvf_wqe_info {struct cptvf_wqe* vq_wqe; } ;
struct cptvf_wqe {int qno; int cptvf; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct cptvf_wqe_info *VAR_1 = (struct cptvf_wqe_info *)VAR_0;
 struct cptvf_wqe *VAR_2 = &VAR_1->vq_wqe[0];

 FUNC_0(VAR_2->cptvf, VAR_2->qno);
}
