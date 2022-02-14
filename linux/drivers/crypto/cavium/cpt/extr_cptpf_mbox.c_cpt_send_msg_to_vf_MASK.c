
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpt_mbox {int msg; int data; } ;
struct cpt_device {int reg_base; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpt_device *VAR_0, int VAR_1,
          struct cpt_mbox *VAR_2)
{

 FUNC_1(VAR_0->reg_base, FUNC_0(0, VAR_1, 1),
   VAR_2->data);
 FUNC_1(VAR_0->reg_base, FUNC_0(0, VAR_1, 0), VAR_2->msg);
}
