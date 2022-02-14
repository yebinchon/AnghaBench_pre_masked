
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secpolicy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct secpolicy*) ;
 struct secpolicy* FUNC_1 (int,int ,int) ;

struct secpolicy *
FUNC_2(void)
{
 struct secpolicy *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0, VAR_1 | VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);
 return (VAR_3);
}
