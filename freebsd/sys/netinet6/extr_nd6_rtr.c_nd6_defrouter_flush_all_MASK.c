
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int dummy; } ;
struct nd6_drhead {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct nd_defrouter* FUNC_2 (struct nd6_drhead*) ;
 int FUNC_3 (struct nd6_drhead*) ;
 int FUNC_4 (struct nd6_drhead*,struct nd_defrouter*,int ) ;
 struct nd6_drhead VAR_0 ;
 int FUNC_5 (struct nd_defrouter*) ;
 int FUNC_6 (struct nd_defrouter*,struct nd6_drhead*) ;
 int VAR_1 ;

void
FUNC_7(void)
{
 struct nd_defrouter *VAR_2;
 struct nd6_drhead VAR_3;

 FUNC_3(&VAR_3);

 FUNC_0();
 while ((VAR_2 = FUNC_2(&VAR_0)) != ((void*)0))
  FUNC_6(VAR_2, &VAR_3);
 FUNC_1();

 while ((VAR_2 = FUNC_2(&VAR_3)) != ((void*)0)) {
  FUNC_4(&VAR_3, VAR_2, VAR_1);
  FUNC_5(VAR_2);
 }
}
