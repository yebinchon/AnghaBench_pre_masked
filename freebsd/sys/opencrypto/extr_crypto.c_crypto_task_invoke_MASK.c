
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {int crp_session; } ;
struct cryptocap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryptop*) ;
 struct cryptocap* FUNC_1 (int) ;
 int FUNC_2 (struct cryptocap*,struct cryptop*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct cryptocap *VAR_3;
 struct cryptop *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = (struct cryptop *)VAR_1;

 VAR_5 = FUNC_3(VAR_4->crp_session);
 VAR_3 = FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_3, VAR_4, 0);
 if (VAR_6 == VAR_0)
  FUNC_0(VAR_4);
}
