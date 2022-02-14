
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int flags; int clkdm_offs; int cm_inst; } ;


 int VAR_0 ;
 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clockdomain *VAR_1)
{
 bool VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1->cm_inst, VAR_1->clkdm_offs);

 if (!VAR_2 && (VAR_1->flags & VAR_0))
  FUNC_0(VAR_1);

 return 0;
}
