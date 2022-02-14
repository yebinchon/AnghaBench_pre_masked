
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct strbuf VAR_5 = VAR_0;
 if (!VAR_1 || FUNC_0() != VAR_3)
  return;
 if (VAR_2) {
  FUNC_2(&VAR_5, VAR_2);
  FUNC_1(&VAR_5, 0);
  FUNC_4(&VAR_5);
 }
 if (VAR_4) {
  FUNC_2(&VAR_5, VAR_4);
  FUNC_1(&VAR_5, 0);
 }
 FUNC_3(&VAR_5);
}
