
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int dummy; } ;
struct dadq {int dummy; } ;


 int FUNC_0 (struct dadq*) ;
 struct dadq* FUNC_1 (struct ifaddr*,int *) ;
 int FUNC_2 (struct dadq*) ;
 int FUNC_3 (struct dadq*) ;

void
FUNC_4(struct ifaddr *VAR_0)
{
 struct dadq *VAR_1;

 VAR_1 = FUNC_1(VAR_0, ((void*)0));
 if (!VAR_1) {

  return;
 }

 FUNC_3(VAR_1);
 FUNC_0(VAR_1);


 FUNC_2(VAR_1);
}
