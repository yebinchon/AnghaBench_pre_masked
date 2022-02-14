
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct skcipher_request*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, int VAR_2)
{
 struct skcipher_request *VAR_3 = VAR_1;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 if (VAR_2) {
  FUNC_2("request failed status 0x%0x\n", VAR_2);
  VAR_2 = -VAR_0;
 }

 FUNC_3(VAR_3, VAR_2);
}
