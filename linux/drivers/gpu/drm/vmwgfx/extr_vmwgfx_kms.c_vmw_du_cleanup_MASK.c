
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_display_unit {int connector; int encoder; int crtc; int cursor; int primary; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct vmw_display_unit *VAR_0)
{
 FUNC_4(&VAR_0->primary);
 FUNC_4(&VAR_0->cursor);

 FUNC_1(&VAR_0->connector);
 FUNC_2(&VAR_0->crtc);
 FUNC_3(&VAR_0->encoder);
 FUNC_0(&VAR_0->connector);
}
