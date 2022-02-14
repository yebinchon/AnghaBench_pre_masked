
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int assoclen; } ;


 int VAR_0 ;
 int FUNC_0 (struct aead_request*) ;
 struct aead_request* FUNC_1 (struct aead_request*) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_1)
{
 if (VAR_1->assoclen != 16 && VAR_1->assoclen != 20)
  return -VAR_0;

 VAR_1 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1);
}
