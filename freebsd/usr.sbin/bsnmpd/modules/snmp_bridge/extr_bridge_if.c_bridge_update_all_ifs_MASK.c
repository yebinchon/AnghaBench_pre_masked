
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_if {int dummy; } ;


 struct bridge_if* FUNC_0 () ;
 int VAR_0 ;
 struct bridge_if* FUNC_1 (struct bridge_if*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bridge_if*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 struct bridge_if *VAR_1, *VAR_2;

 for (VAR_1 = FUNC_0(); VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_3(VAR_1);
 }

 FUNC_2();
 VAR_0 = FUNC_4(((void*)0));
}
