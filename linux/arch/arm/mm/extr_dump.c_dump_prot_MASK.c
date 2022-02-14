
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prot_bits {int mask; int val; char* set; char* clear; } ;
struct pg_state {int current_prot; int seq; } ;


 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(struct pg_state *VAR_0, const struct prot_bits *VAR_1, size_t VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  const char *VAR_4;

  if ((VAR_0->current_prot & VAR_1->mask) == VAR_1->val)
   VAR_4 = VAR_1->set;
  else
   VAR_4 = VAR_1->clear;

  if (VAR_4)
   FUNC_0(VAR_0->seq, " %s", VAR_4);
 }
}
