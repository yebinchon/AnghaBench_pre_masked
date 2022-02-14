
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_utrap {int ut_refcnt; } ;


 int FUNC_0 (int ,struct md_utrap*) ;
 int FUNC_1 (int ,struct md_utrap*) ;
 int VAR_0 ;

struct md_utrap *
FUNC_2(struct md_utrap *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_0, VAR_1);
 VAR_1->ut_refcnt++;
 FUNC_1(VAR_0, VAR_1);
 return (VAR_1);
}
