
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {int match_tag; scalar_t__ match_tag_not; } ;
struct mbuf {int dummy; } ;



int
FUNC_0(struct mbuf *VAR_0, struct pf_rule *VAR_1, int *VAR_2, int VAR_3)
{
 if (*VAR_2 == -1)
  *VAR_2 = VAR_3;

 return ((!VAR_1->match_tag_not && VAR_1->match_tag == *VAR_2) ||
     (VAR_1->match_tag_not && VAR_1->match_tag != *VAR_2));
}
