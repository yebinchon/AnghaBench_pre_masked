
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_utrap {int ut_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct md_utrap* FUNC_0 (int,int ,int) ;

struct md_utrap *
FUNC_1(void)
{
 struct md_utrap *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct md_utrap), VAR_0, VAR_1 | VAR_2);
 VAR_3->ut_refcnt = 1;
 return (VAR_3);
}
