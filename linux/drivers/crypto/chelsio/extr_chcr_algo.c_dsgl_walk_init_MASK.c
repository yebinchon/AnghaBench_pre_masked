
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phys_sge_pairs {int dummy; } ;
struct dsgl_walk {struct phys_sge_pairs* to; scalar_t__ nents; struct cpl_rx_phys_dsgl* dsgl; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct dsgl_walk *VAR_0,
       struct cpl_rx_phys_dsgl *VAR_1)
{
 VAR_0->dsgl = VAR_1;
 VAR_0->nents = 0;
 VAR_0->to = (struct phys_sge_pairs *)(VAR_1 + 1);
}
