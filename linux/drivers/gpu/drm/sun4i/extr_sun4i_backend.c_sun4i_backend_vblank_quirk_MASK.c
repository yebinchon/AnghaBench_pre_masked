
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_engine {int dummy; } ;
struct sun4i_frontend {int dummy; } ;
struct sun4i_backend {int frontend_teardown; int frontend_lock; struct sun4i_frontend* frontend; } ;


 struct sun4i_backend* FUNC_0 (struct sunxi_engine*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sun4i_frontend*) ;

__attribute__((used)) static void FUNC_4(struct sunxi_engine *VAR_0)
{
 struct sun4i_backend *VAR_1 = FUNC_0(VAR_0);
 struct sun4i_frontend *VAR_2 = VAR_1->frontend;

 if (!VAR_2)
  return;
 FUNC_1(&VAR_1->frontend_lock);
 if (VAR_1->frontend_teardown) {
  FUNC_3(VAR_2);
  VAR_1->frontend_teardown = 0;
 }
 FUNC_2(&VAR_1->frontend_lock);
}
