
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_utrap {int ut_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct md_utrap*,int ) ;
 int FUNC_1 (int ,struct md_utrap*) ;
 int FUNC_2 (int ,struct md_utrap*) ;
 int VAR_1 ;

void
FUNC_3(struct md_utrap *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;
 FUNC_1(VAR_1, VAR_2);
 VAR_2->ut_refcnt--;
 VAR_3 = VAR_2->ut_refcnt;
 FUNC_2(VAR_1, VAR_2);
 if (VAR_3 == 0)
  FUNC_0(VAR_2, VAR_0);
}
