
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svm_fault {int client; int gpc; int hub; int inst; } ;
struct nouveau_svm {int dummy; } ;


 int FUNC_0 (struct nouveau_svm*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_svm *VAR_0,
          struct nouveau_svm_fault *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->inst,
          VAR_1->hub,
          VAR_1->gpc,
          VAR_1->client);
}
