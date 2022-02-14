
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kvmppc_rm_state {int rm_action; scalar_t__ raw; int in_host; } ;
struct TYPE_2__ {int raw; } ;
struct kvmppc_host_rm_core {TYPE_1__ rm_state; } ;


 union kvmppc_rm_state FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(int VAR_0,
  struct kvmppc_host_rm_core *VAR_1, int VAR_2, int VAR_3)
{
 bool VAR_4;
 int VAR_5;
 union kvmppc_rm_state VAR_6, VAR_7;

 for (VAR_5 = VAR_0 + 1; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_7 = FUNC_0(VAR_1[VAR_5].rm_state);

  if (!VAR_6.in_host || VAR_6.rm_action)
   continue;


  VAR_7.rm_action = VAR_3;

  VAR_4 = FUNC_1(&VAR_1[VAR_5].rm_state.raw,
      VAR_6.raw, VAR_7.raw) == VAR_6.raw;
  if (VAR_4) {






   FUNC_2();
   return VAR_5;
  }
 }

 return -1;
}
