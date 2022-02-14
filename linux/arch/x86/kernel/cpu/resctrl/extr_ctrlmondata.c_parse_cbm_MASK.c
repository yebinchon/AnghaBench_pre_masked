
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdtgroup {scalar_t__ mode; int closid; } ;
struct rdt_resource {int (* cbm_validate ) (int ,int *,struct rdt_resource*) ;} ;
struct rdt_parse_data {int buf; struct rdtgroup* rdtgrp; } ;
struct rdt_domain {int have_new_ctrl; int new_ctrl; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct rdt_resource*,struct rdt_domain*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct rdt_domain*,int ) ;
 scalar_t__ FUNC_4 (struct rdt_domain*) ;
 int FUNC_5 (int ,int *,struct rdt_resource*) ;

int FUNC_6(struct rdt_parse_data *VAR_4, struct rdt_resource *VAR_5,
       struct rdt_domain *VAR_6)
{
 struct rdtgroup *VAR_7 = VAR_4->rdtgrp;
 u32 VAR_8;

 if (VAR_6->have_new_ctrl) {
  FUNC_0("Duplicate domain %d\n", VAR_6->id);
  return -VAR_0;
 }





 if (VAR_7->mode == VAR_2 &&
     FUNC_4(VAR_6)) {
  FUNC_1("Pseudo-locked region in hierarchy\n");
  return -VAR_0;
 }

 if (!VAR_5->cbm_validate(VAR_4->buf, &VAR_8, VAR_5))
  return -VAR_0;

 if ((VAR_7->mode == VAR_1 ||
      VAR_7->mode == VAR_3) &&
     FUNC_3(VAR_6, VAR_8)) {
  FUNC_1("CBM overlaps with pseudo-locked region\n");
  return -VAR_0;
 }





 if (FUNC_2(VAR_5, VAR_6, VAR_8, VAR_7->closid, 1)) {
  FUNC_1("Overlaps with exclusive group\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_5, VAR_6, VAR_8, VAR_7->closid, 0)) {
  if (VAR_7->mode == VAR_1 ||
      VAR_7->mode == VAR_2) {
   FUNC_1("Overlaps with other group\n");
   return -VAR_0;
  }
 }

 VAR_6->new_ctrl = VAR_8;
 VAR_6->have_new_ctrl = 1;

 return 0;
}
