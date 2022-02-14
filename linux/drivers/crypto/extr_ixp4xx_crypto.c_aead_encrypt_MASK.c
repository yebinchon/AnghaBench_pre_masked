
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int iv; int cryptlen; int assoclen; } ;


 int FUNC_0 (struct aead_request*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct aead_request *VAR_0)
{
 return FUNC_0(VAR_0, 1, VAR_0->assoclen, VAR_0->cryptlen, VAR_0->iv);
}
