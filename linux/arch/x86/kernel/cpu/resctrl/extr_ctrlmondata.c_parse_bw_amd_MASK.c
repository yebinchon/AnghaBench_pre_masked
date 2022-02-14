
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int dummy; } ;
struct rdt_parse_data {int buf; } ;
struct rdt_domain {int have_new_ctrl; unsigned long new_ctrl; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*,struct rdt_resource*) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(struct rdt_parse_data *VAR_1, struct rdt_resource *VAR_2,
   struct rdt_domain *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->have_new_ctrl) {
  FUNC_1("Duplicate domain %d\n", VAR_3->id);
  return -VAR_0;
 }

 if (!FUNC_0(VAR_1->buf, &VAR_4, VAR_2))
  return -VAR_0;

 VAR_3->new_ctrl = VAR_4;
 VAR_3->have_new_ctrl = 1;

 return 0;
}
