
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int dummy; } ;
struct dadq {int dad_na_icount; } ;


 struct dadq* FUNC_0 (struct ifaddr*,int *) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct ifaddr *VAR_0)
{
 struct dadq *VAR_1;

 if (VAR_0 == ((void*)0))
  FUNC_2("ifa == NULL in nd6_dad_na_input");

 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 if (VAR_1 != ((void*)0)) {
  VAR_1->dad_na_icount++;
  FUNC_1(VAR_1);
 }
}
