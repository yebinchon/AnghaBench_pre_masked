
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcipher_desc {int info; } ;
struct aead_request {int assoclen; int iv; } ;


 int FUNC_0 (struct aead_request*,struct blkcipher_desc*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_0)
{
 struct blkcipher_desc VAR_1;
 int VAR_2;

 VAR_1.info = VAR_0->iv;

 VAR_2 = FUNC_1(VAR_1.info);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, &VAR_1, VAR_0->assoclen);
}
