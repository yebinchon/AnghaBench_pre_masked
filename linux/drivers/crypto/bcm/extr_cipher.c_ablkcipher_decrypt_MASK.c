
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ablkcipher_request {int nbytes; } ;


 int FUNC_0 (struct ablkcipher_request*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ablkcipher_request *VAR_0)
{
 FUNC_1("ablkcipher_decrypt() nbytes:%u\n", VAR_0->nbytes);
 return FUNC_0(VAR_0, 0);
}
