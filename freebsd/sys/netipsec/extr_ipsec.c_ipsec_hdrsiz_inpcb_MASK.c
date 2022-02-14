
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secpolicyindex {int dummy; } ;
struct secpolicy {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 struct secpolicy* FUNC_0 (struct inpcb*,int ) ;
 size_t FUNC_1 (struct secpolicy*) ;
 int FUNC_2 (struct inpcb*,struct secpolicyindex*,int ) ;
 struct secpolicy* FUNC_3 (struct secpolicyindex*,int ) ;
 struct secpolicy* FUNC_4 () ;
 int FUNC_5 (struct secpolicy**) ;
 scalar_t__ FUNC_6 (int ) ;

size_t
FUNC_7(struct inpcb *VAR_1)
{
 struct secpolicyindex VAR_2;
 struct secpolicy *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3 == ((void*)0) && FUNC_6(VAR_0)) {
  FUNC_2(VAR_1, &VAR_2, VAR_0);
  VAR_3 = FUNC_3(&VAR_2, VAR_0);
 }
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_4();
 VAR_4 = FUNC_1(VAR_3);
 FUNC_5(&VAR_3);
 return (VAR_4);
}
