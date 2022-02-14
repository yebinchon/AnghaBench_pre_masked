
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc {int (* fn0 ) (struct era_metadata*) ;int * fn1; } ;
struct era {int dummy; } ;


 int FUNC_0 (struct era*,struct rpc*) ;

__attribute__((used)) static int FUNC_1(struct era *VAR_0, int (*VAR_1)(struct era_metadata *))
{
 struct rpc VAR_2;
 VAR_2.fn0 = VAR_1;
 VAR_2.fn1 = ((void*)0);

 return FUNC_0(VAR_0, &VAR_2);
}
