
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SHA512; int SHA256; int SHA1; int RIPEMD160; int MD5; } ;
typedef TYPE_1__ DIGEST_CTX ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(DIGEST_CTX *VAR_1)
{

 switch (VAR_0) {
 case 132:
  break;
 case 133:
  FUNC_0(&(VAR_1->MD5));
  break;
 case 131:
  FUNC_1(&(VAR_1->RIPEMD160));
  break;
 case 130:
  FUNC_2(&(VAR_1->SHA1));
  break;
 case 129:
  FUNC_3(&(VAR_1->SHA256));
  break;
 case 128:
  FUNC_4(&(VAR_1->SHA512));
  break;
 }
}
