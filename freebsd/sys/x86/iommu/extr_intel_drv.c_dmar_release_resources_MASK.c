
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int * ctx_obj; int * domids; int * regs; int reg_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (struct dmar_unit*) ;
 int FUNC_5 (struct dmar_unit*) ;
 int FUNC_6 (struct dmar_unit*) ;
 int FUNC_7 (int ,struct dmar_unit*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_2, struct dmar_unit *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_7(VAR_2, VAR_3, VAR_4);
 if (VAR_3->regs != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1, VAR_3->reg_rid,
      VAR_3->regs);
  FUNC_1(VAR_2, VAR_1, VAR_3->reg_rid,
      VAR_3->regs);
  VAR_3->regs = ((void*)0);
 }
 if (VAR_3->domids != ((void*)0)) {
  FUNC_2(VAR_3->domids);
  VAR_3->domids = ((void*)0);
 }
 if (VAR_3->ctx_obj != ((void*)0)) {
  FUNC_8(VAR_3->ctx_obj);
  VAR_3->ctx_obj = ((void*)0);
 }
}
