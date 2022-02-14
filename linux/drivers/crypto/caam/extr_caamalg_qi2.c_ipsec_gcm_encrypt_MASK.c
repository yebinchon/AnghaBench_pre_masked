
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int assoclen; } ;


 int FUNC_0 (struct aead_request*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_0)
{
 return FUNC_1(VAR_0->assoclen) ? : FUNC_0(VAR_0);
}
