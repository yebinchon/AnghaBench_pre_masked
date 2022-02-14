
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_host_rm_core {int dummy; } ;
struct TYPE_2__ {struct kvmppc_host_rm_core* rm_core; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct kvmppc_host_rm_core*,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_3(int VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_2() >> VAR_1;
 struct kvmppc_host_rm_core *VAR_5 = VAR_0->rm_core;

 VAR_3 = FUNC_1(VAR_4, VAR_5, FUNC_0(), VAR_2);
 if (VAR_3 == -1)
  VAR_3 = FUNC_1(VAR_3, VAR_5, VAR_4, VAR_2);

 return VAR_3;
}
