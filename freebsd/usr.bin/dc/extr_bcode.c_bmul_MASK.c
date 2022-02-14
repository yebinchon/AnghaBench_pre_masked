
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct number {int dummy; } ;
struct TYPE_2__ {int scale; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct number*,struct number*,struct number*,int ) ;
 int FUNC_1 (struct number*) ;
 struct number* FUNC_2 () ;
 struct number* FUNC_3 () ;
 int FUNC_4 (struct number*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct number *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = FUNC_3();
 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = FUNC_3();
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_1);
  return;
 }

 VAR_3 = FUNC_2();
 FUNC_0(VAR_3, VAR_1, VAR_2, VAR_0.scale);

 FUNC_4(VAR_3);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
}
