
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc {int (* fn1 ) (struct era_metadata*,void*) ;void* arg; int * fn0; } ;
struct era {int dummy; } ;


 int FUNC_0 (struct era*,struct rpc*) ;

__attribute__((used)) static int FUNC_1(struct era *VAR_0,
        int (*VAR_1)(struct era_metadata *, void *), void *VAR_2)
{
 struct rpc VAR_3;
 VAR_3.fn0 = ((void*)0);
 VAR_3.fn1 = VAR_1;
 VAR_3.arg = VAR_2;

 return FUNC_0(VAR_0, &VAR_3);
}
