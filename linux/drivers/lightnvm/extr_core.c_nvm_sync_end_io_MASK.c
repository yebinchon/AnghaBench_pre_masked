
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_rq {struct completion* private; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct nvm_rq *VAR_0)
{
 struct completion *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1);
}
