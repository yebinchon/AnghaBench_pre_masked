
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpt_vf {int reg_base; } ;
struct cpt_mbox {int data; int msg; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpt_vf *VAR_0, struct cpt_mbox *VAR_1)
{

 FUNC_1(VAR_0->reg_base, FUNC_0(0, 0, 0),
   VAR_1->msg);
 FUNC_1(VAR_0->reg_base, FUNC_0(0, 0, 1),
   VAR_1->data);
}
