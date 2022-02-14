
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xformsw {int xf_cntr; } ;


 int VAR_0 ;
 int FUNC_0 (struct xformsw*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct xformsw*) ;

void
FUNC_5(void *VAR_2)
{
 struct xformsw *VAR_3 = (struct xformsw *)VAR_2;

 FUNC_1();
 FUNC_0(VAR_3, VAR_1);
 FUNC_2();


 FUNC_4(VAR_3);
 if (VAR_3->xf_cntr & VAR_0)
  FUNC_3(&VAR_3->xf_cntr);
}
