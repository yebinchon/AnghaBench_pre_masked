
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct dmar_unit {int hw_gcmd; int ctx_obj; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dmar_unit*,int ) ;
 int FUNC_6 (struct dmar_unit*,int ,int) ;
 int FUNC_7 (struct dmar_unit*,int ,int ) ;
 int FUNC_8 (int ,int ) ;

int
FUNC_9(struct dmar_unit *VAR_5)
{
 vm_page_t VAR_6;
 int VAR_7;





 FUNC_0(VAR_5);

 FUNC_2(VAR_5->ctx_obj);
 VAR_6 = FUNC_8(VAR_5->ctx_obj, 0);
 FUNC_3(VAR_5->ctx_obj);
 FUNC_7(VAR_5, VAR_4, FUNC_4(VAR_6));
 FUNC_6(VAR_5, VAR_0, VAR_5->hw_gcmd | VAR_1);
 FUNC_1(((FUNC_5(VAR_5, VAR_2) & VAR_3)
     != 0));
 return (VAR_7);
}
