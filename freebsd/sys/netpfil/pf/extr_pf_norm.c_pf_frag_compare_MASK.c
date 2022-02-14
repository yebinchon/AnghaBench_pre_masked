
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_fragment {int fr_id; int fr_proto; int fr_af; int fr_dst; int fr_src; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct pf_fragment *VAR_0, struct pf_fragment *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = VAR_0->fr_id - VAR_1->fr_id) != 0)
  return (VAR_2);
 if ((VAR_2 = VAR_0->fr_proto - VAR_1->fr_proto) != 0)
  return (VAR_2);
 if ((VAR_2 = VAR_0->fr_af - VAR_1->fr_af) != 0)
  return (VAR_2);
 if ((VAR_2 = FUNC_0(&VAR_0->fr_src, &VAR_1->fr_src, VAR_0->fr_af)) != 0)
  return (VAR_2);
 if ((VAR_2 = FUNC_0(&VAR_0->fr_dst, &VAR_1->fr_dst, VAR_0->fr_af)) != 0)
  return (VAR_2);
 return (0);
}
