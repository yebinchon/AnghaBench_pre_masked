
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchap {int rchap_secret; } ;


 struct rchap* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*) ;

struct rchap *
FUNC_3(const char *VAR_0)
{
 struct rchap *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  FUNC_2(1, "calloc");

 VAR_1->rchap_secret = FUNC_1(VAR_0);

 return (VAR_1);
}
