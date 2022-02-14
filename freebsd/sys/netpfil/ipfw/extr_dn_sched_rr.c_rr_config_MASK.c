
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_schk {int min_q; int max_q; int q_bytes; } ;
struct dn_schk {int dummy; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct dn_schk *VAR_0)
{
 struct rr_schk *VAR_1 = (struct rr_schk *)(VAR_0 + 1);
 FUNC_0("called");


 VAR_1->min_q = 64;
 VAR_1->max_q = 2048;
 VAR_1->q_bytes = 1500;

 return 0;
}
