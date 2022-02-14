
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int assoclen; } ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ) ;
 struct aead_request* FUNC_2 (struct aead_request*) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->assoclen);
 if (VAR_1)
  return VAR_1;

 VAR_0 = FUNC_2(VAR_0);

 return FUNC_0(VAR_0);
}
