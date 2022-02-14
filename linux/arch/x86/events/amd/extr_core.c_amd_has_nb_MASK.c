
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {struct amd_nb* amd_nb; } ;
struct amd_nb {int nb_id; } ;



__attribute__((used)) static inline int FUNC_0(struct cpu_hw_events *VAR_0)
{
 struct amd_nb *VAR_1 = VAR_0->amd_nb;

 return VAR_1 && VAR_1->nb_id != -1;
}
