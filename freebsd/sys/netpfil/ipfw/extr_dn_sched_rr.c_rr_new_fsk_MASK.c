
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rr_schk {int q_bytes; int min_q; int max_q; } ;
struct TYPE_2__ {int * par; } ;
struct dn_fsk {TYPE_1__ fs; scalar_t__ sched; } ;


 int FUNC_0 (int *,int,int,int,char*) ;

__attribute__((used)) static int
FUNC_1(struct dn_fsk *VAR_0)
{
 struct rr_schk *VAR_1 = (struct rr_schk *)(VAR_0->sched + 1);


 FUNC_0(&VAR_0->fs.par[0], 1,
  1, 65536, "RR weight");
 FUNC_0(&VAR_0->fs.par[1], VAR_1->q_bytes,
  VAR_1->min_q, VAR_1->max_q, "RR quantum");
 return 0;
}
