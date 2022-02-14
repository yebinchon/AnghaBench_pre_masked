
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xics {scalar_t__ real_mode_dbg; } ;
struct kvmppc_icp {scalar_t__ rm_action; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct kvmppc_xics *VAR_2,
     struct kvmppc_icp *VAR_3)
{
 return (VAR_2->real_mode_dbg || VAR_3->rm_action) ? VAR_1 : VAR_0;
}
