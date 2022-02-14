
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cptvf_wqe_info {struct cptvf_wqe* vq_wqe; } ;
struct cptvf_wqe {int dummy; } ;
struct cpt_vf {int nr_queues; scalar_t__ wqe_info; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct cptvf_wqe *FUNC_1(struct cpt_vf *VAR_0,
       int VAR_1)
{
 struct cptvf_wqe_info *VAR_2;

 if (FUNC_0(VAR_1 >= VAR_0->nr_queues))
  return ((void*)0);
 VAR_2 = (struct cptvf_wqe_info *)VAR_0->wqe_info;

 return &VAR_2->vq_wqe[VAR_1];
}
