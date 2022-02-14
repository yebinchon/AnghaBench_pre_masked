
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_params {int frame; int pen; int pen_unused; int desc_ptr; int invalid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uclogic_params*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct uclogic_params *VAR_0)
{
 if (!VAR_0->invalid) {
  FUNC_0(VAR_0->desc_ptr);
  if (!VAR_0->pen_unused)
   FUNC_3(&VAR_0->pen);
  FUNC_2(&VAR_0->frame);
  FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 }
}
