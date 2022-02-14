
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offload_handle; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct ipsec_sa_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipsec_sa_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xfrm_state *VAR_1)
{
 struct ipsec_sa_entry *VAR_2;

 if (!VAR_1->xso.offload_handle)
  return;

 VAR_2 = (struct ipsec_sa_entry *)VAR_1->xso.offload_handle;
 FUNC_0(VAR_2);
 FUNC_1(VAR_0);
}
