
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int num_threads; } ;
struct core_info {int total_threads; } ;


 int FUNC_0 (struct kvmppc_vcore*,struct core_info*) ;

__attribute__((used)) static bool FUNC_1(struct kvmppc_vcore *VAR_0, struct core_info *VAR_1,
     int VAR_2)
{
 if (VAR_1->total_threads + VAR_0->num_threads > VAR_2)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
